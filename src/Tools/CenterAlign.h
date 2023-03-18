#ifndef CENTER_ALIGN_H
#define CENTER_ALIGN_H

#ifndef LCD_COLS
#define LCD_COLS 16
#endif

size_t getCharLength(const char* cp) {
  return strlen(cp);
}

size_t getCharLength(String &s) {
  return s.length();
}

size_t getCharLength(const __FlashStringHelper *ifsh) {
  return strlen_P(reinterpret_cast<PGM_P>(ifsh));
}

size_t getCharLength(const int& i) {
  char buffer[17];
  return sprintf(buffer, "%d", i);
}

size_t getCharLength(const double& d, uint8_t dec = 2) {
  char buffer[17] = {'\n'};
  return strlen(dtostrf(d, 0, dec, buffer));
}

template<typename T>
size_t centerMinus(T t) {
  return (LCD_COLS / 2) - (getCharLength(t) / 2.f);
}

template<typename T>
size_t centerMinus(T t, uint8_t dec) {
  return (LCD_COLS / 2) - (getCharLength(t, dec) / 2.f);
}

#endif