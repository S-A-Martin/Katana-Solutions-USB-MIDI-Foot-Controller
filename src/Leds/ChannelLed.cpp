
#include "ChannelLed.h"
#include "Tools/Profiling.h"
// Constructor
ChannelLed::ChannelLed(byte index, Parameter* stateTracker, byte channel)
 : Led(index), stateTracker(stateTracker), channel(channel) { PROFILE_FUNCTION(); }

bool ChannelLed::flaggedForUpdating() {
  PROFILE_FUNCTION();
  return previousStateIndex != stateTracker->getIndex();
}

void ChannelLed::updatePreviousTrackers() {
  PROFILE_FUNCTION();
  previousStateIndex = stateTracker->getIndex();
}

// // Private Functions
void ChannelLed::update() {
  PROFILE_FUNCTION();
  if (!flaggedForUpdating()) return;

  setLed();
  updatePreviousTrackers();
}

byte ChannelLed::getColour() {
  PROFILE_FUNCTION();
  return stateTracker->getIndex() == 0 ? 25 : 96;  // ORANGE (Panel): GREEN
}
byte ChannelLed::getSaturation() {
  PROFILE_FUNCTION();
  return Led::globalSaturation;
}

byte ChannelLed::getBrightness() {
  PROFILE_FUNCTION();
  if ((stateTracker->getIndex() == channel) || (stateTracker->getIndex() == 0))
    return Led::globalBrightness;
  return 0;
}

void ChannelLed::resetTrackers() { previousStateIndex = INT16_MAX; }

ChannelLed::~ChannelLed() { PROFILE_FUNCTION(); }