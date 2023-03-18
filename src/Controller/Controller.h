#ifndef Controller_h
#define Controller_h

#include "Commands/Commands.h"
#include "Config/Config.h"
#include "EncoderBanks.h"
#include "Inputs/Buttons/Button.h"
#include "Inputs/Buttons/ButtonActions.h"
#include "Inputs/Encoders/Encoder.h"
#include "Inputs/Encoders/EncoderActions.h"
#include "Leds/ChannelLed.h"
#include "Leds/DummyLed.h"
#include "Leds/EffectLed.h"
#include "Leds/ExpVolLed.h"
#include "Leds/ExpWahLed.h"
#include "Leds/MuteLed.h"
#include "Leds/TapLed.h"
#include "MS3/MS3.h"
#include "Menu/MenuManager.h"
#include "Parameters/AllParams.h"

/*
https://wokwi.com/arduino/projects/317958895306801729
*/

class Controller {
 public:
  // Public Static Variables - NONE
  // Public Static Functions - NONE

 public:
  // Public Variables

  // Constructor
  Controller();

  // Public Accessors - NONE
  // Public Modifiers - NONE
  // Public Functions
  void run();
  bool init();

  //  private:
  Button* buttons[NUM_BTNS] = { nullptr };
  Encoder* encoders[NUM_ENCS] = { nullptr };
  Led* boardLeds[NUM_BTNS] = { nullptr };

  ICommand* buttonCommands[ButtonActions::NUM_BTN_ACTIONS][NUM_BTNS];

  ICommand* encoderCommands[EncoderBanks::NUM_MODES][EncoderActions::NUM_ENC_ACTIONS][NUM_ENCS];

  EncoderBanks mode = EncoderBanks::DEFAULT_MODE;

  ICommand* timeoutCommand = new CMD_Timeout();
  uint32_t timeoutLength = CONTROLLER_TIMEOUT_LENGTH;
  bool timeoutExecuted = false;
  uint32_t timeCapture;

  MenuManager menuManager;

  // Private Accessors - NONE
  // Private Modifiers - NONE
  // Private Functions - NONE

  void populateInputs();
  void populateLeds();
  void setButtonCommand(ButtonActions action, uint8_t element, ICommand* newCommand);
  void setEncoderCommand(EncoderBanks mode, EncoderActions action, uint8_t element, ICommand* newCommand);
  void clearButtonCommands();
  void clearEncoderCommands();
  void setAllLeds();
  void setAllLeds(byte colour, byte saturation = Led::globalSaturation, byte brightness = Led::globalBrightness);
  void resetAllLedTrackers();
  void updateLeds();
  void updateKatana();
  void boardError();
  void checkForTimeout();
  void handleButtons();
  void handleEncoders();
  void handleInputs();
  void initButtonCommands();
  void initEncoderCommands();
  void resetTimeout();

};  // End of Controller

#endif