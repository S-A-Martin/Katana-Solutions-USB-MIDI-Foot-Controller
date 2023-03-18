
#ifndef RangeParameter_h
#define RangeParameter_h

#include "Parameter.h"

class RangeParameter : public Parameter {
 public:
  RangeParameter(char const* name, uint32_t sysex, uint8_t dataSize,
                 int16_t rangeMin, int16_t rangeMax, int16_t index);

  void display() override;

 private:
  int16_t rangeMin;
  int16_t rangeMax;
};

#endif