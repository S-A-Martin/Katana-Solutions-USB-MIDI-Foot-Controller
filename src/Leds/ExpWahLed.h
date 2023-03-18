#ifndef ExpWahLed_H
#define ExpWahLed_H

#include "Led.h"
#include "Parameters/Parameter.h"

class ExpWahLed : public Led {
  // Public Static Variables
 public:
  Parameter* stateTracker;
  int16_t previousStateIndex = 0;

 public:
  // Constructor
  ExpWahLed(byte index, Parameter* stateTracker);

 private:
  void update() override;
  void updatePreviousTrackers();
  bool flaggedForUpdating();
  byte getColour() override;
  byte getSaturation() override;
  byte getBrightness() override;
  void resetTrackers() override;
};  // End of ExpWahLed

#endif