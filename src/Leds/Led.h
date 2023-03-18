#ifndef Led_H
#define Led_H

#include <FastLED.h>
#define NUM_LEDS 14
#define DATA_PIN 28

class Led {
 public:
  // Public Static Functions
  static void init();

  // Constructor
  Led(byte index);

  // Destructor
  virtual ~Led();

  static CRGB leds[NUM_LEDS];
  static byte globalBrightness;
  static byte globalSaturation;

  byte index;
  // Private Accessors - NONE
  // Private Modifiers - NONE
  // Private Functions - NONE
  virtual void update();
  virtual byte getColour();
  virtual byte getSaturation();
  virtual byte getBrightness();
  virtual void resetTrackers();
  void setLed();
  void setLed(int newColour, int newSaturation, int newBrightness);
};  // End of Led

#endif