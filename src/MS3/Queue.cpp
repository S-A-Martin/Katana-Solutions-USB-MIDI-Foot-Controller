
#include "Queue.h"

/**
 * Shift an item off the beginning of the queue.
 */
queueItem Queue::shift() {
  queueItem item = Queue::items[0];

  // Move all queued items one up.
  for (byte i = 1; i < Queue::writePointer; i++) {
    Queue::items[i - 1] = Queue::items[i];
  }
  Queue::writePointer--;

  return item;
}

/**
 * Get the first queued item.
 */
bool Queue::read(queueItem& item) {
  if (Queue::isEmpty()) {
    return false;
  }

  item = Queue::shift();

  MS3_DEBUG(F("Picked up item 0 from the queue: "));
  MS3_DEBUG_AS(item.address, HEX);
  MS3_DEBUG(F(" / 0x"));
  MS3_DEBUG_AS(item.operation, HEX);
  MS3_DEBUG(F(" / 0x"));
  MS3_DEBUG_AS(item.data, HEX);
  MS3_DEBUGLN(F("."));

  return true;
}

/**
 * Add an item to the queue.
 */
void Queue::write(unsigned long address, byte data, byte dataLength, byte operation) {
  if (Queue::writePointer == MS3_QUEUE_SIZE) {
    MS3_DEBUG(F("*** Queue is full! Discarding the first item: 0x"));
    MS3_DEBUG_AS(Queue::items[0].address, HEX);
    MS3_DEBUG(F(" / 0x"));
    MS3_DEBUG_AS(Queue::items[0].operation, HEX);
    MS3_DEBUG(F(" / 0x"));
    MS3_DEBUG_AS(Queue::items[0].data, HEX);
    MS3_DEBUGLN(F("."));

    // There it goes!
    Queue::shift();
  }

  MS3_DEBUG(F("Add item "));
  MS3_DEBUG(Queue::writePointer);
  MS3_DEBUG(F(" to the queue: 0x"));
  MS3_DEBUG_AS(address, HEX);
  MS3_DEBUG(F(" / 0x"));
  MS3_DEBUG_AS(operation, HEX);
  MS3_DEBUG(F(" / 0x"));
  MS3_DEBUG_AS(data, HEX);
  MS3_DEBUGLN(F("."));

  Queue::items[writePointer].address = address;
  Queue::items[writePointer].data = data;
  Queue::items[writePointer].dataLength = dataLength;
  Queue::items[writePointer].operation = operation;

  Queue::writePointer++;
}

/**
 * Check if the queue is currently empty.
 */
bool Queue::isEmpty() {
  return (Queue::writePointer == 0);
}

/**
 * Flush the queue.
 */
void Queue::flush() {
  Queue::writePointer = 0;

  MS3_DEBUGLN(F("*** Flushed the queue."));
}
