#include "Controller.h"
#include "Tools/Profiling.h"

#include "Config/Config.h"
#include "MS3/MS3Config.h"
#include "Parameters/Parameter.h"
#include "Tools/MacroTools.h"
#include <LiquidCrystal_I2C.h>

extern LiquidCrystal_I2C lcd;

MS3 katana;

Controller::Controller() {}

void Controller::run() {
  PROFILE_FUNCTION();
  handleInputs();
  updateKatana();
  updateLeds();
  checkForTimeout();
}

bool Controller::init() {
  PROFILE_FUNCTION();

  ICommand::controller = this;

  populateInputs();

  Led::init();
  populateLeds();

  clearButtonCommands();
  clearEncoderCommands();

  initButtonCommands();
  initEncoderCommands();

  katana.begin();

  S_PRINTLN_F("Katana Init Complete!");
  return true;
}

// Private Accessors - NONE
// Private Modifiers - NONE
// Private Functions - NONE

void Controller::populateInputs() {
  PROFILE_FUNCTION();
  buttons[MUTE_BTN_INDEX] = new Button(MUTE_PIN, MUTE_BTN_INDEX);
  buttons[MODE_BTN_INDEX] = new Button(MODE_PIN, MODE_BTN_INDEX);
  buttons[VOL_BTN_INDEX] = new Button(VOL_PIN, VOL_BTN_INDEX);
  buttons[WAH_BTN_INDEX] = new Button(WAH_PIN, WAH_BTN_INDEX);
  buttons[RVB_BTN_INDEX] = new Button(RVB_PIN, RVB_BTN_INDEX);
  buttons[MOD_BTN_INDEX] = new Button(MOD_PIN, MOD_BTN_INDEX);
  buttons[FX_BTN_INDEX] = new Button(FX_PIN, FX_BTN_INDEX);
  buttons[DLY_BTN_INDEX] = new Button(DLY_PIN, DLY_BTN_INDEX);
  buttons[TAP_BTN_INDEX] = new Button(TAP_PIN, TAP_BTN_INDEX);
  buttons[CH1A_BTN_INDEX] = new Button(CH1A_PIN, CH1A_BTN_INDEX);
  buttons[CH1B_BTN_INDEX] = new Button(CH1B_PIN, CH1B_BTN_INDEX);
  buttons[CH2A_BTN_INDEX] = new Button(CH2A_PIN, CH2A_BTN_INDEX);
  buttons[CH2B_BTN_INDEX] = new Button(CH2B_PIN, CH2B_BTN_INDEX);
  buttons[BST_BTN_INDEX] = new Button(BST_PIN, BST_BTN_INDEX);

  encoders[ENC1_INDEX] = new Encoder(RE_ONE_CLK, RE_ONE_DT, RE_ONE_SW, ENC1_INDEX);
  encoders[ENC2_INDEX] = new Encoder(RE_TWO_CLK, RE_TWO_DT, RE_TWO_SW, ENC2_INDEX);
  encoders[ENC3_INDEX] = new Encoder(RE_THREE_CLK, RE_THREE_DT, RE_THREE_SW, ENC3_INDEX);
  encoders[ENC4_INDEX] = new Encoder(RE_FOUR_CLK, RE_FOUR_DT, RE_FOUR_SW, ENC4_INDEX);
  encoders[ENC5_INDEX] = new Encoder(RE_FIVE_CLK, RE_FIVE_DT, RE_FIVE_SW, ENC5_INDEX);
}

