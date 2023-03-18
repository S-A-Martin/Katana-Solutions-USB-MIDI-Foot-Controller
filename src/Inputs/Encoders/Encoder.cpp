#include "Encoder.h"
#include "EncoderActions.h"
#include "Tools/MacroTools.h"
#include "Tools/Profiling.h"

Encoder::Encoder(uint8_t clockPin, uint8_t dataPin, uint8_t switchPin, uint8_t encoderID,
                 uint16_t debounce, uint16_t longPressLength)
 : clockPin(clockPin),
   dataPin(dataPin),
   switchPin(switchPin),
   encoderID(encoderID),
   debounce(debounce),
   longPressLength(longPressLength) {
  pinMode(clockPin, INPUT_PULLUP);
  pinMode(dataPin, INPUT_PULLUP);
  pinMode(switchPin, INPUT_PULLUP);
}

InputAction Encoder::read() {
  PROFILE_FUNCTION();
  bool clockState = digitalRead(clockPin);

  if ((millis() - timeCapture) < debounce) return InputAction();  // Default is interpreted as no action

  timeCapture = millis();

  if (clockState != clockLastState) {
    clockLastState = clockState;
    if (!clockState) {
      if (digitalRead(dataPin))
        return InputAction(CW_TURN, encoderID);
      else
        return InputAction(CCW_TURN, encoderID);
    }
  }
  if (clockState)
    return readSwitch();

  return InputAction();  // Default is interpreted as no action
}

InputAction Encoder::readSwitch() {
  PROFILE_FUNCTION();
  bool currentState = digitalRead(switchPin);
  if (currentState != switchLastState) {
    switchLastState = currentState;
    if (!currentState)
      switchTimeCapture = millis();
    else if (switchTimeCapture && (millis() - switchTimeCapture) > debounce) {
      switchTimeCapture = 0;
      return InputAction(SW_SHORT_PRESS, encoderID);
    }
    else
      switchTimeCapture = 0;
  }

  if (switchTimeCapture && (millis() - switchTimeCapture) > longPressLength) {
    switchTimeCapture = 0;
    return InputAction(SW_LONG_PRESS, encoderID);
  }

  return InputAction();  // Default is interpreted as no action
}