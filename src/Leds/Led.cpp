#include "Led.h"
#include "Tools/Profiling.h"
CRGB Led::leds[NUM_LEDS];
byte Led::globalBrightness = 35;
byte Led::globalSaturation = 255;

void Led::init() {
  PROFILE_FUNCTION();
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);

  for (CRGB& led : leds) {
    led = CHSV(213, Led::globalSaturation, Led::globalBrightness);
    FastLED.show();
    delay(25);
    led = CHSV(213, Led::globalSaturation, 0);
    FastLED.show();
    delay(25);
  }
}

// Constructor
Led::Led(byte index)
 : index(index) { PROFILE_FUNCTION(); }

Led::~Led() { PROFILE_FUNCTION(); }

void Led::update() { PROFILE_FUNCTION(); }

byte Led::getColour() {
  PROFILE_FUNCTION();
  return 96;
}
byte Led::getSaturation() {
  PROFILE_FUNCTION();
  return Led::globalSaturation;
}
byte Led::getBrightness() {
  PROFILE_FUNCTION();
  return Led::globalBrightness;
}

void Led::resetTrackers() {}

void Led::setLed() {
  leds[index] = CHSV(getColour(), getSaturation(), getBrightness());
  FastLED.show();
}

void Led::setLed(int newColour, int newSaturation, int newBrightness) {
  leds[index] = CHSV(newColour, newSaturation, newBrightness);
  FastLED.show();
}