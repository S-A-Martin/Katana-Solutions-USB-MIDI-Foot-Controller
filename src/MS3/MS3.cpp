#include "MS3.h"

MS3* MS3::instance = nullptr;

void MS3::printSysex(const uint8_t* data, uint16_t dataLength, const uint8_t action) {
  
  #ifdef MS3_DEBUG_MODE
  if (action == MS3_DATA_RECEIVED)
    MS3_DEBUG(F("R"));
  if (action == MS3_DATA_SENT)
    MS3_DEBUG(F("T"));
  MS3_DEBUG(F("x: "));

  char buf[10];
  for (uint8_t i = 0; i < dataLength; i++) {
    sprintf(buf, "0x%02hX", data[i]);
    MS3_DEBUG(buf);
    if (i != dataLength - 1)
      MS3_DEBUG(F(", "));
  }
  MS3_DEBUG(F(" ["));
  MS3_DEBUG(dataLength);
  MS3_DEBUGLN(F(" bytes]"));
  #endif
}

void MS3::receivedSysex(const uint8_t* incomingSysex, uint16_t sysexLength, bool complete) {
  
  instance->recAddress = 0;
  instance->recData = 0;
  instance->recData2 = 0;

  if (sysexLength > 18)
    return;

  for (uint16_t i = 0; i < 4; i++)
    instance->recAddress += (uint32_t)incomingSysex[8 + i] << (3 - i) * 8;

  instance->recData = (uint8_t)incomingSysex[sysexLength - 3];

  if (sysexLength == 16) {
    instance->recData2 = (uint8_t)incomingSysex[sysexLength - 4];  // second uint8_t for 2 byte received data

    // If the data is one byte longer, add 128 to the return value for a full uint8_t range.
    if (incomingSysex[sysexLength - 4] == 0x01)
      instance->recData += 128;
  }

  // MS3_DEBUG("Parameter is: 0x");
  // MS3_DEBUG_AS(instance->recAddress, HEX);
  // MS3_DEBUG(" Data is: 0x");
  // if (sysexLength == 16) {
  //   MS3_DEBUG_AS(instance->recData2, HEX);
  //   MS3_DEBUG(", 0x");
  // }
  // MS3_DEBUG_AS(instance->recData, HEX);
  // MS3_DEBUGLN();

  instance->printSysex(incomingSysex, sysexLength, MS3_DATA_RECEIVED);
}

void MS3::sendSysex(uint32_t dataLength, uint8_t* data) {
  
  midiDevice.sendSysEx(dataLength, data, true);
  printSysex(data, dataLength, MS3_DATA_SENT);
}

uint8_t MS3::checksum(uint8_t const* data, uint8_t dataLength) {
  
  uint8_t sum = 0, i;

  for (i = 8; i < 12 + dataLength; i++)
    sum = (sum + data[i]) & 0x7F;

  return (128 - sum) & 0x7F;
}

uint16_t MS3::countSysExDataSize(uint8_t* dataptr) {
  
  // 'countSysExDataSize' credit: https://github.com/felis/USB_Host_Shield_2.0/blob/master/usbh_midi.cpp

  uint16_t count = 1;

  if (*dataptr != 0xf0)  // not SysEx
    return 0;

  // Search terminator(0xf7)
  while (*dataptr != 0xf7) {
    dataptr++;
    count++;
    // Limiter (default: 256 uint8_ts)
    if (count > MAX_PACKET_SIZE) {
      count = 0;
      break;
    }
  }
  return count;
}

void MS3::send(const uint32_t address, uint8_t* data, uint8_t dataLength, uint8_t action) {
  
  uint8_t sysex[14 + dataLength] = { 0 };

  memcpy(sysex + 1, MS3_HEADER, 7);
  sysex[8] = (uint8_t)(address >> 24);
  sysex[9] = (uint8_t)(address >> 16);
  sysex[10] = (uint8_t)(address >> 8);
  sysex[11] = (uint8_t)(address);
  memcpy(sysex + 12, data, dataLength);

  sysex[0] = SYSEX_START;
  sysex[7] = action;
  sysex[12 + dataLength] = checksum(sysex, dataLength);
  sysex[13 + dataLength] = SYSEX_END;

  send(sysex);
}

void MS3::send(uint8_t* data) {
  
  uint8_t dataLength = countSysExDataSize(data);
  midiDevice.sendSysEx(dataLength, data, true);
  printSysex(data, dataLength, MS3_DATA_SENT);
}

bool MS3::isReady() {
  
  myusb.Task();
  if (midiDevice)
    return true;
  MS3::ready = false;
  return false;
}

MS3::MS3() { instance = this; }

bool MS3::begin() {
  
  myusb.begin();
  midiDevice.setHandleSysEx(receivedSysex);
  return isReady();
}

void MS3::setEditorMode() {
  
  MS3::send((uint8_t*)HANDSHAKE);
  delay(MS3_WRITE_INTERVAL_MSEC);
  MS3::send((uint8_t*)HANDSHAKE);
  delay(MS3_WRITE_INTERVAL_MSEC);
  uint8_t data[1] = { 0x01 };  // MS3::send take a pointer
  MS3::send(P_EDIT, data, 1, MS3_WRITE);
  delay(INIT_DELAY_MSEC);
  MS3_DEBUGLN(F("# Editor Mode Set #"));
}

uint8_t MS3::update(uint32_t& parameter, uint8_t& data) {
  
  // Are we ready?
  if (MS3::isReady()) {
    if (!MS3::ready) {
      MS3::ready = true;
      return MS3_READY;
    }
  }
  else {
    return MS3_NOT_READY;
  }
  // Is there data waiting to be picked up?
  if (midiDevice.read() && recAddress) {
    parameter = recAddress;
    data = recData;
    MS3::nextMessage = millis() + MS3_RECEIVE_INTERVAL_MSEC;
    return MS3_DATA_RECEIVED;
  }

  // Check if we need to send out a queued item.
  queueItem item = {};
  if (MS3::nextMessage <= millis() && queue.read(item)) {
    // Construct the data to send to the MS-3.
    uint8_t input[item.dataLength] = { 0 };
    input[item.dataLength - 1] = item.data % 128;
    if (item.dataLength >= 2) {
      input[item.dataLength - 2] = (item.data >= 128) ? 1 : 0;
    }

    // Send the queue item to the MS-3.
    MS3::send(item.address, input, item.dataLength, item.operation);

    // Store when the next message may be sent.
    MS3::nextMessage = millis() + (item.operation == MS3_READ ? MS3_READ_INTERVAL_MSEC : MS3_WRITE_INTERVAL_MSEC);
    return MS3_DATA_SENT;
  }

  // Are we done? Did we wait for the last message to finish?
  if (queue.isEmpty())
    return (MS3::nextMessage > millis()) ? MS3_ALMOST_IDLE : MS3_IDLE;

  // Nothing interesting happened.
  return MS3_NOTHING_HAPPENED;
}

void MS3::write(const uint32_t address, uint8_t data, uint8_t dataLength) {
  
  queue.write(address, data, dataLength, MS3_WRITE);
}

void MS3::read(const uint32_t address, uint8_t data) {
  
  queue.write(address, data, 4, MS3_READ);
}

void MS3::flushQueue() {
  
  if (queue.isEmpty()) return;
  queue.flush();
}
