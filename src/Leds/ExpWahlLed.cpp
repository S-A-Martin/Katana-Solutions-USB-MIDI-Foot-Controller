#include "ExpWahLed.h"

#include "Tools/Profiling.h"
// Constructor
ExpWahLed::ExpWahLed(byte index, Parameter* stateTracker)
 : Led(index), stateTracker(stateTracker) {
  PROFILE_FUNCTION();
}

void ExpWahLed::update() {
  PROFILE_FUNCTION();
  if (!flaggedForUpdating()) return;

  setLed();
  updatePreviousTrackers();
}

bool ExpWahLed::flaggedForUpdating() {
  PROFILE_FUNCTION();
  return previousStateIndex != stateTracker->getIndex();
}

void ExpWahLed::updatePreviousTrackers() {
  PROFILE_FUNCTION();
  previousStateIndex = stateTracker->getIndex();
}

byte ExpWahLed::getColour() {
  PROFILE_FUNCTION();
  return 96;
}
byte ExpWahLed::getSaturation() {
  PROFILE_FUNCTION();
  return globalSaturation;
}
byte ExpWahLed::getBrightness() {
  PROFILE_FUNCTION();
  return (stateTracker->getIndex() == 1 ? Led::globalBrightness : 0);
}

void ExpWahLed::resetTrackers() {
  PROFILE_FUNCTION();
  previousStateIndex = INT16_MAX;
}