#ifndef Encoder_h
#define Encoder_h

#include "../Input.h"
#include "Config/Config.h"
#include <Arduino.h>

class Encoder : public Input {
 public:
  static uint8_t IDCount;

 public:
  Encoder(uint8_t clockPin, uint8_t dataPin, uint8_t switchPin, uint8_t encoderID,
          uint16_t debounce = 10, uint16_t longPressLength = 450);
  InputAction read() override;

 private:
  uint8_t clockPin;
  uint8_t dataPin;
  uint8_t switchPin;
  uint8_t encoderID;

  uint16_t debounce;
  uint16_t longPressLength;
  uint32_t timeCapture = 0;
  bool clockLastState = HIGH;
  uint32_t switchTimeCapture = 0;
  bool switchLastState = HIGH;
  uint8_t id;

 private:
  InputAction readSwitch();
};
#endif