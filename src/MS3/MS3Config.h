#ifndef MS3Config_h
#define MS3Config_h

// #define MS3_DEBUG_MODE

/**
 * Overridable config.
 *
 * MS3_WRITE_INTERVAL_MSEC: The delay before a new message is sent after a write action.
 * MS3_READ_INTERVAL_MSEC: The delay before a new message is sent after a read action.
 * MS3_RECEIVE_INTERVAL_MSEC: The delay after receiving data from the MS-3.
 * MS3_HEADER: The manufacturer and device id header.
 * MS3_QUEUE_SIZE: The maximum number of items in the send queue.
 */

#ifndef MS3_WRITE_INTERVAL_MSEC
// const uint8_t MS3_WRITE_INTERVAL_MSEC = 20;  // Was 20
const uint8_t MS3_WRITE_INTERVAL_MSEC = 3;  // Was 20
#endif

#ifndef MS3_READ_INTERVAL_MSEC
// const uint8_t MS3_READ_INTERVAL_MSEC = 200;  // Was 200
const uint8_t MS3_READ_INTERVAL_MSEC = 35;  // Was 200
#endif

#ifndef MS3_RECEIVE_INTERVAL_MSEC
// const uint8_t MS3_RECEIVE_INTERVAL_MSEC = 20;  // Was 20
const uint8_t MS3_RECEIVE_INTERVAL_MSEC = 3;  // Was 20
#endif

#ifndef MS3_HEADER
const uint8_t MS3_HEADER[6] = { 0x41, 0x00, 0x00, 0x00, 0x00, 0x33 };  // Katana header
#endif

#ifndef MS3_QUEUE_SIZE
const uint16_t MS3_QUEUE_SIZE = 800;  // Was 20
#endif

/**
 * The configuration options below are internal and should not be changed.
 */
//

#ifdef MS3_DEBUG_MODE
  #define MS3_DEBUG(x) Serial.print(x)
  #define MS3_DEBUGLN(x) Serial.println(x)
  #define MS3_DEBUG_AS(x, y) Serial.print(x, y)
  #define MS3_DEBUGLN_AS(x, y) Serial.println(x, y)
#else
  #define MS3_DEBUG(x) (void)(x)
  #define MS3_DEBUGLN(x) (void)(x)
  #define MS3_DEBUG_AS(x, y) (void)(x)
  #define MS3_DEBUGLN_AS(x, y) (void)(x)
#endif

// General configuration.

#define MAX_PACKET_SIZE 512
const unsigned int INIT_DELAY_MSEC = 100;

enum MS3_Actions
{
  MS3_WRITE = 0x12,
  MS3_READ = 0x11
};

// Return values.
enum MS3_States
{
  MS3_NOT_READY = 0,
  MS3_READY,
  MS3_DATA_SENT,
  MS3_DATA_RECEIVED,
  MS3_NOTHING_HAPPENED,
  MS3_ALMOST_IDLE,
  MS3_IDLE
};

// Fixed data.
const uint8_t SYSEX_START = 0xF0;
const uint8_t SYSEX_END = 0xF7;
const uint8_t HANDSHAKE[15] = { 0xF0, 0x7E, 0x00, 0x06, 0x02, 0x41, 0x33, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xF7 };
const uint32_t P_EDIT = 0x7F000001;

#endif