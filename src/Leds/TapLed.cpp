#include "TapLed.h"

#include "Parameters/AllParams.h"
#include "Tools/MacroTools.h"
#include "Tools/Profiling.h"
// Constructor
TapLed::TapLed(byte index)
 : Led(index) {
  PROFILE_FUNCTION();
}

void TapLed::setTempo(int16_t dataOutTwo, int16_t newIndex) {
  PROFILE_FUNCTION();
  tempo = 60000 / ((dataOutTwo * 128) + newIndex);
  tempoMillis = ((dataOutTwo * 128) + newIndex);
}

void TapLed::update() {
  PROFILE_FUNCTION();
  if (!enabled) return;

  uint32_t now = millis();
  if ((now - timeCapture) >= tempoMillis / 2) {
    timeCapture = now;
    ledOn = !ledOn;
    setLed();
  }
}

byte TapLed::getColour() {
  PROFILE_FUNCTION();
  return 96;
}
byte TapLed::getSaturation() {
  PROFILE_FUNCTION();
  return globalSaturation;
}
byte TapLed::getBrightness() {
  PROFILE_FUNCTION();
  if (!AllParams::PRM_DLY_SW.getIndex() || !ledOn) return 0;
  return Led::globalBrightness;
}

TapLed::~TapLed() { PROFILE_FUNCTION(); }

void TapLed::resetTrackers() {
  PROFILE_FUNCTION();
  enabled = true;
}