void Controller::populateLeds() {
  PROFILE_FUNCTION();
  boardLeds[MUTE_BTN_INDEX] = new MuteLed(MUTE_LED_INDEX, &AllParams::PRM_FOOT_VOLUME_VOL_LEVEL);
  boardLeds[MODE_BTN_INDEX] = new DummyLed(MODE_LED_INDEX);
  boardLeds[VOL_BTN_INDEX] = new DummyLed(VOL_LED_INDEX);
  boardLeds[WAH_BTN_INDEX] = new ExpWahLed(WAH_LED_INDEX, &AllParams::PRM_PEDAL_FX_SW);
  boardLeds[RVB_BTN_INDEX] = new EffectLed(RVB_LED_INDEX, &AllParams::PRM_REVERB_SW, &AllParams::PRM_FXBOX_SEL_REVERB);
  boardLeds[MOD_BTN_INDEX] = new EffectLed(MOD_LED_INDEX, &AllParams::PRM_FX1_SW, &AllParams::PRM_FXBOX_SEL_MOD);
  boardLeds[FX_BTN_INDEX] = new EffectLed(FX_LED_INDEX, &AllParams::PRM_FX2_SW, &AllParams::PRM_FXBOX_SEL_FX);
  boardLeds[DLY_BTN_INDEX] = new EffectLed(DLY_LED_INDEX, &AllParams::PRM_DLY_SW, &AllParams::PRM_FXBOX_SEL_DELAY);
  boardLeds[TAP_BTN_INDEX] = new TapLed(TAP_LED_INDEX);
  boardLeds[CH1A_BTN_INDEX] = new ChannelLed(CH1A_LED_INDEX, &AllParams::PRM_SYS_PATCH_SEL, 1);
  boardLeds[CH1B_BTN_INDEX] = new ChannelLed(CH1B_LED_INDEX, &AllParams::PRM_SYS_PATCH_SEL, 5);
  boardLeds[CH2A_BTN_INDEX] = new ChannelLed(CH2A_LED_INDEX, &AllParams::PRM_SYS_PATCH_SEL, 2);
  boardLeds[CH2B_BTN_INDEX] = new ChannelLed(CH2B_LED_INDEX, &AllParams::PRM_SYS_PATCH_SEL, 6);
  boardLeds[BST_BTN_INDEX] = new EffectLed(BST_LED_INDEX, &AllParams::PRM_ODDS_SW, &AllParams::PRM_FXBOX_SEL_BOOST);
}

void Controller::setButtonCommand(ButtonActions action, uint8_t element, ICommand* newCommand) {
  PROFILE_FUNCTION();
  buttonCommands[action][element] = newCommand;
}

void Controller::setEncoderCommand(EncoderBanks mode, EncoderActions action, uint8_t element, ICommand* newCommand) {
  PROFILE_FUNCTION();
  encoderCommands[mode][action][element] = newCommand;
}

void Controller::clearButtonCommands() {
  PROFILE_FUNCTION();
  for (uint8_t action = 0; action < NUM_BTN_ACTIONS; action++)
    for (uint8_t element = 0; element < NUM_BTNS; element++)
      buttonCommands[action][element] = new CMD_NoCommand();
}

void Controller::clearEncoderCommands() {
  PROFILE_FUNCTION();
  for (uint8_t mode = 0; mode < NUM_MODES; mode++)
    for (uint8_t action = 0; action < NUM_ENC_ACTIONS; action++)
      for (uint8_t element = 0; element < NUM_ENCS; element++)
        encoderCommands[mode][action][element] = new CMD_NoCommand();
}

void Controller::setAllLeds() {
  PROFILE_FUNCTION();
  for (auto& led : boardLeds)
    led->setLed();
  FastLED.show();
}

void Controller::setAllLeds(byte colour, byte saturation, byte brightness) {
  PROFILE_FUNCTION();
  for (auto& led : boardLeds)
    led->setLed(colour, saturation, brightness);
  FastLED.show();
}

void Controller::updateLeds() {
  PROFILE_FUNCTION();
  for (auto& led : boardLeds)
    led->update();
}

void Controller::resetAllLedTrackers() {
  for (auto& led : boardLeds)
    led->resetTrackers();
}

void Controller::updateKatana() {
  PROFILE_FUNCTION();
  uint32_t incomingAddress = 0;
  uint8_t incomingData = 0;
  static bool errorComplete = false;

  switch (katana.update(incomingAddress, incomingData)) {
  case MS3_READY:
    katana.setEditorMode();
    AllParams::startUpSync();
    resetAllLedTrackers();
    setAllLeds();
    errorComplete = false;
    break;

  case MS3_NOT_READY:
    if (!errorComplete) {
      boardError();
      errorComplete = true;
    }
    break;

  case MS3_DATA_SENT:
    break;

  case MS3_DATA_RECEIVED: {
    if (incomingAddress == AllParams::PRM_SYS_PATCH_SEL.getSysex())
      AllParams::runTimeSync();

    auto it = AllParams::list.find(incomingAddress);
    if (it != AllParams::list.end())
      it->second->setIndex(incomingData);

    if (incomingAddress == AllParams::PRM_DLY_COMMON_DLY_TIME.getSysex())
      ((TapLed*)boardLeds[TAP_BTN_INDEX])->setTempo(katana.recData2, incomingData);

    resetTimeout();

  } break;

  case MS3_ALMOST_IDLE:
    break;

  case MS3_IDLE:
    break;

  default:
    break;
  }
}

void Controller::boardError() {
  ((TapLed*)boardLeds[TAP_BTN_INDEX])->enabled = false;
  setAllLeds(0);
}

