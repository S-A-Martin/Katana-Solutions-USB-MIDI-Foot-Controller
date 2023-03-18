#include "MuteLed.h"

#include "Tools/Profiling.h"
// Constructor
MuteLed::MuteLed(byte index, Parameter* stateTracker)
 : Led(index), stateTracker(stateTracker) {
  PROFILE_FUNCTION();
}

void MuteLed::update() {
  PROFILE_FUNCTION();
  if (!flaggedForUpdating()) return;

  setLed();
  updatePreviousTrackers();
}

bool MuteLed::flaggedForUpdating() {
  PROFILE_FUNCTION();
  return previousStateIndex != stateTracker->getIndex();
}

void MuteLed::updatePreviousTrackers() {
  PROFILE_FUNCTION();
  previousStateIndex = stateTracker->getIndex();
}

byte MuteLed::getColour() {
  PROFILE_FUNCTION();
  return 96;
}

byte MuteLed::getSaturation() {
  PROFILE_FUNCTION();
  return globalSaturation;
}
byte MuteLed::getBrightness() {
  PROFILE_FUNCTION();
  return (stateTracker->getIndex() == 0 ? Led::globalBrightness : 0);
}

void MuteLed::resetTrackers() {
  PROFILE_FUNCTION();
  previousStateIndex = INT16_MAX;
}