/*

  FUTURE STEVE - READ THIS!!!

  Okay so the 'bulk' data was borking stuff as we're not actually reading it yet.
  When we call midi.read() we then also get the receivedSysex callback. This sets a member variable recAddress recData etc.

  Later in update if midi.read returned true to say we have data, then we steal the recAddress and recData and put them in
  'incomingData and incomingAddress' for the controller to then handle later.

  Right.... so in the receivedSysex funtion... I set recAddress to 0 then if the sysex is bigger than 18bytes (like bulk is)
  we simply return leaving recAddress as 0 still.

  That means if we wanted to do a 'midi read' but ignore anything over 18bytes we can check for midi.read() && recAddress (i.e not 0)

  So to receive bulk data remove the && recAddress in update -> midi.read()... and also in handle sysex you can remove the 18 byte guard.








 * This version of the MS-3 library has been modified to use the USBHost_t36.h library from
 * PJRC: https://github.com/PaulStoffregen/USBHost_t36 instead of the USB Host Shield 2.0 library mentioned below.
 *
 *
 *
 * This is a simple library to control the Boss MS-3.
 *
 * Check README.md or visit https://github.com/MrHaroldA/MS3 for more information.
 *
 * Debug information:
 * - Define MS3_DEBUG_MODE in your sketch before including this library.
 *
 * Dependencies
 * - An Arduino with a USB Host Shield
 * - https://github.com/felis/USB_Host_Shield_2.0
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MS3_h
  #define MS3_h

  #include "Arduino.h"
  #include <USBHost_t36.h>

  #include "MS3Config.h"

  #include "Queue.h"

class MS3 {
 public:
  // The handle sysex callback from the USBHost_t36 lib requires a void func pointer. As we can't hook in a member function it needed to be made static.
  // In order to still access member variables inside the static function (and as there is only ever one MS3 instance anyway) there is a static MS3* instance we can use.
  // Not ideal... But a working fix for now.
  static MS3* instance;

  USBHost myusb;
  MIDIDevice_BigBuffer midiDevice = { myusb };
  uint32_t recAddress;
  uint8_t recData;
  uint8_t recData2;  // second uint8_t for 2 byte received data

  // Load the Queue class.
  Queue queue;

  bool ready = false;
  uint32_t nextMessage = 0;  // Will hold the time at which to next process a message

  // Prints the full sysex message in hex and data length
  void printSysex(const uint8_t* data, uint16_t dataLength, const uint8_t action);

  // A USBHost_t36.h callback - called when a complete sysex message is received.
  static void receivedSysex(const uint8_t* incomingSysex, uint16_t sysexLength, bool complete = true);

  // Sends the final sysex message to the midi device. Note! This doesn't construct the message... only  'void send' will do that.
  void sendSysex(uint32_t dataLength, uint8_t* data);

  // The last bit of the data sent to the MS-3 contains a checksum of the parameter and data.
  uint8_t checksum(uint8_t const* data, uint8_t dataLength);

  // 'countSysExDataSize' credit: https://github.com/felis/USB_Host_Shield_2.0/blob/master/usbh_midi.cpp
  uint16_t countSysExDataSize(uint8_t* dataptr);

  // Construct and send a full SysEx message.
  void send(const uint32_t address, uint8_t* data, uint8_t dataLength, uint8_t action);

  // Send the data to the MS-3.
  void send(uint8_t* data);

  // Check if the USB layer is ready.
  bool isReady();

  // Constructor.
  MS3();

  // Set up the USB layer.
  bool begin();

  // Init the editor mode.
  void setEditorMode();

  // This is the main function for both receiving data, and sending data when there's nothing to receive.
  uint8_t update(uint32_t& parameter, uint8_t& data);

  // Set this single byte parameter on the MS-3. Optionally pad it with leading zero-bytes with a dataLength >= 1.
  void write(const uint32_t address, uint8_t data, uint8_t dataLength = 1);

  // Tell the MS-3 to send us the value of this parameter.
  void read(const uint32_t address, uint8_t data);

  // Flush the queue if it's not empty.
  void flushQueue();
};
#endif
//