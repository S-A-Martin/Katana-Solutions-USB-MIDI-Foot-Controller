#include "RangeParameter.h"
#include "Tools/Profiling.h"
#include <LiquidCrystal_I2C.h>
extern LiquidCrystal_I2C lcd;

RangeParameter::RangeParameter(char const* name, uint32_t sysex, uint8_t dataSize,
                               int16_t rangeMin, int16_t rangeMax, int16_t index)
 : Parameter(name, sysex, dataSize, 0, (-rangeMin + rangeMax), index), rangeMin(rangeMin), rangeMax(rangeMax) {
  PROFILE_FUNCTION();

  if (sysex == 0x60000368) {
    Serial.println((String) + " " + index + " " + indexMin + " " + indexMax + " " + rangeMin + " " + rangeMax);
  }
}

void RangeParameter::display() {
  PROFILE_FUNCTION();
  int16_t mappedIndex = map(index, indexMin, indexMax, rangeMin, rangeMax);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(name);
  lcd.setCursor(0, 1);
  lcd.print(mappedIndex);
}
