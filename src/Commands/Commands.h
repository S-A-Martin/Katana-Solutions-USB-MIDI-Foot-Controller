#ifndef Commands_h
#define Commands_h

#include "Parameters/AllParams.h"
#include <Arduino.h>

class Controller;

class ICommand {
 public:
  static Controller* controller;
  virtual void execute() = 0;
};

class CMD_NoCommand : public ICommand {
  void execute() override;
};

class CMD_AdjustParamIndex : public ICommand {
 public:
  Parameter* parameter;
  int16_t amount;
  void execute() override;
  CMD_AdjustParamIndex(Parameter* parameter, int16_t amount);
};

// Menu Commands

class CMD_MenuDown : public ICommand {
 public:
  void execute() override;
  CMD_MenuDown();
};
class CMD_MenuUp : public ICommand {
 public:
  void execute() override;
  CMD_MenuUp();
};
class CMD_MenuLeft : public ICommand {
 public:
  void execute() override;
  CMD_MenuLeft();
};
class CMD_MenuRight : public ICommand {
 public:
  void execute() override;
  CMD_MenuRight();
};

////
#include "Controller/EncoderBanks.h"
class CMD_SetEncoderBank : public ICommand {
 public:
  EncoderBanks bank;
  void execute() override;
  CMD_SetEncoderBank(EncoderBanks bank);
};

class CMD_SetChannel : public ICommand {
 public:
  uint8_t channel;
  void execute() override;
  CMD_SetChannel(uint8_t channel);
};
class CMD_Timeout : public ICommand {
 public:
  void execute() override;
  CMD_Timeout();
};

class CMD_WriteToChannel : public ICommand {
 public:
  uint8_t channel;
  void execute() override;
  CMD_WriteToChannel(uint8_t channel);
};

class CMD_ToggleMute : public ICommand {
 public:
  int16_t previousVolume = 0;
  void execute() override;
  CMD_ToggleMute();
};

// class CMD_SoloBoost : public ICommand {
//  public:
//   KTS_Button& button;
//   void execute() override;
//   CMD_SoloBoost(KTS_Button& button);
// };

class CMD_TapTempo : public ICommand {
 public:
  uint16_t tempoMillis;
  uint16_t tempo;

  uint32_t tapTimerStart;

  void execute() override;
  CMD_TapTempo();
};

class CMD_ForceSetControllerLeds : public ICommand {
 public:
  void execute() override;
  CMD_ForceSetControllerLeds();
};
class CMD_Reset : public ICommand {
 public:
  void execute() override;
  CMD_Reset();
};

#endif