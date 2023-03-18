#include "ExpVolLed.h"

#include "Tools/Profiling.h"
// Constructor
ExpVolLed::ExpVolLed(byte index, Parameter* stateTracker)
 : Led(index), stateTracker(stateTracker) {
  PROFILE_FUNCTION();
}

void ExpVolLed::update() {
  PROFILE_FUNCTION();
  if (!flaggedForUpdating()) return;

  setLed();
  updatePreviousTrackers();
}

bool ExpVolLed::flaggedForUpdating() {
  PROFILE_FUNCTION();
  return previousStateIndex != stateTracker->getIndex();
}

void ExpVolLed::updatePreviousTrackers() {
  PROFILE_FUNCTION();
  previousStateIndex = stateTracker->getIndex();
}

byte ExpVolLed::getColour() {
  PROFILE_FUNCTION();
  return 96;
}
byte ExpVolLed::getSaturation() {
  PROFILE_FUNCTION();
  return globalSaturation;
}
byte ExpVolLed::getBrightness() {
  PROFILE_FUNCTION();
  // return (stateTracker->getIndex() == 0 ? Led::globalBrightness : 0);
  return Led::globalBrightness;
}

void ExpVolLed::resetTrackers() {
  PROFILE_FUNCTION();
  previousStateIndex = INT16_MAX;
}