void Controller::checkForTimeout() {
  PROFILE_FUNCTION();
  if (timeoutExecuted == true) return;
  if (millis() - timeCapture < timeoutLength) return;

  timeoutCommand->execute();
  timeoutExecuted = true;
}

void Controller::handleButtons() {
  PROFILE_FUNCTION();
  InputAction buttonAction;
  for (auto& button : buttons) {
    buttonAction = button->read();
    if (buttonAction.ID == 255) continue;
    buttonCommands[buttonAction.action][buttonAction.ID]->execute();
    resetTimeout();
  }
}

void Controller::handleEncoders() {
  PROFILE_FUNCTION();
  InputAction encoderAction;
  for (auto& encoder : encoders) {
    encoderAction = encoder->read();
    if (encoderAction.ID == 255) continue;
    encoderCommands[mode][encoderAction.action][encoderAction.ID]->execute();
    resetTimeout();
  }
}

void Controller::handleInputs() {
  PROFILE_FUNCTION();
  handleButtons();
  handleEncoders();
}

void Controller::initButtonCommands() {
  PROFILE_FUNCTION();
  setButtonCommand(SHORT_PRESS, MUTE_BTN_INDEX, new CMD_ToggleMute());
  setButtonCommand(SHORT_PRESS, WAH_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PEDAL_FX_SW, 1));
  setButtonCommand(SHORT_PRESS, RVB_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_REVERB_SW, 1));
  setButtonCommand(SHORT_PRESS, MOD_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FX1_SW, 1));
  setButtonCommand(SHORT_PRESS, FX_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FX2_SW, 1));
  setButtonCommand(SHORT_PRESS, DLY_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_DLY_SW, 1));
  setButtonCommand(SHORT_PRESS, TAP_BTN_INDEX, new CMD_TapTempo());
  setButtonCommand(SHORT_PRESS, CH1A_BTN_INDEX, new CMD_SetChannel(1));
  setButtonCommand(SHORT_PRESS, CH1B_BTN_INDEX, new CMD_SetChannel(5));
  setButtonCommand(SHORT_PRESS, CH2A_BTN_INDEX, new CMD_SetChannel(2));
  setButtonCommand(SHORT_PRESS, CH2B_BTN_INDEX, new CMD_SetChannel(6));
  setButtonCommand(SHORT_PRESS, BST_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_ODDS_SW, 1));

  setButtonCommand(LONG_PRESS, MUTE_BTN_INDEX, new CMD_SetChannel(0));
  setButtonCommand(LONG_PRESS, MODE_BTN_INDEX, new CMD_Reset());
  setButtonCommand(LONG_PRESS, WAH_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PEDAL_FX_TYPE, 1));
  setButtonCommand(LONG_PRESS, RVB_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FXBOX_SEL_REVERB, 1));
  setButtonCommand(LONG_PRESS, MOD_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FXBOX_SEL_MOD, 1));
  setButtonCommand(LONG_PRESS, FX_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FXBOX_SEL_FX, 1));
  setButtonCommand(LONG_PRESS, DLY_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FXBOX_SEL_DELAY, 1));
  setButtonCommand(LONG_PRESS, BST_BTN_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FXBOX_SEL_BOOST, 1));
  setButtonCommand(LONG_PRESS, CH1A_BTN_INDEX, new CMD_WriteToChannel(1));
  setButtonCommand(LONG_PRESS, CH1B_BTN_INDEX, new CMD_WriteToChannel(5));
  setButtonCommand(LONG_PRESS, CH2A_BTN_INDEX, new CMD_WriteToChannel(2));
  setButtonCommand(LONG_PRESS, CH2B_BTN_INDEX, new CMD_WriteToChannel(6));
}

