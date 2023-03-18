#ifndef DummyLed_H
#define DummyLed_H

#include "Led.h"

class DummyLed : public Led {
 public:
  // Constructor
  DummyLed(byte index);
  bool updated = true;
  // Destructor
  ~DummyLed();

 private:
  void update() override;
  byte getColour() override;
  byte getSaturation() override;
  byte getBrightness() override;
  void resetTrackers() override;
};  // End of ChannelLed

#endif