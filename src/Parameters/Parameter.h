#ifndef Parameter_h
#define Parameter_h
#include "Menu/Menu.h"
#include <Arduino.h>

class Parameter : public IMenuComponent {
 public:
  Parameter(char const* name, uint32_t sysex, uint8_t dataSize,
            int16_t indexMin, int16_t indexMax, int16_t index);

  int16_t getIndex();
  int16_t getSize();
  char const* getName();
  uint32_t getSysex();

  void setIndex(int16_t newIndex);

  virtual void adjustIndex(int16_t adjustment);
  virtual void read();
  virtual void send();
  virtual void display() override;
  virtual void subDisplay() override;

  void up() override;
  void down() override;
  void left() override;
  void right() override;

 protected:
  char const* name;
  uint32_t sysex;
  uint8_t dataSize;
  int16_t indexMin;
  int16_t indexMax;
  int16_t index;
};

#endif