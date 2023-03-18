#ifndef Input_h
#define Input_h
#include <Arduino.h>

struct InputAction {
  // Default values of MAX 255 are to be interpreted as no action
  byte action = 255;
  byte ID = 255;
  InputAction(byte action, byte ID) : action(action), ID(ID) {}
  InputAction() {}
};

class Input {
 public:
  virtual void debug() {}
  virtual InputAction read() = 0;
};

#endif