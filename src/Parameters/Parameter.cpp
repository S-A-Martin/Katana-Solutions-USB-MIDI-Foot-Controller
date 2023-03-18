

#include "Parameter.h"
#include "Menu/MenuManager.h"
#include "Tools/Profiling.h"
#include <LiquidCrystal_I2C.h>
extern LiquidCrystal_I2C lcd;
#include "MS3/MS3.h"
extern MS3 katana;

Parameter::Parameter(char const* name, uint32_t sysex, uint8_t dataSize,
                     int16_t indexMin, int16_t indexMax, int16_t index) : name(name), sysex(sysex), dataSize(dataSize), indexMin(indexMin), indexMax(indexMax), index(index) { PROFILE_FUNCTION(); }

int16_t Parameter::getIndex() {
  PROFILE_FUNCTION();
  return index;
}

int16_t Parameter::getSize() {
  PROFILE_FUNCTION();
  return dataSize;
}

char const* Parameter::getName() {
  PROFILE_FUNCTION();
  return name;
}

uint32_t Parameter::getSysex() {
  PROFILE_FUNCTION();
  return sysex;
}

void Parameter::setIndex(int16_t newIndex) {
  PROFILE_FUNCTION();
  index = newIndex;
  // Serial.println((String) "Set " + name + " to " + index);
}

void Parameter::adjustIndex(int16_t adjustment) {
  PROFILE_FUNCTION();
  index += adjustment;
  if (index > indexMax)
    index = indexMax;
  if (index < indexMin)
    index = indexMin;
}

void Parameter::read() {
  PROFILE_FUNCTION();
  katana.read(sysex, dataSize);
}
void Parameter::send() {
  PROFILE_FUNCTION();
  katana.write(sysex, index, dataSize);
}

void Parameter::display() {
  PROFILE_FUNCTION();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(name);
  lcd.setCursor(0, 1);
  lcd.print(index);
}

void Parameter::subDisplay() {
  PROFILE_FUNCTION();
  lcd.print(name);
}

void Parameter::up() {
  PROFILE_FUNCTION();
  if (previous)
    menuManagerPtr->setActiveComponent(previous);
}

void Parameter::down() { PROFILE_FUNCTION(); }

void Parameter::left() {
  PROFILE_FUNCTION();
  adjustIndex(-1);
  send();
  read();
}
void Parameter::right() {
  PROFILE_FUNCTION();
  adjustIndex(1);
  send();
  read();
}
//