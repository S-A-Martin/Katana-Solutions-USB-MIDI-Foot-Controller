
// Take a deep breath before scrolling down.... Ready?

#ifndef MenuManager_h
#define MenuManager_h
#include "Leds/Led.h"
#include "Menu.h"
#include "Parameters/AllParams.h"
class MenuManager {
 public:
  void display();
  void setActiveComponent(IMenuComponent* newComponent);
  void up();
  void down();
  void left();
  void right();
  MenuManager();

  /// Menu Items:

  // N.Supp Settings
  Menu noiseSuppSettings = { "N.Supp Settings", { &AllParams::PRM_NS1_SW, &AllParams::PRM_NS1_THRESHOLD, &AllParams::PRM_NS1_RELEASE } };
  // End N.Supp Settings

  // Amp Settings
  Menu customAmpSettings = { "[X] Custom Amp", {} };
  Menu ampSettings = { "Amp Settings", { &AllParams::PRM_PREAMP_A_TYPE, &AllParams::PRM_PREAMP_A_GAIN, &AllParams::PRM_PREAMP_A_LEVEL, &AllParams::PRM_PREAMP_A_BASS, &AllParams::PRM_PREAMP_A_MIDDLE, &AllParams::PRM_PREAMP_A_TREBLE, &AllParams::PRM_PREAMP_A_PRESENCE, &AllParams::PRM_CABINET_RESONANCE, &AllParams::PRM_PREAMP_A_BRIGHT, &AllParams::PRM_PREAMP_A_SOLO_SW, &AllParams::PRM_PREAMP_A_SOLO_LEVEL } };
  // End Amp Settings

  // Reverb Settings
  Menu reverbPlateParams = { "Plate", { &AllParams::PRM_REVERB_TIME, &AllParams::PRM_REVERB_PREDELAY, &AllParams::PRM_REVERB_LOWCUT, &AllParams::PRM_REVERB_HICUT, &AllParams::PRM_REVERB_DENSITY, &AllParams::PRM_REVERB_EFFECT_LEVEL, &AllParams::PRM_REVERB_DIRECT_LEVEL } };

  Menu reverbRoomParams = { "Room", { &AllParams::PRM_REVERB_TIME, &AllParams::PRM_REVERB_PREDELAY, &AllParams::PRM_REVERB_LOWCUT, &AllParams::PRM_REVERB_HICUT, &AllParams::PRM_REVERB_DENSITY, &AllParams::PRM_REVERB_EFFECT_LEVEL, &AllParams::PRM_REVERB_DIRECT_LEVEL } };

  Menu reverbHall1Params = { "Hall 1", { &AllParams::PRM_REVERB_TIME, &AllParams::PRM_REVERB_PREDELAY, &AllParams::PRM_REVERB_LOWCUT, &AllParams::PRM_REVERB_HICUT, &AllParams::PRM_REVERB_DENSITY, &AllParams::PRM_REVERB_EFFECT_LEVEL, &AllParams::PRM_REVERB_DIRECT_LEVEL } };
  Menu reverbHall2Params = { "Hall 2", { &AllParams::PRM_REVERB_TIME, &AllParams::PRM_REVERB_PREDELAY, &AllParams::PRM_REVERB_LOWCUT, &AllParams::PRM_REVERB_HICUT, &AllParams::PRM_REVERB_DENSITY, &AllParams::PRM_REVERB_EFFECT_LEVEL, &AllParams::PRM_REVERB_DIRECT_LEVEL } };

  Menu reverbSpringParams = { "Spring", { &AllParams::PRM_REVERB_TIME, &AllParams::PRM_REVERB_PREDELAY, &AllParams::PRM_REVERB_LOWCUT, &AllParams::PRM_REVERB_HICUT, &AllParams::PRM_REVERB_DENSITY, &AllParams::PRM_REVERB_SPRING_COLOR, &AllParams::PRM_REVERB_EFFECT_LEVEL, &AllParams::PRM_REVERB_DIRECT_LEVEL } };

  Menu reverbModulationParams = { "Modulate", { &AllParams::PRM_REVERB_TIME, &AllParams::PRM_REVERB_PREDELAY, &AllParams::PRM_REVERB_LOWCUT, &AllParams::PRM_REVERB_HICUT, &AllParams::PRM_REVERB_DENSITY, &AllParams::PRM_REVERB_EFFECT_LEVEL, &AllParams::PRM_REVERB_DIRECT_LEVEL } };

  Menu reverbTypeSettings = { "Type Settings", { &reverbPlateParams, &reverbRoomParams, &reverbHall1Params, &reverbHall2Params, &reverbSpringParams, &reverbModulationParams } };

  Menu reverbSettings = { "Reverb", { &AllParams::PRM_REVERB_SW, &AllParams::PRM_FXBOX_SEL_REVERB, &AllParams::PRM_KNOB_POS_REVERB, &AllParams::PRM_REVERB_TYPE, &reverbTypeSettings } };
  // End Reverb Settings

