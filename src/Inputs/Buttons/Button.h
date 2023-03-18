#ifndef Button_h
#define Button_h

#include "../Input.h"
#include "Config/Config.h"
#include <Arduino.h>

class Button : public Input {
 public:
  // Instances
 public:
  Button(uint8_t inputPin, uint8_t buttonID, unsigned long debounce = 10, unsigned long longPressLength = 450);
  InputAction read() override;
  bool isHeld();

 private:
  uint8_t inputPin;
  uint8_t buttonID;
  unsigned long debounce;
  unsigned long longPressLength;
  bool lastState = HIGH;
  uint32_t timeCapture = 0;
};
#endif