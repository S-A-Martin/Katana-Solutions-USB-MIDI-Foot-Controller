
#ifndef ListParameter_h
#define ListParameter_h

#include "Parameter.h"

class ListParameter : public Parameter {
 public:
  ListParameter(char const* name, uint32_t sysex, uint8_t dataSize,
                int16_t min, int16_t max, int16_t index, const char** nameArray, std::vector<byte>&& skipVector = {});

  bool isInSkipList();

  void adjustIndex(int16_t adjustment) override;

  void display() override;

  char const** getNameArray();

 private:
  char const** nameArray;
  std::vector<byte> skipList;
};

#endif