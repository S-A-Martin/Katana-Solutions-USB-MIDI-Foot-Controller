#ifndef ChannelLed_H
#define ChannelLed_H

#include "Led.h"
#include "Parameters/Parameter.h"

class ChannelLed : public Led {
  // Public Static Variables
 public:
  Parameter* stateTracker;
  int16_t previousStateIndex = 0;

 public:
  // Constructor
  ChannelLed(byte index, Parameter* stateTracker, byte channel);

  // Destructor
  ~ChannelLed();

 private:
  byte channel;
  // Private Accessors - NONE
  // Private Modifiers - NONE
  // Private Functions - NONE
  void update() override;
  void updatePreviousTrackers();
  bool flaggedForUpdating();
  byte getColour() override;
  byte getSaturation() override;
  byte getBrightness() override;
  void resetTrackers() override;
};  // End of ChannelLed

#endif