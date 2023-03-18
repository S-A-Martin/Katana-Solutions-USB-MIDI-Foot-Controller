#ifndef WaitForSerial_h
#define WaitForSerial_h

#ifdef DEBUG_MODE
class WaitForSerial {
 public:
  WaitForSerial() {
    S_BEGIN(BAUD_RATE);
    while (NOT_SERIAL) {
      S_PRINTLN("Waiting for Serial...");
    }
    S_PRINTLN("Serial Online...");
    S_PRINTLN();
    S_PRINTLN();
  }
};
WaitForSerial WFS;
#endif
#endif