/* /Users/stevenmartin/.platformio/packages/tool-teensy/teensy_size

Serach for: TODO



To Do:


-Possibly a bug where foot volume doesn't save between channels ? or resets to 100 when changing channels?


- Create a command executing menu command.
- Do this; https://www.quora.com/Should-I-put-the-includes-in-the-header-or-source-in-C

- I think we need to have a SerialDisplay and an LCD display Visitor with accepts.
- think about all of the global (even in cpp) objects and who owns them
- Check EVERY file for missing reads/writes/sends etc
- CHECK Amp data/name arrays
- check that all subscribes have a matching unsubscribe (usually in destructor)

- PRM_PEDAL_FX_SW should also have a position like in BTS (post-amp etc)
- Search for TODO in Midi.xml to see amp data.

Maybe later
- Add in solo boost?
- Add in custom amp settings (custom type, bottom, edge, pre-low, pre-high, character)?
- Add in Assign collection from BTS
- Add in save and load presets from EEPROM
- Add in save and load LED Brightness/Settings from EEPROM
- Add in  ..



```` Investigate using this: https://github.com/duinoWitchery/hd44780   (has auto line wrapping, maybe for Streaming use!)
Our LCD: https://www.buydisplay.com/3v-5v-black-16x2-character-lcd-module-w-hd44780-controller-arduino

Known Bugs:


*/

#include "Config/Config.h"

#include "Tools/MacroTools.h"

// #include "Tools/WaitForSerial.h"

#include "Tools/Profiling.h"

#include "Controller/Controller.h"

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

Controller KTSol;

void init() {
  Wire1.begin();
  lcd.init();
  lcd.backlight();
}

void setup() {
  PRINTCODEINFO();
  PROFILE_BEGIN();
  init();
  KTSol.init();
}

void loop() {
  KTSol.run();
}
