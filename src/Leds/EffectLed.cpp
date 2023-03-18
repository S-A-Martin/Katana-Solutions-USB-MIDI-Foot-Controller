
#include "EffectLed.h"
#include "Parameters/AllParams.h"
#include "Tools/Profiling.h"
// Constructor
EffectLed::EffectLed(byte index, Parameter* stateTracker, Parameter* colourTracker)
 : Led(index), stateTracker(stateTracker), colourTracker(colourTracker) { PROFILE_FUNCTION(); }

bool EffectLed::flaggedForUpdating() {
  PROFILE_FUNCTION();
  return previousStateIndex != stateTracker->getIndex() || previousColourIndex != colourTracker->getIndex();
}

void EffectLed::updatePreviousTrackers() {
  PROFILE_FUNCTION();
  previousStateIndex = stateTracker->getIndex();
  previousColourIndex = colourTracker->getIndex();
}

void EffectLed::update() {
  PROFILE_FUNCTION();
  if (!flaggedForUpdating()) return;

  setLed();
  updatePreviousTrackers();
}

byte EffectLed::getColour() {
  PROFILE_FUNCTION();
  switch (colourTracker->getIndex()) {
  case 0:
    return 96;  // green
    break;
  case 1:
    return 0;  // red
    break;
  case 2:
    return 64;  // yellow
    break;
  default:
    return 96;
    break;
  }
}
byte EffectLed::getSaturation() {
  PROFILE_FUNCTION();
  return globalSaturation;
}
byte EffectLed::getBrightness() {
  PROFILE_FUNCTION();
  return stateTracker->getIndex() == 0 ? 0 : Led::globalBrightness;
}

void EffectLed::resetTrackers() {
  PROFILE_FUNCTION();
  previousStateIndex = INT16_MAX;
  previousColourIndex = INT16_MAX;
}