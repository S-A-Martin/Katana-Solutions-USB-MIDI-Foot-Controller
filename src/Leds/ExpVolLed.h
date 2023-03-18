#ifndef ExpVolLed_H
#define ExpVolLed_H

#include "Led.h"
#include "Parameters/Parameter.h"

class ExpVolLed : public Led {
  // Public Static Variables
 public:
  Parameter* stateTracker;
  int16_t previousStateIndex = 100;

 public:
  // Constructor
  ExpVolLed(byte index, Parameter* stateTracker);

 private:
  void update() override;
  void updatePreviousTrackers();
  bool flaggedForUpdating();
  byte getColour() override;
  byte getSaturation() override;
  byte getBrightness() override;
  void resetTrackers() override;
};  // End of ExpVolLed

#endif