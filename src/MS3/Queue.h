#ifndef MS3_Queue_h
#define MS3_Queue_h

#include "Arduino.h"
#include "MS3Config.h"

typedef struct {
  unsigned long address;
  byte data;
  byte data2;
  byte dataLength;
  byte operation;
} queueItem;

class Queue {
 private:
  queueItem items[MS3_QUEUE_SIZE] = {};
  byte writePointer = 0;

  /**
   * Shift an item off the beginning of the queue.
   */
  queueItem shift();

 public:
  /**
   * Get the first queued item.
   */
  bool read(queueItem& item);

  /**
   * Add an item to the queue.
   */
  void write(unsigned long address, byte data, byte dataLength, byte operation);

  /**
   * Check if the queue is currently empty.
   */
  bool isEmpty();

  /**
   * Flush the queue.
   */
  void flush();
};

#endif