  // Delay Settings//
  Menu delayDigitalSettings = { "Digital", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delayPanSettings = { "Pan", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_PAN_TAPTIME, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delayStereoSettings = { "Stereo", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delayDualSeriesSettings = { "Dual-S", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delayDualParallelSettings = { "Dual-P", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delayDualLRSettings = { "Dual-LR", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delayReverseSettings = { "Reverse", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delayAnalogSettings = { "Analog", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delayTapeEchoSettings = { "T-Echo", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delayModulateSettings = { "Mod", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_COMMON_HICUT, &AllParams::PRM_DLY_MOD_RATE, &AllParams::PRM_DLY_MOD_DEPTH, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };
  Menu delaySDE3000Settings = { "SDE3000", { &AllParams::PRM_DLY_COMMON_DLY_TIME, &AllParams::PRM_DLY_COMMON_FEEDBACK, &AllParams::PRM_DLY_VINTAGE_LPF, &AllParams::PRM_DLY_VINTAGE_FILTER, &AllParams::PRM_DLY_VINTAGE_MOD_SW, &AllParams::PRM_DLY_VINTAGE_FEEDBACK_PHASE, &AllParams::PRM_DLY_VINTAGE_EFFECT_PHASE, &AllParams::PRM_DLY_MOD_RATE, &AllParams::PRM_DLY_MOD_DEPTH, &AllParams::PRM_DLY_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY_COMMON_DIRECT_LEVEL } };

  Menu delayTypeSettings = { "Type Settings", {
                                                  &delayDigitalSettings,
                                                  &delayPanSettings,
                                                  &delayStereoSettings,
                                                  &delayDualSeriesSettings,
                                                  &delayDualParallelSettings,
                                                  &delayDualLRSettings,
                                                  &delayReverseSettings,
                                                  &delayAnalogSettings,
                                                  &delayTapeEchoSettings,
                                                  &delayModulateSettings,
                                                  &delaySDE3000Settings,
                                              } };

  Menu delaySettings = { "Delay", { &AllParams::PRM_DLY_SW, &AllParams::PRM_FXBOX_SEL_DELAY, &AllParams::PRM_KNOB_POS_DELAY, &AllParams::PRM_DLY_TYPE, &delayTypeSettings } };
  // End Delay Settings

  // Delay 2 Settings
  Menu delay2DigitalSettings = { "Digital", { &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DIRECT_LEVEL } };
  Menu delay2PanSettings = { "Pan", { &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_PAN_TAPTIME, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DIRECT_LEVEL } };
  Menu delay2StereoSettings = { "Stereo", { &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DIRECT_LEVEL } };
  Menu delay2ReverseSettings = { "Reverse", { &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DIRECT_LEVEL } };
  Menu delay2AnalogSettings = { "Analog", { &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DIRECT_LEVEL } };
  Menu delay2TapeEchoSettings = { "T-Echo", { &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DIRECT_LEVEL } };
  Menu delay2ModulateSettings = { "Mod", { &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_COMMON_HICUT, &AllParams::PRM_DLY2_MOD_RATE, &AllParams::PRM_DLY2_MOD_DEPTH, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DIRECT_LEVEL } };
  Menu delay2SDE3000Settings = { "SDE3000", { &AllParams::PRM_DLY2_COMMON_DLY_TIME, &AllParams::PRM_DLY2_COMMON_FEEDBACK, &AllParams::PRM_DLY2_VINTAGE_LPF, &AllParams::PRM_DLY2_VINTAGE_FILTER, &AllParams::PRM_DLY2_VINTAGE_MOD_SW, &AllParams::PRM_DLY2_VINTAGE_FEEDBACK_PHASE, &AllParams::PRM_DLY2_VINTAGE_EFFECT_PHASE, &AllParams::PRM_DLY2_MOD_RATE, &AllParams::PRM_DLY2_MOD_DEPTH, &AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL, &AllParams::PRM_DLY2_COMMON_DIRECT_LEVEL } };

  Menu delay2TypeSettings = { "Type Settings", {
                                                   &delay2DigitalSettings,
                                                   &delay2PanSettings,
                                                   &delay2StereoSettings,
                                                   &delayDualSeriesSettings,
                                                   &delayDualParallelSettings,
                                                   &delayDualLRSettings,
                                                   &delay2ReverseSettings,
                                                   &delay2AnalogSettings,
                                                   &delay2TapeEchoSettings,
                                                   &delay2ModulateSettings,
                                                   &delay2SDE3000Settings,
                                               } };

  Menu delay2Settings = { "Delay 2", { &AllParams::PRM_DLY2_SW, &AllParams::PRM_DLY2_TYPE, &delay2TypeSettings } };
  // End Delay 2 Settings

  // Boost Settings
  Menu boostCleanSettings = { "Clean Boost", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostTrebleSettings = { "Treble Boost", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostMidSettings = { "Mid Boost", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostCrunchODSettings = { "Crunch OD", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostBluesDriveSettings = { "Blues Drive", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostODSettings = { "Overdrive", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostNaturalODSettings = { "Natural OD", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostWarmODSettings = { "Warm OD", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostTubeODSettings = { "Tube OD", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostTubescreamerSettings = { "Tubescreamer", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostDistortionSettings = { "Distortion", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostFatDsSettings = { "Fat DS", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostDSTPlusSettings = { "DST+", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostGuvDSSettings = { "Guv DS", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostRatSettings = { "Rat", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostMetalZoneSettings = { "Metal Zone", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostMetalDSSettings = { "Metal DS", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boost60sFuzzSettings = { "60's Fuzz", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostMuffFuzzSettings = { "Muff Fuzz", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostOctFuzzSettings = { "Oct Fuzz", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL } };
  Menu boostCustomSettings = { "Custom", { &AllParams::PRM_ODDS_DRIVE, &AllParams::PRM_ODDS_BOTTOM, &AllParams::PRM_ODDS_TONE, &AllParams::PRM_ODDS_EFFECT_LEVEL, &AllParams::PRM_ODDS_DIRECT_LEVEL, &AllParams::PRM_ODDS_SOLO_SW, &AllParams::PRM_ODDS_SOLO_LEVEL, &AllParams::PRM_SNEAKY_CUSTOM_TYPE, &AllParams::PRM_SNEAKY_CUSTOM_BOTTOM, &AllParams::PRM_SNEAKY_CUSTOM_TOP, &AllParams::PRM_SNEAKY_CUSTOM_LOW, &AllParams::PRM_SNEAKY_CUSTOM_HIGH, &AllParams::PRM_SNEAKY_CUSTOM_CHARACTER } };

  Menu boostTypeSettings = { "Type Settings", { &boostCleanSettings, &boostTrebleSettings, &boostMidSettings, &boostCrunchODSettings, &boostBluesDriveSettings, &boostODSettings, &boostNaturalODSettings, &boostWarmODSettings, &boostTubeODSettings, &boostTubescreamerSettings, &boostDistortionSettings, &boostFatDsSettings, &boostDSTPlusSettings, &boostGuvDSSettings, &boostRatSettings, &boostMetalZoneSettings, &boostMetalDSSettings, &boost60sFuzzSettings, &boostMuffFuzzSettings, &boostOctFuzzSettings, &boostCustomSettings } };

  Menu boostSettings = { "Boost", { &AllParams::PRM_ODDS_SW, &AllParams::PRM_FXBOX_SEL_BOOST, &AllParams::PRM_KNOB_POS_BOOST, &AllParams::PRM_ODDS_TYPE, &boostTypeSettings } };
  // End Boost Settings

  // Mod Settings

  Menu mod2x2ChorusSettings = { "2x2 Chorus", { &AllParams::PRM_FX1_2x2CHORUS_LOW_PREDELAY, &AllParams::PRM_FX1_2x2CHORUS_LOW_RATE, &AllParams::PRM_FX1_2x2CHORUS_LOW_DEPTH, &AllParams::PRM_FX1_2x2CHORUS_LOW_LEVEL, &AllParams::PRM_FX1_2x2CHORUS_HIGH_PREDELAY, &AllParams::PRM_FX1_2x2CHORUS_HIGH_RATE, &AllParams::PRM_FX1_2x2CHORUS_HIGH_DEPTH, &AllParams::PRM_FX1_2x2CHORUS_HIGH_LEVEL, &AllParams::PRM_FX1_2x2CHORUS_XOVERF, &AllParams::PRM_FX1_2x2CHORUS_DIRECT_LEVEL } };

  Menu modDC30EchoSettings = { "Echo", { &AllParams::PRM_FX1_DC30_ECHO_REPEAT_RATE, &AllParams::PRM_FX1_DC30_ECHO_INTENSITY, &AllParams::PRM_FX1_DC30_ECHO_VOLUME } };
  Menu modDC30ChorusSettings = { "Chorus", { &AllParams::PRM_FX1_DC30_CHORUS_INTENSITY } };
  Menu modDC30TypeSettings = { "Type Settings", { &modDC30ChorusSettings, &modDC30EchoSettings } };
  Menu modDC30Settings = { "DC30", { &AllParams::PRM_FX1_DC30_SELECTOR, &AllParams::PRM_FX1_DC30_INPUT_VOLUME, &AllParams::PRM_FX1_DC30_TONE, &AllParams::PRM_FX1_DC30_OUTPUT, &modDC30TypeSettings } };

  Menu modFlangerSettings = { "Flanger", { &AllParams::PRM_FX1_FLANGER_RATE, &AllParams::PRM_FX1_FLANGER_DEPTH, &AllParams::PRM_FX1_FLANGER_MANUAL, &AllParams::PRM_FX1_FLANGER_RESONANCE, &AllParams::PRM_FX1_FLANGER_LOWCUT, &AllParams::PRM_FX1_FLANGER_E_LEVEL, &AllParams::PRM_FX1_FLANGER_D_LEVEL } };
  Menu modFlanger117ESettings = { "Flanger 117E", { &AllParams::PRM_FX1_EVH_FLANGER_MANUAL, &AllParams::PRM_FX1_EVH_FLANGER_WIDTH, &AllParams::PRM_FX1_EVH_FLANGER_SPEED, &AllParams::PRM_FX1_EVH_FLANGER_SPEED, &AllParams::PRM_FX1_EVH_FLANGER_REGEN } };
  Menu modPhaserSettings = { "Phaser", { &AllParams::PRM_FX1_PHASER_TYPE, &AllParams::PRM_FX1_PHASER_RATE, &AllParams::PRM_FX1_PHASER_DEPTH, &AllParams::PRM_FX1_PHASER_MANUAL, &AllParams::PRM_FX1_PHASER_RESONANCE, &AllParams::PRM_FX1_PHASER_STEPRATE, &AllParams::PRM_FX1_PHASER_E_LEVEL, &AllParams::PRM_FX1_PHASER_D_LEVEL } };
  Menu modPhaser90ESettings = { "Phaser 90E", { &AllParams::PRM_FX1_EVH_PHASER_SCRIPT, &AllParams::PRM_FX1_EVH_PHASER_SPEED } };
  Menu modUniVibeSettings = { "Uni-Vibe", { &AllParams::PRM_FX1_UNI_V_RATE, &AllParams::PRM_FX1_UNI_V_DEPTH, &AllParams::PRM_FX1_UNI_V_LEVEL } };
  Menu modTremoloSettings = { "Tremolo", { &AllParams::PRM_FX1_TREMOLO_WAVESHAPE, &AllParams::PRM_FX1_TREMOLO_RATE, &AllParams::PRM_FX1_TREMOLO_DEPTH, &AllParams::PRM_FX1_TREMOLO_LEVEL } };
  Menu modVibratoSettings = { "Vibrato", { &AllParams::PRM_FX1_VIBRATO_RATE, &AllParams::PRM_FX1_VIBRATO_DEPTH, &AllParams::PRM_FX1_VIBRATO_LEVEL } };
  Menu modRotarySettings = { "Rotary", { &AllParams::PRM_FX1_ROTARY_RATE_FAST, &AllParams::PRM_FX1_ROTARY_DEPTH, &AllParams::PRM_FX1_ROTARY_LEVEL } };  // TODO FXFLOORBOARD HAS MORE EFFECTS HERE
  Menu modRingModeSettings = { "Ring Mod", { &AllParams::PRM_FX1_RINGMOD_MODE, &AllParams::PRM_FX1_RINGMOD_FREQ, &AllParams::PRM_FX1_RINGMOD_E_LEVEL, &AllParams::PRM_FX1_RINGMOD_D_LEVEL } };
  Menu modSlowGearSettings = { "Slow Gear", { &AllParams::PRM_FX1_SLOWGEAR_SENS, &AllParams::PRM_FX1_SLOWGEAR_RISETIME, &AllParams::PRM_FX1_SLOWGEAR_LEVEL } };
  Menu modSlicerSettings = { "Slicer", { &AllParams::PRM_FX1_SLICER_PATTERN, &AllParams::PRM_FX1_SLICER_RATE, &AllParams::PRM_FX1_SLICER_RATE, &AllParams::PRM_FX1_SLICER_TRIGSENS, &AllParams::PRM_FX1_SLICER_EFFECT_LEVEL, &AllParams::PRM_FX1_SLICER_DIRECT_LEVEL } };
  Menu modCompSettings = { "Compressor", { &AllParams::PRM_FX1_ADCOMP_TYPE, &AllParams::PRM_FX1_ADCOMP_SUSTAIN, &AllParams::PRM_FX1_ADCOMP_ATTACK, &AllParams::PRM_FX1_ADCOMP_TONE, &AllParams::PRM_FX1_ADCOMP_LEVEL } };
  Menu modLimiterSettings = { "Limiter", { &AllParams::PRM_FX1_LIMITER_TYPE, &AllParams::PRM_FX1_LIMITER_ATTACK, &AllParams::PRM_FX1_LIMITER_THRESHOLD, &AllParams::PRM_FX1_LIMITER_RATIO, &AllParams::PRM_FX1_LIMITER_RELEASE, &AllParams::PRM_FX1_LIMITER_LEVEL } };
  Menu modTouchWahSettings = { "Touch Wah", { &AllParams::PRM_FX1_TWAH_MODE, &AllParams::PRM_FX1_TWAH_POLARITY, &AllParams::PRM_FX1_TWAH_SENS, &AllParams::PRM_FX1_TWAH_FREQ, &AllParams::PRM_FX1_TWAH_PEAK, &AllParams::PRM_FX1_TWAH_D_LEVEL, &AllParams::PRM_FX1_TWAH_LEVEL } };

  Menu modAutoWahSettings = { "Auto Wah", { &AllParams::PRM_FX1_AWAH_MODE, &AllParams::PRM_FX1_AWAH_PEAK, &AllParams::PRM_FX1_AWAH_RATE, &AllParams::PRM_FX1_AWAH_FREQ, &AllParams::PRM_FX1_AWAH_DEPTH, &AllParams::PRM_FX1_AWAH_D_LEVEL, &AllParams::PRM_FX1_AWAH_LEVEL } };
  Menu modPedalWahSettings = { "Pedal Wah", { &AllParams::PRM_FX1_SUBWAH_TYPE, &AllParams::PRM_FX1_SUBWAH_PDLPOS, &AllParams::PRM_FX1_SUBWAH_MIN, &AllParams::PRM_FX1_SUBWAH_MAX, &AllParams::PRM_FX1_SUBWAH_E_LEVEL, &AllParams::PRM_FX1_SUBWAH_D_LEVEL } };
  Menu modWah95ESettings = { "Wah 95E", { &AllParams::PRM_FX1_EVH_WAH_PEDAL_POS, &AllParams::PRM_FX1_EVH_WAH_PEDAL_MIN, &AllParams::PRM_FX1_EVH_WAH_PEDAL_MAX, &AllParams::PRM_FX1_EVH_WAH_EFFECT_LEVEL, &AllParams::PRM_FX1_EVH_WAH_DIRECT_MIX } };
  Menu modGraphicEQSettings = { "Graphic EQ", { &AllParams::PRM_FX1_GEQ_BAND1, &AllParams::PRM_FX1_GEQ_BAND2, &AllParams::PRM_FX1_GEQ_BAND3, &AllParams::PRM_FX1_GEQ_BAND4, &AllParams::PRM_FX1_GEQ_BAND5, &AllParams::PRM_FX1_GEQ_BAND6, &AllParams::PRM_FX1_GEQ_BAND6, &AllParams::PRM_FX1_GEQ_BAND7, &AllParams::PRM_FX1_GEQ_BAND8, &AllParams::PRM_FX1_GEQ_BAND9, &AllParams::PRM_FX1_GEQ_BAND10, &AllParams::PRM_FX1_GEQ_LEVEL } };
  Menu modParametricEQSettings = { "Parametric EQ", { &AllParams::PRM_FX1_PEQ_LOW_CUT, &AllParams::PRM_FX1_PEQ_LOW_GAIN, &AllParams::PRM_FX1_PEQ_LOWMID_FREQ, &AllParams::PRM_FX1_PEQ_LOWMID_Q, &AllParams::PRM_FX1_PEQ_LOWMID_GAIN, &AllParams::PRM_FX1_PEQ_HIGHMID_FREQ, &AllParams::PRM_FX1_PEQ_HIGHMID_Q, &AllParams::PRM_FX1_PEQ_HIGHMID_GAIN, &AllParams::PRM_FX1_PEQ_HIGH_GAIN, &AllParams::PRM_FX1_PEQ_HIGH_CUT, &AllParams::PRM_FX1_PEQ_LEVEL } };
  Menu modGuitarSimSettings = { "Guitar Sim", { &AllParams::PRM_FX1_GTRSIM_TYPE, &AllParams::PRM_FX1_GTRSIM_LOW, &AllParams::PRM_FX1_GTRSIM_HIGH, &AllParams::PRM_FX1_GTRSIM_BODY, &AllParams::PRM_FX1_GTRSIM_LEVEL } };
  Menu modACGuitarSimSettings = { "Ac. Guitar Sim", { &AllParams::PRM_FX1_ACSIM_TOP, &AllParams::PRM_FX1_ACSIM_BODY, &AllParams::PRM_FX1_ACSIM_LOW, &AllParams::PRM_FX1_ACSIM_HIGH, &AllParams::PRM_FX1_ACSIM_LEVEL } };
  Menu modACProcessorSettings = { "Ac.Processor", { &AllParams::PRM_FX1_ACPROCESS_TYPE, &AllParams::PRM_FX1_ACPROCESS_BASS, &AllParams::PRM_FX1_ACPROCESS_MID, &AllParams::PRM_FX1_ACPROCESS_MID_F, &AllParams::PRM_FX1_ACPROCESS_TREBLE, &AllParams::PRM_FX1_ACPROCESS_PRESENCE, &AllParams::PRM_FX1_ACPROCESS_LEVEL } };
  Menu modWaveSynthSettings = { "Wave Synth", { &AllParams::PRM_FX1_WAVESYN_WAVE, &AllParams::PRM_FX1_WAVESYN_CUTOFF, &AllParams::PRM_FX1_WAVESYN_RESONANCE, &AllParams::PRM_FX1_WAVESYN_FLT_SENS, &AllParams::PRM_FX1_WAVESYN_FLT_DECAY, &AllParams::PRM_FX1_WAVESYN_FLT_DEPTH, &AllParams::PRM_FX1_WAVESYN_SYN_LEVEL, &AllParams::PRM_FX1_WAVESYN_D_LEVEL } };
  Menu modOctaveSettings = { "Octave", { &AllParams::PRM_FX1_OCTAVE_RANGE, &AllParams::PRM_FX1_OCTAVE_LEVEL, &AllParams::PRM_FX1_OCTAVE_D_LEVEL } };
  Menu modHeavyOctaveSettings = { "Heavy Octave", { &AllParams::PRM_FX1_HEAVY_OCTAVE_1OCT_LEVEL, &AllParams::PRM_FX1_HEAVY_OCTAVE_2OCT_LEVEL, &AllParams::PRM_FX1_HEAVY_OCTAVE_DIRECT_LEVEL } };
  Menu modPitchShiftSettings = { "Pitch Shifter", { &AllParams::PRM_FX1_PITCHSHIFT_VOICE, &AllParams::PRM_FX1_PITCHSHIFT_MODE1, &AllParams::PRM_FX1_PITCHSHIFT_PREDELAY1, &AllParams::PRM_FX1_PITCHSHIFT_PITCH1, &AllParams::PRM_FX1_PITCHSHIFT_FINE1, &AllParams::PRM_FX1_PITCHSHIFT_MODE2, &AllParams::PRM_FX1_PITCHSHIFT_PREDELAY2, &AllParams::PRM_FX1_PITCHSHIFT_PITCH2, &AllParams::PRM_FX1_PITCHSHIFT_FINE2, &AllParams::PRM_FX1_PITCHSHIFT_FEEDBACK, &AllParams::PRM_FX1_PITCHSHIFT_LEVEL1, &AllParams::PRM_FX1_PITCHSHIFT_LEVEL2, &AllParams::PRM_FX1_PITCHSHIFT_D_LEVEL } };
  Menu modHarmonistSettings = { "Harmonist", { &AllParams::PRM_FX1_HARMONIST_VOICE, &AllParams::PRM_FX1_HARMONIST_HARMONY1, &AllParams::PRM_FX1_HARMONIST_PREDELAY1, &AllParams::PRM_FX1_HARMONIST_V1_HARM_1, &AllParams::PRM_FX1_HARMONIST_V1_HARM_2, &AllParams::PRM_FX1_HARMONIST_V1_HARM_3, &AllParams::PRM_FX1_HARMONIST_V1_HARM_4, &AllParams::PRM_FX1_HARMONIST_V1_HARM_5, &AllParams::PRM_FX1_HARMONIST_V1_HARM_6, &AllParams::PRM_FX1_HARMONIST_V1_HARM_7, &AllParams::PRM_FX1_HARMONIST_V1_HARM_8, &AllParams::PRM_FX1_HARMONIST_V1_HARM_9, &AllParams::PRM_FX1_HARMONIST_V1_HARM_10, &AllParams::PRM_FX1_HARMONIST_V1_HARM_11, &AllParams::PRM_FX1_HARMONIST_V1_HARM_12, &AllParams::PRM_FX1_HARMONIST_LEVEL1,

                                               &AllParams::PRM_FX1_HARMONIST_HARMONY2, &AllParams::PRM_FX1_HARMONIST_PREDELAY2, &AllParams::PRM_FX1_HARMONIST_V2_HARM_1, &AllParams::PRM_FX1_HARMONIST_V2_HARM_2, &AllParams::PRM_FX1_HARMONIST_V2_HARM_3, &AllParams::PRM_FX1_HARMONIST_V2_HARM_4, &AllParams::PRM_FX1_HARMONIST_V2_HARM_5, &AllParams::PRM_FX1_HARMONIST_V2_HARM_6, &AllParams::PRM_FX1_HARMONIST_V2_HARM_7, &AllParams::PRM_FX1_HARMONIST_V2_HARM_8, &AllParams::PRM_FX1_HARMONIST_V2_HARM_9, &AllParams::PRM_FX1_HARMONIST_V2_HARM_10, &AllParams::PRM_FX1_HARMONIST_V2_HARM_11, &AllParams::PRM_FX1_HARMONIST_V2_HARM_12, &AllParams::PRM_FX1_HARMONIST_LEVEL2,

                                               &AllParams::PRM_FX1_HARMONIST_FEEDBACK, &AllParams::PRM_FX1_HARMONIST_D_LEVEL } };

  Menu modHumanizerSettings = { "Humanizer", { &AllParams::PRM_FX1_HUMANIZER_MODE, &AllParams::PRM_FX1_HUMANIZER_VOWEL1, &AllParams::PRM_FX1_HUMANIZER_VOWEL2, &AllParams::PRM_FX1_HUMANIZER_SENS, &AllParams::PRM_FX1_HUMANIZER_RATE, &AllParams::PRM_FX1_HUMANIZER_DEPTH, &AllParams::PRM_FX1_HUMANIZER_MANUAL, &AllParams::PRM_FX1_HUMANIZER_LEVEL } };

  Menu modTypeSettings = { "Type Settings", {
                                                &mod2x2ChorusSettings,
                                                &modDC30Settings,
                                                &modFlangerSettings,
                                                &modFlanger117ESettings,
                                                &modPhaserSettings,
                                                &modPhaser90ESettings,
                                                &modUniVibeSettings,
                                                &modTremoloSettings,
                                                &modVibratoSettings,
                                                &modRotarySettings,
                                                &modRingModeSettings,
                                                &modSlowGearSettings,
                                                &modSlicerSettings,
                                                &modCompSettings,
                                                &modLimiterSettings,
                                                &modTouchWahSettings,
                                                &modAutoWahSettings,
                                                &modPedalWahSettings,
                                                &modWah95ESettings,
                                                &modGraphicEQSettings,
                                                &modParametricEQSettings,
                                                &modGuitarSimSettings,
                                                &modACGuitarSimSettings,
                                                &modACProcessorSettings,
                                                &modWaveSynthSettings,
                                                &modOctaveSettings,
                                                &modHeavyOctaveSettings,
                                                &modPitchShiftSettings,
                                                &modHarmonistSettings,
                                                &modHumanizerSettings,

                                            } };

  Menu modSettings = { "Mod", { &AllParams::PRM_FX1_SW, &AllParams::PRM_FXBOX_SEL_MOD, &AllParams::PRM_KNOB_POS_MOD, &AllParams::PRM_FX1_FXTYPE, &modTypeSettings } };
  // End Mod Settings

  // Fx Settings //

  Menu fx2x2ChorusSettings = { "2x2 Chorus", { &AllParams::PRM_FX2_2x2CHORUS_LOW_PREDELAY, &AllParams::PRM_FX2_2x2CHORUS_LOW_RATE, &AllParams::PRM_FX2_2x2CHORUS_LOW_DEPTH, &AllParams::PRM_FX2_2x2CHORUS_LOW_LEVEL, &AllParams::PRM_FX2_2x2CHORUS_HIGH_PREDELAY, &AllParams::PRM_FX2_2x2CHORUS_HIGH_RATE, &AllParams::PRM_FX2_2x2CHORUS_HIGH_DEPTH, &AllParams::PRM_FX2_2x2CHORUS_HIGH_LEVEL, &AllParams::PRM_FX2_2x2CHORUS_XOVERF, &AllParams::PRM_FX2_2x2CHORUS_DIRECT_LEVEL } };

  Menu fxDC30EchoSettings = { "Echo", { &AllParams::PRM_FX2_DC30_ECHO_REPEAT_RATE, &AllParams::PRM_FX2_DC30_ECHO_INTENSITY, &AllParams::PRM_FX2_DC30_ECHO_VOLUME } };
  Menu fxDC30ChorusSettings = { "Chorus", { &AllParams::PRM_FX2_DC30_CHORUS_INTENSITY } };
  Menu fxDC30TypeSettings = { "Type Settings", { &fxDC30ChorusSettings, &fxDC30EchoSettings } };
  Menu fxDC30Settings = { "DC30", { &AllParams::PRM_FX2_DC30_SELECTOR, &AllParams::PRM_FX2_DC30_INPUT_VOLUME, &AllParams::PRM_FX2_DC30_TONE, &AllParams::PRM_FX2_DC30_OUTPUT, &fxDC30TypeSettings } };

  Menu fxFlangerSettings = { "Flanger", { &AllParams::PRM_FX2_FLANGER_RATE, &AllParams::PRM_FX2_FLANGER_DEPTH, &AllParams::PRM_FX2_FLANGER_MANUAL, &AllParams::PRM_FX2_FLANGER_RESONANCE, &AllParams::PRM_FX2_FLANGER_LOWCUT, &AllParams::PRM_FX2_FLANGER_E_LEVEL, &AllParams::PRM_FX2_FLANGER_D_LEVEL } };
  Menu fxFlanger117ESettings = { "Flanger 117E", { &AllParams::PRM_FX2_EVH_FLANGER_MANUAL, &AllParams::PRM_FX2_EVH_FLANGER_WIDTH, &AllParams::PRM_FX2_EVH_FLANGER_SPEED, &AllParams::PRM_FX2_EVH_FLANGER_SPEED, &AllParams::PRM_FX2_EVH_FLANGER_REGEN } };
  Menu fxPhaserSettings = { "Phaser", { &AllParams::PRM_FX2_PHASER_TYPE, &AllParams::PRM_FX2_PHASER_RATE, &AllParams::PRM_FX2_PHASER_DEPTH, &AllParams::PRM_FX2_PHASER_MANUAL, &AllParams::PRM_FX2_PHASER_RESONANCE, &AllParams::PRM_FX2_PHASER_STEPRATE, &AllParams::PRM_FX2_PHASER_E_LEVEL, &AllParams::PRM_FX2_PHASER_D_LEVEL } };
  Menu fxPhaser90ESettings = { "Phaser 90E", { &AllParams::PRM_FX2_EVH_PHASER_SCRIPT, &AllParams::PRM_FX2_EVH_PHASER_SPEED } };
  Menu fxUniVibeSettings = { "Uni-Vibe", { &AllParams::PRM_FX2_UNI_V_RATE, &AllParams::PRM_FX2_UNI_V_DEPTH, &AllParams::PRM_FX2_UNI_V_LEVEL } };
  Menu fxTremoloSettings = { "Tremolo", { &AllParams::PRM_FX2_TREMOLO_WAVESHAPE, &AllParams::PRM_FX2_TREMOLO_RATE, &AllParams::PRM_FX2_TREMOLO_DEPTH, &AllParams::PRM_FX2_TREMOLO_LEVEL } };
  Menu fxVibratoSettings = { "Vibrato", { &AllParams::PRM_FX2_VIBRATO_RATE, &AllParams::PRM_FX2_VIBRATO_DEPTH, &AllParams::PRM_FX2_VIBRATO_LEVEL } };
  Menu fxRotarySettings = { "Rotary", { &AllParams::PRM_FX2_ROTARY_RATE_FAST, &AllParams::PRM_FX2_ROTARY_DEPTH, &AllParams::PRM_FX2_ROTARY_LEVEL } };  // TODO FXFLOORBOARD HAS MORE EFFECTS HERE
  Menu fxRingFxeSettings = { "Ring Fx", { &AllParams::PRM_FX2_RINGMOD_MODE, &AllParams::PRM_FX2_RINGMOD_FREQ, &AllParams::PRM_FX2_RINGMOD_E_LEVEL, &AllParams::PRM_FX2_RINGMOD_D_LEVEL } };
  Menu fxSlowGearSettings = { "Slow Gear", { &AllParams::PRM_FX2_SLOWGEAR_SENS, &AllParams::PRM_FX2_SLOWGEAR_RISETIME, &AllParams::PRM_FX2_SLOWGEAR_LEVEL } };
  Menu fxSlicerSettings = { "Slicer", { &AllParams::PRM_FX2_SLICER_PATTERN, &AllParams::PRM_FX2_SLICER_RATE, &AllParams::PRM_FX2_SLICER_RATE, &AllParams::PRM_FX2_SLICER_TRIGSENS, &AllParams::PRM_FX2_SLICER_EFFECT_LEVEL, &AllParams::PRM_FX2_SLICER_DIRECT_LEVEL } };
  Menu fxCompSettings = { "Compressor", { &AllParams::PRM_FX2_ADCOMP_TYPE, &AllParams::PRM_FX2_ADCOMP_SUSTAIN, &AllParams::PRM_FX2_ADCOMP_ATTACK, &AllParams::PRM_FX2_ADCOMP_TONE, &AllParams::PRM_FX2_ADCOMP_LEVEL } };
  Menu fxLimiterSettings = { "Limiter", { &AllParams::PRM_FX2_LIMITER_TYPE, &AllParams::PRM_FX2_LIMITER_ATTACK, &AllParams::PRM_FX2_LIMITER_THRESHOLD, &AllParams::PRM_FX2_LIMITER_RATIO, &AllParams::PRM_FX2_LIMITER_RELEASE, &AllParams::PRM_FX2_LIMITER_LEVEL } };
  Menu fxTouchWahSettings = { "Touch Wah", { &AllParams::PRM_FX2_TWAH_MODE, &AllParams::PRM_FX2_TWAH_POLARITY, &AllParams::PRM_FX2_TWAH_SENS, &AllParams::PRM_FX2_TWAH_FREQ, &AllParams::PRM_FX2_TWAH_PEAK, &AllParams::PRM_FX2_TWAH_D_LEVEL, &AllParams::PRM_FX2_TWAH_LEVEL } };

  Menu fxAutoWahSettings = { "Auto Wah", { &AllParams::PRM_FX2_AWAH_MODE, &AllParams::PRM_FX2_AWAH_PEAK, &AllParams::PRM_FX2_AWAH_RATE, &AllParams::PRM_FX2_AWAH_FREQ, &AllParams::PRM_FX2_AWAH_DEPTH, &AllParams::PRM_FX2_AWAH_D_LEVEL, &AllParams::PRM_FX2_AWAH_LEVEL } };
  Menu fxPedalWahSettings = { "Pedal Wah", { &AllParams::PRM_FX2_SUBWAH_TYPE, &AllParams::PRM_FX2_SUBWAH_PDLPOS, &AllParams::PRM_FX2_SUBWAH_MIN, &AllParams::PRM_FX2_SUBWAH_MAX, &AllParams::PRM_FX2_SUBWAH_E_LEVEL, &AllParams::PRM_FX2_SUBWAH_D_LEVEL } };
  Menu fxWah95ESettings = { "Wah 95E", { &AllParams::PRM_FX2_EVH_WAH_PEDAL_POS, &AllParams::PRM_FX2_EVH_WAH_PEDAL_MIN, &AllParams::PRM_FX2_EVH_WAH_PEDAL_MAX, &AllParams::PRM_FX2_EVH_WAH_EFFECT_LEVEL, &AllParams::PRM_FX2_EVH_WAH_DIRECT_MIX } };
  Menu fxGraphicEQSettings = { "Graphic EQ", { &AllParams::PRM_FX2_GEQ_BAND1, &AllParams::PRM_FX2_GEQ_BAND2, &AllParams::PRM_FX2_GEQ_BAND3, &AllParams::PRM_FX2_GEQ_BAND4, &AllParams::PRM_FX2_GEQ_BAND5, &AllParams::PRM_FX2_GEQ_BAND6, &AllParams::PRM_FX2_GEQ_BAND6, &AllParams::PRM_FX2_GEQ_BAND7, &AllParams::PRM_FX2_GEQ_BAND8, &AllParams::PRM_FX2_GEQ_BAND9, &AllParams::PRM_FX2_GEQ_BAND10, &AllParams::PRM_FX2_GEQ_LEVEL } };
  Menu fxParametricEQSettings = { "Parametric EQ", { &AllParams::PRM_FX2_PEQ_LOW_CUT, &AllParams::PRM_FX2_PEQ_LOW_GAIN, &AllParams::PRM_FX2_PEQ_LOWMID_FREQ, &AllParams::PRM_FX2_PEQ_LOWMID_Q, &AllParams::PRM_FX2_PEQ_LOWMID_GAIN, &AllParams::PRM_FX2_PEQ_HIGHMID_FREQ, &AllParams::PRM_FX2_PEQ_HIGHMID_Q, &AllParams::PRM_FX2_PEQ_HIGHMID_GAIN, &AllParams::PRM_FX2_PEQ_HIGH_GAIN, &AllParams::PRM_FX2_PEQ_HIGH_CUT, &AllParams::PRM_FX2_PEQ_LEVEL } };
  Menu fxGuitarSimSettings = { "Guitar Sim", { &AllParams::PRM_FX2_GTRSIM_TYPE, &AllParams::PRM_FX2_GTRSIM_LOW, &AllParams::PRM_FX2_GTRSIM_HIGH, &AllParams::PRM_FX2_GTRSIM_BODY, &AllParams::PRM_FX2_GTRSIM_LEVEL } };
  Menu fxACGuitarSimSettings = { "Ac. Guitar Sim", { &AllParams::PRM_FX2_ACSIM_TOP, &AllParams::PRM_FX2_ACSIM_BODY, &AllParams::PRM_FX2_ACSIM_LOW, &AllParams::PRM_FX2_ACSIM_HIGH, &AllParams::PRM_FX2_ACSIM_LEVEL } };
  Menu fxACProcessorSettings = { "Ac.Processor", { &AllParams::PRM_FX2_ACPROCESS_TYPE, &AllParams::PRM_FX2_ACPROCESS_BASS, &AllParams::PRM_FX2_ACPROCESS_MID, &AllParams::PRM_FX2_ACPROCESS_MID_F, &AllParams::PRM_FX2_ACPROCESS_TREBLE, &AllParams::PRM_FX2_ACPROCESS_PRESENCE, &AllParams::PRM_FX2_ACPROCESS_LEVEL } };
  Menu fxWaveSynthSettings = { "Wave Synth", { &AllParams::PRM_FX2_WAVESYN_WAVE, &AllParams::PRM_FX2_WAVESYN_CUTOFF, &AllParams::PRM_FX2_WAVESYN_RESONANCE, &AllParams::PRM_FX2_WAVESYN_FLT_SENS, &AllParams::PRM_FX2_WAVESYN_FLT_DECAY, &AllParams::PRM_FX2_WAVESYN_FLT_DEPTH, &AllParams::PRM_FX2_WAVESYN_SYN_LEVEL, &AllParams::PRM_FX2_WAVESYN_D_LEVEL } };
  Menu fxOctaveSettings = { "Octave", { &AllParams::PRM_FX2_OCTAVE_RANGE, &AllParams::PRM_FX2_OCTAVE_LEVEL, &AllParams::PRM_FX2_OCTAVE_D_LEVEL } };
  Menu fxHeavyOctaveSettings = { "Heavy Octave", { &AllParams::PRM_FX2_HEAVY_OCTAVE_1OCT_LEVEL, &AllParams::PRM_FX2_HEAVY_OCTAVE_2OCT_LEVEL, &AllParams::PRM_FX2_HEAVY_OCTAVE_DIRECT_LEVEL } };
  Menu fxPitchShiftSettings = { "Pitch Shifter", { &AllParams::PRM_FX2_PITCHSHIFT_VOICE, &AllParams::PRM_FX2_PITCHSHIFT_MODE1, &AllParams::PRM_FX2_PITCHSHIFT_PREDELAY1, &AllParams::PRM_FX2_PITCHSHIFT_PITCH1, &AllParams::PRM_FX2_PITCHSHIFT_FINE1, &AllParams::PRM_FX2_PITCHSHIFT_MODE2, &AllParams::PRM_FX2_PITCHSHIFT_PREDELAY2, &AllParams::PRM_FX2_PITCHSHIFT_PITCH2, &AllParams::PRM_FX2_PITCHSHIFT_FINE2, &AllParams::PRM_FX2_PITCHSHIFT_FEEDBACK, &AllParams::PRM_FX2_PITCHSHIFT_LEVEL1, &AllParams::PRM_FX2_PITCHSHIFT_LEVEL2, &AllParams::PRM_FX2_PITCHSHIFT_D_LEVEL } };
  Menu fxHarmonistSettings = { "Harmonist", { &AllParams::PRM_FX2_HARMONIST_VOICE, &AllParams::PRM_FX2_HARMONIST_HARMONY1, &AllParams::PRM_FX2_HARMONIST_PREDELAY1, &AllParams::PRM_FX2_HARMONIST_V1_HARM_1, &AllParams::PRM_FX2_HARMONIST_V1_HARM_2, &AllParams::PRM_FX2_HARMONIST_V1_HARM_3, &AllParams::PRM_FX2_HARMONIST_V1_HARM_4, &AllParams::PRM_FX2_HARMONIST_V1_HARM_5, &AllParams::PRM_FX2_HARMONIST_V1_HARM_6, &AllParams::PRM_FX2_HARMONIST_V1_HARM_7, &AllParams::PRM_FX2_HARMONIST_V1_HARM_8, &AllParams::PRM_FX2_HARMONIST_V1_HARM_9, &AllParams::PRM_FX2_HARMONIST_V1_HARM_10, &AllParams::PRM_FX2_HARMONIST_V1_HARM_11, &AllParams::PRM_FX2_HARMONIST_V1_HARM_12, &AllParams::PRM_FX2_HARMONIST_LEVEL1,

                                              &AllParams::PRM_FX2_HARMONIST_HARMONY2, &AllParams::PRM_FX2_HARMONIST_PREDELAY2, &AllParams::PRM_FX2_HARMONIST_V2_HARM_1, &AllParams::PRM_FX2_HARMONIST_V2_HARM_2, &AllParams::PRM_FX2_HARMONIST_V2_HARM_3, &AllParams::PRM_FX2_HARMONIST_V2_HARM_4, &AllParams::PRM_FX2_HARMONIST_V2_HARM_5, &AllParams::PRM_FX2_HARMONIST_V2_HARM_6, &AllParams::PRM_FX2_HARMONIST_V2_HARM_7, &AllParams::PRM_FX2_HARMONIST_V2_HARM_8, &AllParams::PRM_FX2_HARMONIST_V2_HARM_9, &AllParams::PRM_FX2_HARMONIST_V2_HARM_10, &AllParams::PRM_FX2_HARMONIST_V2_HARM_11, &AllParams::PRM_FX2_HARMONIST_V2_HARM_12, &AllParams::PRM_FX2_HARMONIST_LEVEL2,

                                              &AllParams::PRM_FX2_HARMONIST_FEEDBACK, &AllParams::PRM_FX2_HARMONIST_D_LEVEL } };

  Menu fxHumanizerSettings = { "Humanizer", { &AllParams::PRM_FX2_HUMANIZER_MODE, &AllParams::PRM_FX2_HUMANIZER_VOWEL1, &AllParams::PRM_FX2_HUMANIZER_VOWEL2, &AllParams::PRM_FX2_HUMANIZER_SENS, &AllParams::PRM_FX2_HUMANIZER_RATE, &AllParams::PRM_FX2_HUMANIZER_DEPTH, &AllParams::PRM_FX2_HUMANIZER_MANUAL, &AllParams::PRM_FX2_HUMANIZER_LEVEL } };

  Menu fxTypeSettings = { "Type Settings", {
                                               &fx2x2ChorusSettings,
                                               &fxDC30Settings,
                                               &fxFlangerSettings,
                                               &fxFlanger117ESettings,
                                               &fxPhaserSettings,
                                               &fxPhaser90ESettings,
                                               &fxUniVibeSettings,
                                               &fxTremoloSettings,
                                               &fxVibratoSettings,
                                               &fxRotarySettings,
                                               &fxRingFxeSettings,
                                               &fxSlowGearSettings,
                                               &fxSlicerSettings,
                                               &fxCompSettings,
                                               &fxLimiterSettings,
                                               &fxTouchWahSettings,
                                               &fxAutoWahSettings,
                                               &fxPedalWahSettings,
                                               &fxWah95ESettings,
                                               &fxGraphicEQSettings,
                                               &fxParametricEQSettings,
                                               &fxGuitarSimSettings,
                                               &fxACGuitarSimSettings,
                                               &fxACProcessorSettings,
                                               &fxWaveSynthSettings,
                                               &fxOctaveSettings,
                                               &fxHeavyOctaveSettings,
                                               &fxPitchShiftSettings,
                                               &fxHarmonistSettings,
                                               &fxHumanizerSettings,

                                           } };

  Menu fxSettings = { "Fx", { &AllParams::PRM_FX2_SW, &AllParams::PRM_FXBOX_SEL_FX, &AllParams::PRM_KNOB_POS_FX, &AllParams::PRM_FX2_FXTYPE, &fxTypeSettings } };
  // End Fx Settings

  // Pedal FX
  Menu pedalFXWahSettings = { "Wah", { &AllParams::PRM_PEDAL_FX_WAH_TYPE, &AllParams::PRM_PEDAL_FX_WAH_PEDAL_POSITION, &AllParams::PRM_PEDAL_FX_WAH_PEDAL_MIN, &AllParams::PRM_PEDAL_FX_WAH_PEDAL_MAX, &AllParams::PRM_PEDAL_FX_WAH_EFFECT_LEVEL, &AllParams::PRM_PEDAL_FX_WAH_DIRECT_MIX } };
  Menu pedalFXPedalBendSettings = { "Pedal Bend", { &AllParams::PRM_PEDAL_FX_PEDAL_BEND_PEDAL_POS, &AllParams::PRM_PEDAL_FX_PEDAL_BEND_PITCH_MAX, &AllParams::PRM_PEDAL_FX_PEDAL_BEND_EFFECT_LEVEL, &AllParams::PRM_PEDAL_FX_PEDAL_BEND_DIRECT_MIX } };
  Menu pedalFXWah95ESettings = { "Wah 95E", { &AllParams::PRM_PEDAL_FX_EVH95_POS, &AllParams::PRM_PEDAL_FX_EVH95_MIN, &AllParams::PRM_PEDAL_FX_EVH95_MAX, &AllParams::PRM_PEDAL_FX_EVH95_E_LEVEL, &AllParams::PRM_PEDAL_FX_EVH95_D_LEVEL } };
  Menu pedalFXTypeSettings = { "Type Settings", { &pedalFXWahSettings, &pedalFXPedalBendSettings, &pedalFXWah95ESettings } };
  Menu pedalFXSettings = { "Pedal FX", { &AllParams::PRM_PEDAL_FX_SW, &AllParams::PRM_POSITION_PEDAL_FX, &AllParams::PRM_PEDAL_FX_TYPE, &pedalFXTypeSettings } };
  // End Pedal FX

  Menu paraEQSettings = { "Parametric EQ", { &AllParams::PRM_EQ_LOW_CUT, &AllParams::PRM_EQ_LOW_GAIN, &AllParams::PRM_EQ_LOWMID_FREQ, &AllParams::PRM_EQ_LOWMID_Q, &AllParams::PRM_EQ_LOWMID_GAIN, &AllParams::PRM_EQ_HIGHMID_FREQ, &AllParams::PRM_EQ_HIGHMID_Q, &AllParams::PRM_EQ_HIGH_GAIN, &AllParams::PRM_EQ_HIGH_CUT, &AllParams::PRM_EQ_HIGH_GAIN, &AllParams::PRM_EQ_LEVEL } };

  Menu graphicEQSettings = { "Graphic EQ", { &AllParams::PRM_EQ_GEQ_BAND1, &AllParams::PRM_EQ_GEQ_BAND2, &AllParams::PRM_EQ_GEQ_BAND3, &AllParams::PRM_EQ_GEQ_BAND4, &AllParams::PRM_EQ_GEQ_BAND5, &AllParams::PRM_EQ_GEQ_BAND6, &AllParams::PRM_EQ_GEQ_BAND7, &AllParams::PRM_EQ_GEQ_BAND8, &AllParams::PRM_EQ_GEQ_BAND9, &AllParams::PRM_EQ_GEQ_BAND10, &AllParams::PRM_EQ_GEQ_LEVEL } };

  Menu presetEQSettings = { "Type Settings", { &paraEQSettings, &graphicEQSettings } };

  Menu presetEQ = { "Preset EQ", { &AllParams::PRM_EQ_SW, &AllParams::PRM_POSITION_EQ, &AllParams::PRM_EQ_TYPE, &presetEQSettings } };

  //   Menu name = { "NAME", { &} };

  Menu paraSysEQSettings = { "Parametric EQ", { &AllParams::PRM_SYS_EQ_PEQ_LOW_CUT, &AllParams::PRM_SYS_EQ_PEQ_LOW_GAIN, &AllParams::PRM_SYS_EQ_PEQ_LOWMID_FREQ, &AllParams::PRM_SYS_EQ_PEQ_LOWMID_Q, &AllParams::PRM_SYS_EQ_PEQ_LOWMID_GAIN, &AllParams::PRM_SYS_EQ_PEQ_HIGHMID_FREQ, &AllParams::PRM_SYS_EQ_PEQ_HIGHMID_Q, &AllParams::PRM_SYS_EQ_PEQ_HIGH_GAIN, &AllParams::PRM_SYS_EQ_PEQ_HIGH_CUT, &AllParams::PRM_SYS_EQ_PEQ_HIGH_GAIN, &AllParams::PRM_SYS_EQ_PEQ_LEVEL } };

  Menu graphicSysEQSettings = { "Graphic EQ", { &AllParams::PRM_SYS_EQ_GEQ_BAND1, &AllParams::PRM_SYS_EQ_GEQ_BAND2, &AllParams::PRM_SYS_EQ_GEQ_BAND3, &AllParams::PRM_SYS_EQ_GEQ_BAND4, &AllParams::PRM_SYS_EQ_GEQ_BAND5, &AllParams::PRM_SYS_EQ_GEQ_BAND6, &AllParams::PRM_SYS_EQ_GEQ_BAND7, &AllParams::PRM_SYS_EQ_GEQ_BAND8, &AllParams::PRM_SYS_EQ_GEQ_BAND9, &AllParams::PRM_SYS_EQ_GEQ_BAND10, &AllParams::PRM_SYS_EQ_GEQ_LEVEL } };

  Menu presetSysEQSettings = { "Type Settings", { &paraSysEQSettings, &graphicSysEQSettings } };

  Menu presetSysEQ = { "Preset Sys EQ", { &AllParams::PRM_EQ_SW, &AllParams::PRM_POSITION_EQ, &AllParams::PRM_EQ_TYPE, &presetEQSettings } };

  Menu powerAmpSettings = { "Power Amp Sett.", { &AllParams::PRM_SYS_PWR_CAB_EQ_TYPE, &AllParams::PRM_SYS_PWR_CAB_EQ_FREQ, &AllParams::PRM_SYS_PWR_CAB_EQ_LEVEL } };
  Menu globalEQ = { "Global EQ", { &AllParams::PRM_SYS_EQ_SW, &AllParams::PRM_SYS_EQ_POSITION, &AllParams::PRM_SYS_EQ_TYPE, &presetSysEQSettings } };
  Menu USBSettings = { "USB Settings", { &AllParams::PRM_SYS_USB_INPUT_LEVEL, &AllParams::PRM_SYS_USB_OUT_LEV, &AllParams::PRM_SYS_USB_MIX_LEV, &AllParams::PRM_SYS_USB_DIR_MONITOR, &AllParams::PRM_SYS_USB_LOOPBACK, &AllParams::PRM_SYS_USB_2_OUT_LEV } };

  Menu systemSettings = { "System Settings", { &AllParams::PRM_SYS_LINE_OUT_MODE, &powerAmpSettings, &globalEQ, &USBSettings } };

  LEDSettingsItem ledGlobalBrightness = { "Brightness", Led::globalBrightness };
  LEDSettingsItem ledGlobalSaturation = { "Saturation", Led::globalSaturation };

  Menu ledSettings{ "LED Settings", { &ledGlobalBrightness, &ledGlobalSaturation } };

  Menu mainMenu = { "Main Menu", { &ampSettings, &reverbSettings, &modSettings, &fxSettings, &delaySettings, &delay2Settings, &boostSettings, &noiseSuppSettings, &pedalFXSettings, &presetEQ, &AllParams::PRM_FOOT_VOLUME_VOL_LEVEL, &AllParams::PRM_CHAIN_PTN, &systemSettings, &ledSettings } };

  IMenuComponent* activeComponent;

  /// End of Menu Items
};

#endif