#ifndef EffectLed_H
#define EffectLed_H

#include "Led.h"
#include "Parameters/Parameter.h"

class EffectLed : public Led {
  // Public Static Variables
 public:
  Parameter* stateTracker;
  Parameter* colourTracker;
  int16_t previousStateIndex = 0;
  int16_t previousColourIndex = 0;

 public:
  // Constructor
  EffectLed(byte index, Parameter* stateTracker, Parameter* colourTracker);
  bool flaggedForUpdating();
  void updatePreviousTrackers();
  void update() override;

 private:
  // Private Accessors - NONE
  // Private Modifiers - NONE
  // Private Functions - NONE
  // void update();
  byte getColour() override;
  byte getSaturation() override;
  byte getBrightness() override;
  void resetTrackers() override;
};  // End of EffectLed

#endif