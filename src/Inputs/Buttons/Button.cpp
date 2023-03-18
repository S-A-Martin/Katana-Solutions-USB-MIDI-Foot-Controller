#include "Button.h"
#include "ButtonActions.h"
#include "Tools/MacroTools.h"
#include "Tools/Profiling.h"

Button::Button(uint8_t inputPin, uint8_t buttonID, unsigned long debounce, unsigned long longPressLength)
 : inputPin(inputPin), buttonID(buttonID), debounce(debounce), longPressLength(longPressLength) {
  pinMode(inputPin, INPUT_PULLUP);
}

InputAction Button::read() {
  PROFILE_FUNCTION();
  bool currentState = digitalRead(inputPin);
  if (currentState != lastState) {
    lastState = currentState;
    if (!currentState)
      timeCapture = millis();
    else if (timeCapture && (millis() - timeCapture) > debounce) {
      timeCapture = 0;
      return InputAction(SHORT_PRESS, buttonID);
    }
    else
      timeCapture = 0;
  }

  if (timeCapture && (millis() - timeCapture) > longPressLength) {
    timeCapture = 0;
    return InputAction(LONG_PRESS, buttonID);
  }

  return InputAction();  // Default is interpreted as no action
}

bool Button::isHeld() {
  PROFILE_FUNCTION();
  return digitalRead(inputPin) == LOW;
}