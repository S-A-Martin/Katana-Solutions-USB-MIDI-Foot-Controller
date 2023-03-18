#include "Commands.h"
#include "Controller/Controller.h"
#include "MS3/MS3Config.h"
#include "Tools/MacroTools.h"
#include "Tools/Profiling.h"
#include <LiquidCrystal_I2C.h>

extern LiquidCrystal_I2C lcd;
extern MS3 katana;

Controller* ICommand::controller = { nullptr };

void CMD_NoCommand::execute() {}

CMD_AdjustParamIndex::CMD_AdjustParamIndex(Parameter* parameter, int16_t amount)
 : parameter(parameter), amount(amount) {}

void CMD_AdjustParamIndex::execute() {
  PROFILE_FUNCTION();

  parameter->adjustIndex(amount);
  parameter->send();
  parameter->display();
}

// Menu Commands
CMD_MenuDown::CMD_MenuDown() {}
void CMD_MenuDown::execute() {
  PROFILE_FUNCTION();
  S_PRINTLN_F("Menu Down");
  controller->menuManager.down();
}

CMD_MenuUp::CMD_MenuUp() {}
void CMD_MenuUp::execute() {
  PROFILE_FUNCTION();
  S_PRINTLN_F("Menu Up");
  controller->menuManager.up();
}

CMD_MenuLeft::CMD_MenuLeft() {}
void CMD_MenuLeft::execute() {
  PROFILE_FUNCTION();
  S_PRINTLN_F("Menu Left");
  controller->menuManager.left();
}

CMD_MenuRight::CMD_MenuRight() {}
void CMD_MenuRight::execute() {
  PROFILE_FUNCTION();
  S_PRINTLN_F("Menu Right");
  controller->menuManager.right();
}

////

CMD_SetEncoderBank::CMD_SetEncoderBank(EncoderBanks bank) : bank(bank) {}
void CMD_SetEncoderBank::execute() {
  PROFILE_FUNCTION();
  controller->mode = bank;
  lcd.clear();
  switch (bank) {
  case DEFAULT_MODE:
    lcd.print("Default Mode");
    // AllParams::runTimeSync(AllParams::ampLevels, 5);
    break;
  case AMP_SETTINGS:
    lcd.print("Amp/Cab Settings");
    // AllParams::runTimeSync(AllParams::ampCabSettings, 5);
    break;
  case EFFECT_LEVELS:
    lcd.print("Effect Levels");
    // AllParams::runTimeSync(AllParams::effectLevels, 5);
    break;
  case EFFECT_TYPES:
    lcd.print("Effect Types");
    // AllParams::runTimeSync(AllParams::effectTypes, 5);
    break;
  case MENU:
    lcd.print("Menu Mode");
    // AllParams::startUpSync();
    break;
  default:
    break;
  }

  controller->resetTimeout();
}

CMD_SetChannel::CMD_SetChannel(uint8_t channel)
 : channel(channel) {}

void CMD_SetChannel::execute() {
  PROFILE_FUNCTION();
  // Channels are 0-8 but only 1,2,5,6 are settable
  if (AllParams::PRM_SYS_PATCH_SEL.getIndex() != this->channel) {
    AllParams::PRM_SYS_PATCH_SEL.setIndex(this->channel);
    AllParams::PRM_SYS_PATCH_SEL.send();
    // AllParams::runTimeSync();
    AllParams::PRM_SYS_PATCH_SEL.display();
  }
  else {
    AllParams::PRM_PREAMP_A_TYPE.adjustIndex(1);
    AllParams::PRM_PREAMP_A_TYPE.send();
    AllParams::PRM_PREAMP_A_TYPE.display();
  }
}

CMD_Timeout::CMD_Timeout() {}

void CMD_Timeout::execute() {
  PROFILE_FUNCTION();
  if (controller->mode == MENU) {  // Effectively cancel the timeout if we're in the menu
    controller->menuManager.display();
    return;
  }

  lcd.clear();
  lcd.print(AllParams::PRM_SYS_PATCH_SEL.getNameArray()[AllParams::PRM_SYS_PATCH_SEL.getIndex()]);
  lcd.setCursor(0, 1);
  lcd.print(AllParams::PRM_PREAMP_A_TYPE.getNameArray()[AllParams::PRM_PREAMP_A_TYPE.getIndex()]);
}

