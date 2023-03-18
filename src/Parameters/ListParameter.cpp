#include "ListParameter.h"
#include "Tools/Profiling.h"
#include <LiquidCrystal_I2C.h>
extern LiquidCrystal_I2C lcd;

ListParameter::ListParameter(char const* name, uint32_t sysex, uint8_t dataSize,
                             int16_t indexMin, int16_t indexMax, int16_t index, const char** nameArray, std::vector<byte>&& skipVector)
 : Parameter(name, sysex, dataSize, indexMin, indexMax, index), nameArray(nameArray), skipList(std::move(skipVector)) { PROFILE_FUNCTION(); }

bool ListParameter::isInSkipList() {
  PROFILE_FUNCTION();
  for (const auto& s : skipList)
    if (index == s)
      return true;
  return false;
}

void ListParameter::adjustIndex(int16_t adjustment) {
  PROFILE_FUNCTION();
  do {
    index += adjustment;

    if (index > indexMax)
      index = indexMin;
    else if (index < indexMin)
      index = indexMax;

  } while (isInSkipList());
}

void ListParameter::display() {
  PROFILE_FUNCTION();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(name);
  lcd.setCursor(0, 1);
  lcd.print(nameArray[index]);
}

char const** ListParameter::getNameArray() {
  PROFILE_FUNCTION();
  return nameArray;
}
