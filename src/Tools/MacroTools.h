#ifndef MacroTools_h
#define MacroTools_h

#include "Config/Config.h"

#define arrSize(x) sizeof(x) / sizeof(x[0])

#define PRINTCODEINFO()         \
  S_PRINT_F("Running: ");       \
  S_PRINTLN_F(__FILE__);        \
  S_PRINT_F("Last Compiled: "); \
                                \
  S_PRINT_F(__DATE__);          \
  S_PRINT_F(" ");               \
  S_PRINTLN_F(__TIME__);

#define DEBUG(x)                \
  S_PRINT_F("Debug: ");         \
  S_PRINT(#x);                  \
  S_PRINT_F(" = ");             \
  S_PRINT(x);                   \
  S_PRINT_F(" | Line: ");       \
  S_PRINT(__LINE__);            \
  S_PRINT_F(" | ");             \
  S_PRINT(__PRETTY_FUNCTION__); \
  S_PRINT_F(" | ");             \
  S_PRINTLN(__FILE__);

#define TRACE()                 \
  S_PRINT_F("Trace: [Line: ");  \
  S_PRINT(__LINE__);            \
  S_PRINT_F("] | ");            \
  S_PRINT(__PRETTY_FUNCTION__); \
  S_PRINT_F(" | ");             \
  S_PRINTLN(__FILE__);

#ifdef DEBUG_MODE
  #define S_BEGIN(...) Serial.begin(__VA_ARGS__)
  #define S_PRINT(...) Serial.print(__VA_ARGS__)
  #define S_PRINT_F(x) Serial.print(F(x))
  #define S_PRINTLN(...) Serial.println(__VA_ARGS__)
  #define S_PRINTLN_F(x) Serial.println(F(x))
  #define NOT_SERIAL !Serial
#else
  #define S_BEGIN(...)
  #define S_PRINT(...)
  #define S_PRINT_F(x)
  #define S_PRINTLN(...)
  #define S_PRINTLN_F(x)
  #define NOT_SERIAL 0
#endif

#define SINGLETON(X)    \
 public:                \
  static X& get() {     \
    static X singleton; \
    return singleton;   \
  }

#endif