void Controller::initEncoderCommands() {  // order... Mode then CCW, CW, Short, Long  then with each enc in order
  PROFILE_FUNCTION();
  setEncoderCommand(DEFAULT_MODE, CCW_TURN, ENC1_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_BASS, -1));
  setEncoderCommand(DEFAULT_MODE, CCW_TURN, ENC2_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_GAIN, -1));
  setEncoderCommand(DEFAULT_MODE, CCW_TURN, ENC3_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_MIDDLE, -1));
  setEncoderCommand(DEFAULT_MODE, CCW_TURN, ENC4_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_LEVEL, -1));
  setEncoderCommand(DEFAULT_MODE, CCW_TURN, ENC5_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_TREBLE, -1));
  setEncoderCommand(DEFAULT_MODE, CW_TURN, ENC1_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_BASS, 1));
  setEncoderCommand(DEFAULT_MODE, CW_TURN, ENC2_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_GAIN, 1));
  setEncoderCommand(DEFAULT_MODE, CW_TURN, ENC3_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_MIDDLE, 1));
  setEncoderCommand(DEFAULT_MODE, CW_TURN, ENC4_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_LEVEL, 1));
  setEncoderCommand(DEFAULT_MODE, CW_TURN, ENC5_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_TREBLE, 1));
  setEncoderCommand(DEFAULT_MODE, SW_LONG_PRESS, ENC1_INDEX, new CMD_SetEncoderBank(DEFAULT_MODE));
  setEncoderCommand(DEFAULT_MODE, SW_LONG_PRESS, ENC2_INDEX, new CMD_SetEncoderBank(EFFECT_LEVELS));
  setEncoderCommand(DEFAULT_MODE, SW_LONG_PRESS, ENC3_INDEX, new CMD_SetEncoderBank(AMP_SETTINGS));
  setEncoderCommand(DEFAULT_MODE, SW_LONG_PRESS, ENC4_INDEX, new CMD_SetEncoderBank(EFFECT_TYPES));
  setEncoderCommand(DEFAULT_MODE, SW_LONG_PRESS, ENC5_INDEX, new CMD_SetEncoderBank(MENU));

  setEncoderCommand(EFFECT_LEVELS, CCW_TURN, ENC1_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_REVERB, -1));
  setEncoderCommand(EFFECT_LEVELS, CCW_TURN, ENC2_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_MOD, -1));
  setEncoderCommand(EFFECT_LEVELS, CCW_TURN, ENC3_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_FX, -1));
  setEncoderCommand(EFFECT_LEVELS, CCW_TURN, ENC4_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_DELAY, -1));
  setEncoderCommand(EFFECT_LEVELS, CCW_TURN, ENC5_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_BOOST, -1));
  setEncoderCommand(EFFECT_LEVELS, CW_TURN, ENC1_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_REVERB, 1));
  setEncoderCommand(EFFECT_LEVELS, CW_TURN, ENC2_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_MOD, 1));
  setEncoderCommand(EFFECT_LEVELS, CW_TURN, ENC3_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_FX, 1));
  setEncoderCommand(EFFECT_LEVELS, CW_TURN, ENC4_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_DELAY, 1));
  setEncoderCommand(EFFECT_LEVELS, CW_TURN, ENC5_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_KNOB_POS_BOOST, 1));
  setEncoderCommand(EFFECT_LEVELS, SW_LONG_PRESS, ENC1_INDEX, new CMD_SetEncoderBank(DEFAULT_MODE));
  setEncoderCommand(EFFECT_LEVELS, SW_LONG_PRESS, ENC2_INDEX, new CMD_SetEncoderBank(EFFECT_LEVELS));
  setEncoderCommand(EFFECT_LEVELS, SW_LONG_PRESS, ENC3_INDEX, new CMD_SetEncoderBank(AMP_SETTINGS));
  setEncoderCommand(EFFECT_LEVELS, SW_LONG_PRESS, ENC4_INDEX, new CMD_SetEncoderBank(EFFECT_TYPES));
  setEncoderCommand(EFFECT_LEVELS, SW_LONG_PRESS, ENC5_INDEX, new CMD_SetEncoderBank(MENU));

  setEncoderCommand(AMP_SETTINGS, CCW_TURN, ENC1_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_TYPE, -1));
  setEncoderCommand(AMP_SETTINGS, CCW_TURN, ENC2_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_NS1_THRESHOLD, -1));
  setEncoderCommand(AMP_SETTINGS, CCW_TURN, ENC3_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_CABINET_RESONANCE, -1));
  setEncoderCommand(AMP_SETTINGS, CCW_TURN, ENC4_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_NS1_RELEASE, -1));
  setEncoderCommand(AMP_SETTINGS, CCW_TURN, ENC5_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_PRESENCE, -1));
  setEncoderCommand(AMP_SETTINGS, CW_TURN, ENC1_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_TYPE, 1));
  setEncoderCommand(AMP_SETTINGS, CW_TURN, ENC2_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_NS1_THRESHOLD, 1));
  setEncoderCommand(AMP_SETTINGS, CW_TURN, ENC3_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_CABINET_RESONANCE, 1));
  setEncoderCommand(AMP_SETTINGS, CW_TURN, ENC4_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_NS1_RELEASE, 1));
  setEncoderCommand(AMP_SETTINGS, CW_TURN, ENC5_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_PREAMP_A_PRESENCE, 1));
  setEncoderCommand(AMP_SETTINGS, SW_LONG_PRESS, ENC1_INDEX, new CMD_SetEncoderBank(DEFAULT_MODE));
  setEncoderCommand(AMP_SETTINGS, SW_LONG_PRESS, ENC2_INDEX, new CMD_SetEncoderBank(EFFECT_LEVELS));
  setEncoderCommand(AMP_SETTINGS, SW_LONG_PRESS, ENC3_INDEX, new CMD_SetEncoderBank(AMP_SETTINGS));
  setEncoderCommand(AMP_SETTINGS, SW_LONG_PRESS, ENC4_INDEX, new CMD_SetEncoderBank(EFFECT_TYPES));
  setEncoderCommand(AMP_SETTINGS, SW_LONG_PRESS, ENC5_INDEX, new CMD_SetEncoderBank(MENU));

  setEncoderCommand(EFFECT_TYPES, CCW_TURN, ENC1_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_REVERB_TYPE, -1));
  setEncoderCommand(EFFECT_TYPES, CCW_TURN, ENC2_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FX1_FXTYPE, -1));
  setEncoderCommand(EFFECT_TYPES, CCW_TURN, ENC3_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FX2_FXTYPE, -1));
  setEncoderCommand(EFFECT_TYPES, CCW_TURN, ENC4_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_DLY_TYPE, -1));
  setEncoderCommand(EFFECT_TYPES, CCW_TURN, ENC5_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_ODDS_TYPE, -1));
  setEncoderCommand(EFFECT_TYPES, CW_TURN, ENC1_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_REVERB_TYPE, 1));
  setEncoderCommand(EFFECT_TYPES, CW_TURN, ENC2_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FX1_FXTYPE, 1));
  setEncoderCommand(EFFECT_TYPES, CW_TURN, ENC3_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_FX2_FXTYPE, 1));
  setEncoderCommand(EFFECT_TYPES, CW_TURN, ENC4_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_DLY_TYPE, 1));
  setEncoderCommand(EFFECT_TYPES, CW_TURN, ENC5_INDEX, new CMD_AdjustParamIndex(&AllParams::PRM_ODDS_TYPE, 1));
  setEncoderCommand(EFFECT_TYPES, SW_LONG_PRESS, ENC1_INDEX, new CMD_SetEncoderBank(DEFAULT_MODE));
  setEncoderCommand(EFFECT_TYPES, SW_LONG_PRESS, ENC2_INDEX, new CMD_SetEncoderBank(EFFECT_LEVELS));
  setEncoderCommand(EFFECT_TYPES, SW_LONG_PRESS, ENC3_INDEX, new CMD_SetEncoderBank(AMP_SETTINGS));
  setEncoderCommand(EFFECT_TYPES, SW_LONG_PRESS, ENC4_INDEX, new CMD_SetEncoderBank(EFFECT_TYPES));
  setEncoderCommand(EFFECT_TYPES, SW_LONG_PRESS, ENC5_INDEX, new CMD_SetEncoderBank(MENU));

  setEncoderCommand(MENU, CCW_TURN, ENC4_INDEX, new CMD_MenuLeft());
  setEncoderCommand(MENU, CCW_TURN, ENC5_INDEX, new CMD_MenuLeft());
  setEncoderCommand(MENU, CW_TURN, ENC4_INDEX, new CMD_MenuRight());
  setEncoderCommand(MENU, CW_TURN, ENC5_INDEX, new CMD_MenuRight());
  setEncoderCommand(MENU, SW_SHORT_PRESS, ENC4_INDEX, new CMD_MenuUp());
  setEncoderCommand(MENU, SW_SHORT_PRESS, ENC5_INDEX, new CMD_MenuDown());
  setEncoderCommand(MENU, SW_LONG_PRESS, ENC1_INDEX, new CMD_SetEncoderBank(DEFAULT_MODE));
  setEncoderCommand(MENU, SW_LONG_PRESS, ENC2_INDEX, new CMD_SetEncoderBank(EFFECT_LEVELS));
  setEncoderCommand(MENU, SW_LONG_PRESS, ENC3_INDEX, new CMD_SetEncoderBank(AMP_SETTINGS));
  setEncoderCommand(MENU, SW_LONG_PRESS, ENC4_INDEX, new CMD_SetEncoderBank(EFFECT_TYPES));
  setEncoderCommand(MENU, SW_LONG_PRESS, ENC5_INDEX, new CMD_SetEncoderBank(MENU));
}

void Controller::resetTimeout() {
  PROFILE_FUNCTION();
  timeoutExecuted = false;
  timeCapture = millis();
}