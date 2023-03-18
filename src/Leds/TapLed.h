#ifndef TapLed_H
#define TapLed_H

#include "Led.h"

class TapLed : public Led {
  // Public Static Variables
 public:
  uint32_t timeCapture;
  uint16_t tempoMillis;
  uint16_t tempo;
  bool ledOn = false;
  bool enabled = false;

 public:
  // Constructor
  TapLed(byte index);
  // Destructor
  ~TapLed();

  // Private Accessors - NONE
  // Private Modifiers - NONE
  // Private Functions - NONE
  void setTempo(int16_t dataOutTwo, int16_t newIndex);
  void update() override;
  byte getColour() override;
  byte getSaturation() override;
  byte getBrightness() override;
  void resetTrackers() override;
};  // End of TapLed

#endif