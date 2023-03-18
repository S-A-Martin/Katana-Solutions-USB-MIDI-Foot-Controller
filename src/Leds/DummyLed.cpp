
#include "DummyLed.h"
#include "Tools/Profiling.h"
// Constructor
DummyLed::DummyLed(byte index)
 : Led(index) { PROFILE_FUNCTION(); }

// // Private Functions
void DummyLed::update() {
  PROFILE_FUNCTION();
  if (!updated) {
    setLed();
    updated = true;
  }
}

byte DummyLed::getColour() {
  PROFILE_FUNCTION();
  return 96;
}
byte DummyLed::getSaturation() {
  PROFILE_FUNCTION();
  return Led::globalSaturation;
}

byte DummyLed::getBrightness() {
  PROFILE_FUNCTION();
  return Led::globalBrightness;
}

DummyLed::~DummyLed() { PROFILE_FUNCTION(); }

void DummyLed::resetTrackers() {
  PROFILE_FUNCTION();
  updated = false;
}