CMD_WriteToChannel::CMD_WriteToChannel(uint8_t channel)
 : channel(channel) {}

void CMD_WriteToChannel::execute() {
  PROFILE_FUNCTION();
  katana.write(AllParams::PRM_PATCH_WRITE.getSysex(), channel, AllParams::PRM_PATCH_WRITE.getSize());
  S_PRINT_F("Writing To Channel: ");
  S_PRINTLN(channel);
  lcd.clear();
  lcd.print("Saved To: ");
  lcd.print(AllParams::PRM_SYS_PATCH_SEL.getNameArray()[channel]);
}

CMD_ToggleMute::CMD_ToggleMute() {}

void CMD_ToggleMute::execute() {
  PROFILE_FUNCTION();
  lcd.clear();
  if (AllParams::PRM_FOOT_VOLUME_VOL_LEVEL.getIndex() > 0) {
    // mute is currently off so store the last volume and mute it
    previousVolume = AllParams::PRM_FOOT_VOLUME_VOL_LEVEL.getIndex();
    AllParams::PRM_FOOT_VOLUME_VOL_LEVEL.setIndex(0);
    S_PRINT_F("Mute On");

    lcd.print("Mute: On");
  }
  else {
    // mute is currently on so restore the previous volume
    AllParams::PRM_FOOT_VOLUME_VOL_LEVEL.setIndex(previousVolume);
    previousVolume = 0;
    S_PRINT_F("Mute Off");
    lcd.print("Mute: Off");
  }
  S_PRINT_F(" Foot Vol: ");
  S_PRINTLN(AllParams::PRM_FOOT_VOLUME_VOL_LEVEL.getIndex());
  AllParams::PRM_FOOT_VOLUME_VOL_LEVEL.send();
}

// CMD_SoloBoost::CMD_SoloBoost(KTS_Button& button)
//  : button(button) {}

// void CMD_SoloBoost::execute() {
//   // the below is boost (odds) solo
//   AllParams::addressOf("SOLO SW", 0x60000015)->setIndex(1);
//   // orrrrr we use "SOLO SW", 0x6000002b which is pre-amp A solo
//   // Send to Katana

//   while (button.isHeld) {}

//   AllParams::addressOf("SOLO SW", 0x60000015)->setIndex(0);
//   // Send to Katana again
// }

CMD_TapTempo::CMD_TapTempo() {
}

void CMD_TapTempo::execute() {
  PROFILE_FUNCTION();
  uint32_t now = millis();

  tempoMillis = now - tapTimerStart;
  tapTimerStart = now;
  tempo = 60000 / tempoMillis;

  if (tempo < 30) tempo = 30;
  if (tempo > 400) tempo = 400;

  uint8_t data[2];
  data[0] = ((60000 / tempo) / 128);  // most sig bit
  data[1] = (60000 / tempo) - (data[0] * 128);  // least sig bit

  katana.send(AllParams::PRM_DLY_COMMON_DLY_TIME.getSysex(), data, AllParams::PRM_DLY_COMMON_DLY_TIME.getSize(), MS3_WRITE);  // bypassing the MS3 Queue, but only way to send 2 byte data
  AllParams::PRM_DLY_COMMON_DLY_TIME.setIndex(tempoMillis);
  ((TapLed*)controller->boardLeds[TAP_BTN_INDEX])->setTempo(data[1], tempoMillis);

  if ((now - tapTimerStart) > 2000) tapTimerStart = 0;

  S_PRINT_F("Tempo: ");
  S_PRINT(tempo);
  S_PRINT_F(" Tempo Millis: ");
  S_PRINTLN(AllParams::PRM_DLY_COMMON_DLY_TIME.getIndex());
}

CMD_ForceSetControllerLeds::CMD_ForceSetControllerLeds() {}
void CMD_ForceSetControllerLeds::execute() {
  PROFILE_FUNCTION();
  controller->resetAllLedTrackers();
  controller->setAllLeds();
}
CMD_Reset::CMD_Reset() {}
void CMD_Reset::execute() {
  PROFILE_FUNCTION();
  // katana.begin();
}
