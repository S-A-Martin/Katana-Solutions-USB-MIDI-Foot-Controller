#ifndef AllParams_h
#define AllParams_h

#include "ListParameter.h"
#include "RangeParameter.h"
#include "Strings.h"
#include <unordered_map>

namespace AllParams {
  extern Parameter PRM_SYS_USB_IN_OUT_MODE;
  extern RangeParameter PRM_SYS_USB_INPUT_LEVEL;
  extern Parameter PRM_SYS_USB_OUT_LEV;
  extern Parameter PRM_SYS_USB_MIX_LEV;
  extern ListParameter PRM_SYS_USB_DIR_MONITOR;
  extern Parameter PRM_SYS_USB_DIR_MONITOR_CMD;
  extern ListParameter PRM_SYS_USB_LOOPBACK;
  extern Parameter PRM_SYS_USB_2_OUT_LEV;
  extern ListParameter PRM_SYS_EQ_SW;
  extern ListParameter PRM_SYS_EQ_TYPE;
  extern ListParameter PRM_SYS_EQ_POSITION;
  extern ListParameter PRM_SYS_EQ_PEQ_LOW_CUT;
  extern RangeParameter PRM_SYS_EQ_PEQ_LOW_GAIN;
  extern ListParameter PRM_SYS_EQ_PEQ_LOWMID_FREQ;
  extern ListParameter PRM_SYS_EQ_PEQ_LOWMID_Q;
  extern RangeParameter PRM_SYS_EQ_PEQ_LOWMID_GAIN;
  extern ListParameter PRM_SYS_EQ_PEQ_HIGHMID_FREQ;
  extern ListParameter PRM_SYS_EQ_PEQ_HIGHMID_Q;
  extern RangeParameter PRM_SYS_EQ_PEQ_HIGHMID_GAIN;
  extern RangeParameter PRM_SYS_EQ_PEQ_HIGH_GAIN;
  extern ListParameter PRM_SYS_EQ_PEQ_HIGH_CUT;
  extern RangeParameter PRM_SYS_EQ_PEQ_LEVEL;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND1;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND2;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND3;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND4;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND5;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND6;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND7;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND8;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND9;
  extern RangeParameter PRM_SYS_EQ_GEQ_BAND10;
  extern RangeParameter PRM_SYS_EQ_GEQ_LEVEL;
  extern ListParameter PRM_SYS_PATCH_SEL;
  extern ListParameter PRM_SYS_LINE_OUT_MODE;
  extern Parameter PRM_SYS_EXPAND_MODE;
  extern ListParameter PRM_SYS_PWR_CAB_EQ_TYPE;
  extern Parameter PRM_SYS_PWR_CAB_EQ_FREQ;
  extern RangeParameter PRM_SYS_PWR_CAB_EQ_LEVEL;
  extern Parameter PRM_SYS_MIDI_RX_CH;
  extern Parameter PRM_SYS_MIDI_CC_BOOST_SW;
  extern Parameter PRM_SYS_MIDI_CC_MOD_SW;
  extern Parameter PRM_SYS_MIDI_CC_FX_SW;
  extern Parameter PRM_SYS_MIDI_CC_DELAY_SW;
  extern Parameter PRM_SYS_MIDI_CC_REVERB_SW;
  extern Parameter PRM_SYS_MIDI_CC_XLP_SW;
  extern Parameter PRM_SYS_MIDI_CC_EXPPEDAL;
  extern Parameter PRM_SYS_MIDI_CC_GAFCEXP1;
  extern Parameter PRM_SYS_MIDI_CC_GAFCEXP2;
  extern Parameter PRM_SYS_MIDI_CC_GAFCFS1;
  extern Parameter PRM_SYS_MIDI_CC_GAFCFS2;
  extern Parameter PRM_SYS_MIDI_PC_PANEL;
  extern Parameter PRM_SYS_MIDI_PC_A1;
  extern Parameter PRM_SYS_MIDI_PC_A2;
  extern Parameter PRM_SYS_MIDI_PC_A3;
  extern Parameter PRM_SYS_MIDI_PC_A4;
  extern Parameter PRM_SYS_MIDI_PC_B1;
  extern Parameter PRM_SYS_MIDI_PC_B2;
  extern Parameter PRM_SYS_MIDI_PC_B3;
  extern Parameter PRM_SYS_MIDI_PC_B4;
  extern ListParameter PRM_ODDS_SW;
  extern ListParameter PRM_ODDS_TYPE;
  extern Parameter PRM_ODDS_DRIVE;
  extern RangeParameter PRM_ODDS_BOTTOM;
  extern RangeParameter PRM_ODDS_TONE;
  extern ListParameter PRM_ODDS_SOLO_SW;
  extern Parameter PRM_ODDS_SOLO_LEVEL;
  extern Parameter PRM_ODDS_EFFECT_LEVEL;
  extern Parameter PRM_ODDS_DIRECT_LEVEL;
  extern ListParameter PRM_SNEAKY_CUSTOM_TYPE;
  extern Parameter PRM_SNEAKY_CUSTOM_BOTTOM;
  extern Parameter PRM_SNEAKY_CUSTOM_TOP;
  extern Parameter PRM_SNEAKY_CUSTOM_LOW;
  extern Parameter PRM_SNEAKY_CUSTOM_HIGH;
  extern Parameter PRM_SNEAKY_CUSTOM_CHARACTER;
  extern ListParameter PRM_PREAMP_A_TYPE;
  extern Parameter PRM_PREAMP_A_GAIN;
  extern Parameter PRM_PREAMP_A_BASS;
  extern Parameter PRM_PREAMP_A_MIDDLE;
  extern Parameter PRM_PREAMP_A_TREBLE;
  extern Parameter PRM_PREAMP_A_PRESENCE;
  extern Parameter PRM_PREAMP_A_LEVEL;
  extern ListParameter PRM_PREAMP_A_BRIGHT;
  extern ListParameter PRM_PREAMP_A_SOLO_SW;
  extern Parameter PRM_PREAMP_A_SOLO_LEVEL;
  extern ListParameter PRM_EQ_SW;
  extern ListParameter PRM_EQ_TYPE;
  extern ListParameter PRM_EQ_LOW_CUT;
  extern RangeParameter PRM_EQ_LOW_GAIN;
  extern ListParameter PRM_EQ_LOWMID_FREQ;
  extern ListParameter PRM_EQ_LOWMID_Q;
  extern RangeParameter PRM_EQ_LOWMID_GAIN;
  extern ListParameter PRM_EQ_HIGHMID_FREQ;
  extern ListParameter PRM_EQ_HIGHMID_Q;
  extern RangeParameter PRM_EQ_HIGHMID_GAIN;
  extern RangeParameter PRM_EQ_HIGH_GAIN;
  extern ListParameter PRM_EQ_HIGH_CUT;
  extern RangeParameter PRM_EQ_LEVEL;
  extern RangeParameter PRM_EQ_GEQ_BAND1;
  extern RangeParameter PRM_EQ_GEQ_BAND2;
  extern RangeParameter PRM_EQ_GEQ_BAND3;
  extern RangeParameter PRM_EQ_GEQ_BAND4;
  extern RangeParameter PRM_EQ_GEQ_BAND5;
  extern RangeParameter PRM_EQ_GEQ_BAND6;
  extern RangeParameter PRM_EQ_GEQ_BAND7;
  extern RangeParameter PRM_EQ_GEQ_BAND8;
  extern RangeParameter PRM_EQ_GEQ_BAND9;
  extern RangeParameter PRM_EQ_GEQ_BAND10;
  extern RangeParameter PRM_EQ_GEQ_LEVEL;
  extern ListParameter PRM_FX1_SW;
  extern ListParameter PRM_FX1_FXTYPE;
  extern ListParameter PRM_FX1_TWAH_MODE;
  extern ListParameter PRM_FX1_TWAH_POLARITY;
  extern Parameter PRM_FX1_TWAH_SENS;
  extern Parameter PRM_FX1_TWAH_FREQ;
  extern Parameter PRM_FX1_TWAH_PEAK;
  extern Parameter PRM_FX1_TWAH_D_LEVEL;
  extern Parameter PRM_FX1_TWAH_LEVEL;
  extern ListParameter PRM_FX1_AWAH_MODE;
  extern Parameter PRM_FX1_AWAH_FREQ;
  extern Parameter PRM_FX1_AWAH_PEAK;
  extern Parameter PRM_FX1_AWAH_RATE;
  extern Parameter PRM_FX1_AWAH_DEPTH;
  extern Parameter PRM_FX1_AWAH_D_LEVEL;
  extern Parameter PRM_FX1_AWAH_LEVEL;
  extern ListParameter PRM_FX1_SUBWAH_TYPE;
  extern Parameter PRM_FX1_SUBWAH_PDLPOS;
  extern Parameter PRM_FX1_SUBWAH_MIN;
  extern Parameter PRM_FX1_SUBWAH_MAX;
  extern Parameter PRM_FX1_SUBWAH_E_LEVEL;
  extern Parameter PRM_FX1_SUBWAH_D_LEVEL;
  extern ListParameter PRM_FX1_ADCOMP_TYPE;
  extern Parameter PRM_FX1_ADCOMP_SUSTAIN;
  extern Parameter PRM_FX1_ADCOMP_ATTACK;
  extern RangeParameter PRM_FX1_ADCOMP_TONE;
  extern Parameter PRM_FX1_ADCOMP_LEVEL;
  extern ListParameter PRM_FX1_LIMITER_TYPE;
  extern Parameter PRM_FX1_LIMITER_ATTACK;
  extern Parameter PRM_FX1_LIMITER_THRESHOLD;
  extern ListParameter PRM_FX1_LIMITER_RATIO;
  extern Parameter PRM_FX1_LIMITER_RELEASE;
  extern Parameter PRM_FX1_LIMITER_LEVEL;
  extern RangeParameter PRM_FX1_GEQ_BAND1;
  extern RangeParameter PRM_FX1_GEQ_BAND2;
  extern RangeParameter PRM_FX1_GEQ_BAND3;
  extern RangeParameter PRM_FX1_GEQ_BAND4;
  extern RangeParameter PRM_FX1_GEQ_BAND5;
  extern RangeParameter PRM_FX1_GEQ_BAND6;
  extern RangeParameter PRM_FX1_GEQ_BAND7;
  extern RangeParameter PRM_FX1_GEQ_BAND8;
  extern RangeParameter PRM_FX1_GEQ_BAND9;
  extern RangeParameter PRM_FX1_GEQ_BAND10;
  extern RangeParameter PRM_FX1_GEQ_LEVEL;
  extern ListParameter PRM_FX1_PEQ_LOW_CUT;
  extern RangeParameter PRM_FX1_PEQ_LOW_GAIN;
  extern ListParameter PRM_FX1_PEQ_LOWMID_FREQ;
  extern ListParameter PRM_FX1_PEQ_LOWMID_Q;
  extern RangeParameter PRM_FX1_PEQ_LOWMID_GAIN;
  extern ListParameter PRM_FX1_PEQ_HIGHMID_FREQ;
  extern ListParameter PRM_FX1_PEQ_HIGHMID_Q;
  extern RangeParameter PRM_FX1_PEQ_HIGHMID_GAIN;
  extern RangeParameter PRM_FX1_PEQ_HIGH_GAIN;
  extern ListParameter PRM_FX1_PEQ_HIGH_CUT;
  extern RangeParameter PRM_FX1_PEQ_LEVEL;
  extern ListParameter PRM_FX1_GTRSIM_TYPE;
  extern RangeParameter PRM_FX1_GTRSIM_LOW;
  extern RangeParameter PRM_FX1_GTRSIM_HIGH;
  extern Parameter PRM_FX1_GTRSIM_LEVEL;
  extern Parameter PRM_FX1_GTRSIM_BODY;
  extern Parameter PRM_FX1_SLOWGEAR_SENS;
  extern Parameter PRM_FX1_SLOWGEAR_RISETIME;
  extern Parameter PRM_FX1_SLOWGEAR_LEVEL;
  extern ListParameter PRM_FX1_WAVESYN_WAVE;
  extern Parameter PRM_FX1_WAVESYN_CUTOFF;
  extern Parameter PRM_FX1_WAVESYN_RESONANCE;
  extern Parameter PRM_FX1_WAVESYN_FLT_SENS;
  extern Parameter PRM_FX1_WAVESYN_FLT_DECAY;
  extern Parameter PRM_FX1_WAVESYN_FLT_DEPTH;
  extern Parameter PRM_FX1_WAVESYN_SYN_LEVEL;
  extern Parameter PRM_FX1_WAVESYN_D_LEVEL;
  extern Parameter PRM_FX1_OCTAVE_RANGE;
  extern Parameter PRM_FX1_OCTAVE_LEVEL;
  extern Parameter PRM_FX1_OCTAVE_D_LEVEL;
  extern ListParameter PRM_FX1_PITCHSHIFT_VOICE;
  extern ListParameter PRM_FX1_PITCHSHIFT_MODE1;
  extern RangeParameter PRM_FX1_PITCHSHIFT_PITCH1;
  extern RangeParameter PRM_FX1_PITCHSHIFT_FINE1;
  extern Parameter PRM_FX1_PITCHSHIFT_PREDELAY1;
  extern Parameter PRM_FX1_PITCHSHIFT_LEVEL1;
  extern ListParameter PRM_FX1_PITCHSHIFT_MODE2;
  extern RangeParameter PRM_FX1_PITCHSHIFT_PITCH2;
  extern RangeParameter PRM_FX1_PITCHSHIFT_FINE2;
  extern Parameter PRM_FX1_PITCHSHIFT_PREDELAY2;
  extern Parameter PRM_FX1_PITCHSHIFT_LEVEL2;
  extern Parameter PRM_FX1_PITCHSHIFT_FEEDBACK;
  extern Parameter PRM_FX1_PITCHSHIFT_D_LEVEL;
  extern ListParameter PRM_FX1_HARMONIST_VOICE;
  extern ListParameter PRM_FX1_HARMONIST_HARMONY1;
  extern Parameter PRM_FX1_HARMONIST_PREDELAY1;
  extern Parameter PRM_FX1_HARMONIST_LEVEL1;
  extern ListParameter PRM_FX1_HARMONIST_HARMONY2;
  extern Parameter PRM_FX1_HARMONIST_PREDELAY2;
  extern Parameter PRM_FX1_HARMONIST_LEVEL2;
  extern Parameter PRM_FX1_HARMONIST_FEEDBACK;
  extern Parameter PRM_FX1_HARMONIST_D_LEVEL;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_1;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_2;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_3;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_4;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_5;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_6;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_7;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_8;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_9;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_10;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_11;
  extern RangeParameter PRM_FX1_HARMONIST_V1_HARM_12;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_1;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_2;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_3;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_4;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_5;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_6;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_7;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_8;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_9;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_10;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_11;
  extern RangeParameter PRM_FX1_HARMONIST_V2_HARM_12;
  extern ListParameter PRM_FX1_ACPROCESS_TYPE;
  extern RangeParameter PRM_FX1_ACPROCESS_BASS;
  extern RangeParameter PRM_FX1_ACPROCESS_MID;
  extern ListParameter PRM_FX1_ACPROCESS_MID_F;
  extern RangeParameter PRM_FX1_ACPROCESS_TREBLE;
  extern RangeParameter PRM_FX1_ACPROCESS_PRESENCE;
  extern Parameter PRM_FX1_ACPROCESS_LEVEL;
  extern ListParameter PRM_FX1_PHASER_TYPE;
  extern Parameter PRM_FX1_PHASER_RATE;
  extern Parameter PRM_FX1_PHASER_DEPTH;
  extern Parameter PRM_FX1_PHASER_MANUAL;
  extern Parameter PRM_FX1_PHASER_RESONANCE;
  extern Parameter PRM_FX1_PHASER_STEPRATE;
  extern Parameter PRM_FX1_PHASER_E_LEVEL;
  extern Parameter PRM_FX1_PHASER_D_LEVEL;
  extern Parameter PRM_FX1_FLANGER_RATE;
  extern Parameter PRM_FX1_FLANGER_DEPTH;
  extern Parameter PRM_FX1_FLANGER_MANUAL;
  extern Parameter PRM_FX1_FLANGER_RESONANCE;
  extern ListParameter PRM_FX1_FLANGER_LOWCUT;
  extern Parameter PRM_FX1_FLANGER_E_LEVEL;
  extern Parameter PRM_FX1_FLANGER_D_LEVEL;
  extern Parameter PRM_FX1_TREMOLO_WAVESHAPE;
  extern Parameter PRM_FX1_TREMOLO_RATE;
  extern Parameter PRM_FX1_TREMOLO_DEPTH;
  extern Parameter PRM_FX1_TREMOLO_LEVEL;
  extern Parameter PRM_FX1_ROTARY_RATE_FAST;
  extern Parameter PRM_FX1_ROTARY_DEPTH;
  extern Parameter PRM_FX1_ROTARY_LEVEL;
  extern Parameter PRM_FX1_UNI_V_RATE;
  extern Parameter PRM_FX1_UNI_V_DEPTH;
  extern Parameter PRM_FX1_UNI_V_LEVEL;
  extern Parameter PRM_FX1_SLICER_PATTERN;
  extern Parameter PRM_FX1_SLICER_RATE;
  extern Parameter PRM_FX1_SLICER_TRIGSENS;
  extern Parameter PRM_FX1_SLICER_EFFECT_LEVEL;
  extern Parameter PRM_FX1_SLICER_DIRECT_LEVEL;
  extern Parameter PRM_FX1_VIBRATO_RATE;
  extern Parameter PRM_FX1_VIBRATO_DEPTH;
  extern Parameter PRM_FX1_VIBRATO_LEVEL;
  extern ListParameter PRM_FX1_RINGMOD_MODE;
  extern Parameter PRM_FX1_RINGMOD_FREQ;
  extern Parameter PRM_FX1_RINGMOD_E_LEVEL;
  extern Parameter PRM_FX1_RINGMOD_D_LEVEL;
  extern ListParameter PRM_FX1_HUMANIZER_MODE;
  extern ListParameter PRM_FX1_HUMANIZER_VOWEL1;
  extern ListParameter PRM_FX1_HUMANIZER_VOWEL2;
  extern Parameter PRM_FX1_HUMANIZER_SENS;
  extern Parameter PRM_FX1_HUMANIZER_RATE;
  extern Parameter PRM_FX1_HUMANIZER_DEPTH;
  extern Parameter PRM_FX1_HUMANIZER_MANUAL;
  extern Parameter PRM_FX1_HUMANIZER_LEVEL;
  extern ListParameter PRM_FX1_2x2CHORUS_XOVERF;
  extern Parameter PRM_FX1_2x2CHORUS_LOW_RATE;
  extern Parameter PRM_FX1_2x2CHORUS_LOW_DEPTH;
  extern Parameter PRM_FX1_2x2CHORUS_LOW_PREDELAY;
  extern Parameter PRM_FX1_2x2CHORUS_LOW_LEVEL;
  extern Parameter PRM_FX1_2x2CHORUS_HIGH_RATE;
  extern Parameter PRM_FX1_2x2CHORUS_HIGH_DEPTH;
  extern Parameter PRM_FX1_2x2CHORUS_HIGH_PREDELAY;
  extern Parameter PRM_FX1_2x2CHORUS_HIGH_LEVEL;
  extern Parameter PRM_FX1_2x2CHORUS_DIRECT_LEVEL;
  extern RangeParameter PRM_FX1_ACSIM_TOP;
  extern Parameter PRM_FX1_ACSIM_BODY;
  extern RangeParameter PRM_FX1_ACSIM_LOW;
  extern RangeParameter PRM_FX1_ACSIM_HIGH;
  extern Parameter PRM_FX1_ACSIM_LEVEL;
  extern ListParameter PRM_FX1_EVH_PHASER_SCRIPT;
  extern Parameter PRM_FX1_EVH_PHASER_SPEED;
  extern Parameter PRM_FX1_EVH_FLANGER_MANUAL;
  extern Parameter PRM_FX1_EVH_FLANGER_WIDTH;
  extern Parameter PRM_FX1_EVH_FLANGER_SPEED;
  extern Parameter PRM_FX1_EVH_FLANGER_REGEN;
  extern Parameter PRM_FX1_EVH_WAH_PEDAL_POS;
  extern Parameter PRM_FX1_EVH_WAH_PEDAL_MIN;
  extern Parameter PRM_FX1_EVH_WAH_PEDAL_MAX;
  extern Parameter PRM_FX1_EVH_WAH_EFFECT_LEVEL;
  extern Parameter PRM_FX1_EVH_WAH_DIRECT_MIX;
  extern ListParameter PRM_FX1_DC30_SELECTOR;
  extern Parameter PRM_FX1_DC30_INPUT_VOLUME;
  extern Parameter PRM_FX1_DC30_CHORUS_INTENSITY;
  extern Parameter PRM_FX1_DC30_ECHO_REPEAT_RATE;
  extern Parameter PRM_FX1_DC30_ECHO_INTENSITY;
  extern Parameter PRM_FX1_DC30_ECHO_VOLUME;
  extern Parameter PRM_FX1_DC30_TONE;
  extern ListParameter PRM_FX1_DC30_OUTPUT;
  extern Parameter PRM_FX1_HEAVY_OCTAVE_1OCT_LEVEL;
  extern Parameter PRM_FX1_HEAVY_OCTAVE_2OCT_LEVEL;
  extern Parameter PRM_FX1_HEAVY_OCTAVE_DIRECT_LEVEL;
  extern ListParameter PRM_FX2_SW;
  extern ListParameter PRM_FX2_FXTYPE;
  extern ListParameter PRM_FX2_TWAH_MODE;
  extern ListParameter PRM_FX2_TWAH_POLARITY;
  extern Parameter PRM_FX2_TWAH_SENS;
  extern Parameter PRM_FX2_TWAH_FREQ;
  extern Parameter PRM_FX2_TWAH_PEAK;
  extern Parameter PRM_FX2_TWAH_D_LEVEL;
  extern Parameter PRM_FX2_TWAH_LEVEL;
  extern ListParameter PRM_FX2_AWAH_MODE;
  extern Parameter PRM_FX2_AWAH_FREQ;
  extern Parameter PRM_FX2_AWAH_PEAK;
  extern Parameter PRM_FX2_AWAH_RATE;
  extern Parameter PRM_FX2_AWAH_DEPTH;
  extern Parameter PRM_FX2_AWAH_D_LEVEL;
  extern Parameter PRM_FX2_AWAH_LEVEL;
  extern ListParameter PRM_FX2_SUBWAH_TYPE;
  extern Parameter PRM_FX2_SUBWAH_PDLPOS;
  extern Parameter PRM_FX2_SUBWAH_MIN;
  extern Parameter PRM_FX2_SUBWAH_MAX;
  extern Parameter PRM_FX2_SUBWAH_E_LEVEL;
  extern Parameter PRM_FX2_SUBWAH_D_LEVEL;
  extern ListParameter PRM_FX2_ADCOMP_TYPE;
  extern Parameter PRM_FX2_ADCOMP_SUSTAIN;
  extern Parameter PRM_FX2_ADCOMP_ATTACK;
  extern RangeParameter PRM_FX2_ADCOMP_TONE;
  extern Parameter PRM_FX2_ADCOMP_LEVEL;
  extern ListParameter PRM_FX2_LIMITER_TYPE;
  extern Parameter PRM_FX2_LIMITER_ATTACK;
  extern Parameter PRM_FX2_LIMITER_THRESHOLD;
  extern ListParameter PRM_FX2_LIMITER_RATIO;
  extern Parameter PRM_FX2_LIMITER_RELEASE;
  extern Parameter PRM_FX2_LIMITER_LEVEL;
  extern RangeParameter PRM_FX2_GEQ_BAND1;
  extern RangeParameter PRM_FX2_GEQ_BAND2;
  extern RangeParameter PRM_FX2_GEQ_BAND3;
  extern RangeParameter PRM_FX2_GEQ_BAND4;
  extern RangeParameter PRM_FX2_GEQ_BAND5;
  extern RangeParameter PRM_FX2_GEQ_BAND6;
  extern RangeParameter PRM_FX2_GEQ_BAND7;
  extern RangeParameter PRM_FX2_GEQ_BAND8;
  extern RangeParameter PRM_FX2_GEQ_BAND9;
  extern RangeParameter PRM_FX2_GEQ_BAND10;
  extern RangeParameter PRM_FX2_GEQ_LEVEL;
  extern ListParameter PRM_FX2_PEQ_LOW_CUT;
  extern RangeParameter PRM_FX2_PEQ_LOW_GAIN;
  extern ListParameter PRM_FX2_PEQ_LOWMID_FREQ;
  extern ListParameter PRM_FX2_PEQ_LOWMID_Q;
  extern RangeParameter PRM_FX2_PEQ_LOWMID_GAIN;
  extern ListParameter PRM_FX2_PEQ_HIGHMID_FREQ;
  extern ListParameter PRM_FX2_PEQ_HIGHMID_Q;
  extern RangeParameter PRM_FX2_PEQ_HIGHMID_GAIN;
  extern RangeParameter PRM_FX2_PEQ_HIGH_GAIN;
  extern ListParameter PRM_FX2_PEQ_HIGH_CUT;
  extern RangeParameter PRM_FX2_PEQ_LEVEL;
  extern ListParameter PRM_FX2_GTRSIM_TYPE;
  extern RangeParameter PRM_FX2_GTRSIM_LOW;
  extern RangeParameter PRM_FX2_GTRSIM_HIGH;
  extern Parameter PRM_FX2_GTRSIM_LEVEL;
  extern Parameter PRM_FX2_GTRSIM_BODY;
  extern Parameter PRM_FX2_SLOWGEAR_SENS;
  extern Parameter PRM_FX2_SLOWGEAR_RISETIME;
  extern Parameter PRM_FX2_SLOWGEAR_LEVEL;
  extern ListParameter PRM_FX2_WAVESYN_WAVE;
  extern Parameter PRM_FX2_WAVESYN_CUTOFF;
  extern Parameter PRM_FX2_WAVESYN_RESONANCE;
  extern Parameter PRM_FX2_WAVESYN_FLT_SENS;
  extern Parameter PRM_FX2_WAVESYN_FLT_DECAY;
  extern Parameter PRM_FX2_WAVESYN_FLT_DEPTH;
  extern Parameter PRM_FX2_WAVESYN_SYN_LEVEL;
  extern Parameter PRM_FX2_WAVESYN_D_LEVEL;
  extern Parameter PRM_FX2_OCTAVE_RANGE;
  extern Parameter PRM_FX2_OCTAVE_LEVEL;
  extern Parameter PRM_FX2_OCTAVE_D_LEVEL;
  extern ListParameter PRM_FX2_PITCHSHIFT_VOICE;
  extern ListParameter PRM_FX2_PITCHSHIFT_MODE1;
  extern RangeParameter PRM_FX2_PITCHSHIFT_PITCH1;
  extern RangeParameter PRM_FX2_PITCHSHIFT_FINE1;
  extern Parameter PRM_FX2_PITCHSHIFT_PREDELAY1;
  extern Parameter PRM_FX2_PITCHSHIFT_LEVEL1;
  extern ListParameter PRM_FX2_PITCHSHIFT_MODE2;
  extern RangeParameter PRM_FX2_PITCHSHIFT_PITCH2;
  extern RangeParameter PRM_FX2_PITCHSHIFT_FINE2;
  extern Parameter PRM_FX2_PITCHSHIFT_PREDELAY2;
  extern Parameter PRM_FX2_PITCHSHIFT_LEVEL2;
  extern Parameter PRM_FX2_PITCHSHIFT_FEEDBACK;
  extern Parameter PRM_FX2_PITCHSHIFT_D_LEVEL;
  extern ListParameter PRM_FX2_HARMONIST_VOICE;
  extern ListParameter PRM_FX2_HARMONIST_HARMONY1;
  extern Parameter PRM_FX2_HARMONIST_PREDELAY1;
  extern Parameter PRM_FX2_HARMONIST_LEVEL1;
  extern ListParameter PRM_FX2_HARMONIST_HARMONY2;
  extern Parameter PRM_FX2_HARMONIST_PREDELAY2;
  extern Parameter PRM_FX2_HARMONIST_LEVEL2;
  extern Parameter PRM_FX2_HARMONIST_FEEDBACK;
  extern Parameter PRM_FX2_HARMONIST_D_LEVEL;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_1;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_2;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_3;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_4;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_5;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_6;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_7;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_8;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_9;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_10;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_11;
  extern RangeParameter PRM_FX2_HARMONIST_V1_HARM_12;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_1;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_2;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_3;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_4;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_5;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_6;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_7;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_8;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_9;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_10;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_11;
  extern RangeParameter PRM_FX2_HARMONIST_V2_HARM_12;
  extern ListParameter PRM_FX2_ACPROCESS_TYPE;
  extern RangeParameter PRM_FX2_ACPROCESS_BASS;
  extern RangeParameter PRM_FX2_ACPROCESS_MID;
  extern ListParameter PRM_FX2_ACPROCESS_MID_F;
  extern RangeParameter PRM_FX2_ACPROCESS_TREBLE;
  extern RangeParameter PRM_FX2_ACPROCESS_PRESENCE;
  extern Parameter PRM_FX2_ACPROCESS_LEVEL;
  extern ListParameter PRM_FX2_PHASER_TYPE;
  extern Parameter PRM_FX2_PHASER_RATE;
  extern Parameter PRM_FX2_PHASER_DEPTH;
  extern Parameter PRM_FX2_PHASER_MANUAL;
  extern Parameter PRM_FX2_PHASER_RESONANCE;
  extern Parameter PRM_FX2_PHASER_STEPRATE;
  extern Parameter PRM_FX2_PHASER_E_LEVEL;
  extern Parameter PRM_FX2_PHASER_D_LEVEL;
  extern Parameter PRM_FX2_FLANGER_RATE;
  extern Parameter PRM_FX2_FLANGER_DEPTH;
  extern Parameter PRM_FX2_FLANGER_MANUAL;
  extern Parameter PRM_FX2_FLANGER_RESONANCE;
  extern ListParameter PRM_FX2_FLANGER_LOWCUT;
  extern Parameter PRM_FX2_FLANGER_E_LEVEL;
  extern Parameter PRM_FX2_FLANGER_D_LEVEL;
  extern Parameter PRM_FX2_TREMOLO_WAVESHAPE;
  extern Parameter PRM_FX2_TREMOLO_RATE;
  extern Parameter PRM_FX2_TREMOLO_DEPTH;
  extern Parameter PRM_FX2_TREMOLO_LEVEL;
  extern Parameter PRM_FX2_ROTARY_RATE_FAST;
  extern Parameter PRM_FX2_ROTARY_DEPTH;
  extern Parameter PRM_FX2_ROTARY_LEVEL;
  extern Parameter PRM_FX2_UNI_V_RATE;
  extern Parameter PRM_FX2_UNI_V_DEPTH;
  extern Parameter PRM_FX2_UNI_V_LEVEL;
  extern Parameter PRM_FX2_SLICER_PATTERN;
  extern Parameter PRM_FX2_SLICER_RATE;
  extern Parameter PRM_FX2_SLICER_TRIGSENS;
  extern Parameter PRM_FX2_SLICER_EFFECT_LEVEL;
  extern Parameter PRM_FX2_SLICER_DIRECT_LEVEL;
  extern Parameter PRM_FX2_VIBRATO_RATE;
  extern Parameter PRM_FX2_VIBRATO_DEPTH;
  extern Parameter PRM_FX2_VIBRATO_LEVEL;
  extern ListParameter PRM_FX2_RINGMOD_MODE;
  extern Parameter PRM_FX2_RINGMOD_FREQ;
  extern Parameter PRM_FX2_RINGMOD_E_LEVEL;
  extern Parameter PRM_FX2_RINGMOD_D_LEVEL;
  extern ListParameter PRM_FX2_HUMANIZER_MODE;
  extern ListParameter PRM_FX2_HUMANIZER_VOWEL1;
  extern ListParameter PRM_FX2_HUMANIZER_VOWEL2;
  extern Parameter PRM_FX2_HUMANIZER_SENS;
  extern Parameter PRM_FX2_HUMANIZER_RATE;
  extern Parameter PRM_FX2_HUMANIZER_DEPTH;
  extern Parameter PRM_FX2_HUMANIZER_MANUAL;
  extern Parameter PRM_FX2_HUMANIZER_LEVEL;
  extern ListParameter PRM_FX2_2x2CHORUS_XOVERF;
  extern Parameter PRM_FX2_2x2CHORUS_LOW_RATE;
  extern Parameter PRM_FX2_2x2CHORUS_LOW_DEPTH;
  extern Parameter PRM_FX2_2x2CHORUS_LOW_PREDELAY;
  extern Parameter PRM_FX2_2x2CHORUS_LOW_LEVEL;
  extern Parameter PRM_FX2_2x2CHORUS_HIGH_RATE;
  extern Parameter PRM_FX2_2x2CHORUS_HIGH_DEPTH;
  extern Parameter PRM_FX2_2x2CHORUS_HIGH_PREDELAY;
  extern Parameter PRM_FX2_2x2CHORUS_HIGH_LEVEL;
  extern Parameter PRM_FX2_2x2CHORUS_DIRECT_LEVEL;
  extern RangeParameter PRM_FX2_ACSIM_TOP;
  extern Parameter PRM_FX2_ACSIM_BODY;
  extern RangeParameter PRM_FX2_ACSIM_LOW;
  extern RangeParameter PRM_FX2_ACSIM_HIGH;
  extern Parameter PRM_FX2_ACSIM_LEVEL;
  extern ListParameter PRM_FX2_EVH_PHASER_SCRIPT;
  extern Parameter PRM_FX2_EVH_PHASER_SPEED;
  extern Parameter PRM_FX2_EVH_FLANGER_MANUAL;
  extern Parameter PRM_FX2_EVH_FLANGER_WIDTH;
  extern Parameter PRM_FX2_EVH_FLANGER_SPEED;
  extern Parameter PRM_FX2_EVH_FLANGER_REGEN;
  extern Parameter PRM_FX2_EVH_WAH_PEDAL_POS;
  extern Parameter PRM_FX2_EVH_WAH_PEDAL_MIN;
  extern Parameter PRM_FX2_EVH_WAH_PEDAL_MAX;
  extern Parameter PRM_FX2_EVH_WAH_EFFECT_LEVEL;
  extern Parameter PRM_FX2_EVH_WAH_DIRECT_MIX;
  extern ListParameter PRM_FX2_DC30_SELECTOR;
  extern Parameter PRM_FX2_DC30_INPUT_VOLUME;
  extern Parameter PRM_FX2_DC30_CHORUS_INTENSITY;
  extern Parameter PRM_FX2_DC30_ECHO_REPEAT_RATE;
  extern Parameter PRM_FX2_DC30_ECHO_INTENSITY;
  extern Parameter PRM_FX2_DC30_ECHO_VOLUME;
  extern Parameter PRM_FX2_DC30_TONE;
  extern ListParameter PRM_FX2_DC30_OUTPUT;
  extern Parameter PRM_FX2_HEAVY_OCTAVE_1OCT_LEVEL;
  extern Parameter PRM_FX2_HEAVY_OCTAVE_2OCT_LEVEL;
  extern Parameter PRM_FX2_HEAVY_OCTAVE_DIRECT_LEVEL;
  extern ListParameter PRM_DLY_SW;
  extern ListParameter PRM_DLY_TYPE;
  extern Parameter PRM_DLY_COMMON_DLY_TIME;
  extern Parameter PRM_DLY_COMMON_FEEDBACK;
  extern ListParameter PRM_DLY_COMMON_HICUT;
  extern Parameter PRM_DLY_COMMON_EFFECT_LEVEL;
  extern Parameter PRM_DLY_COMMON_DIRECT_LEVEL;
  extern Parameter PRM_DLY_PAN_TAPTIME;
  extern Parameter PRM_DLY_MOD_RATE;
  extern Parameter PRM_DLY_MOD_DEPTH;
  extern Parameter PRM_DLY_VINTAGE_LPF;
  extern Parameter PRM_DLY_VINTAGE_FILTER;
  extern ListParameter PRM_DLY_VINTAGE_FEEDBACK_PHASE;
  extern ListParameter PRM_DLY_VINTAGE_EFFECT_PHASE;
  extern ListParameter PRM_DLY_VINTAGE_MOD_SW;
  extern ListParameter PRM_DLY2_SW;
  extern ListParameter PRM_DLY2_TYPE;
  extern Parameter PRM_DLY2_COMMON_DLY_TIME;
  extern Parameter PRM_DLY2_COMMON_FEEDBACK;
  extern ListParameter PRM_DLY2_COMMON_HICUT;
  extern Parameter PRM_DLY2_COMMON_EFFECT_LEVEL;
  extern Parameter PRM_DLY2_COMMON_DIRECT_LEVEL;
  extern Parameter PRM_DLY2_PAN_TAPTIME;
  extern Parameter PRM_DLY2_MOD_RATE;
  extern Parameter PRM_DLY2_MOD_DEPTH;
  extern ListParameter PRM_DLY2_VINTAGE_LPF;
  extern Parameter PRM_DLY2_VINTAGE_FILTER;
  extern ListParameter PRM_DLY2_VINTAGE_FEEDBACK_PHASE;
  extern ListParameter PRM_DLY2_VINTAGE_EFFECT_PHASE;
  extern ListParameter PRM_DLY2_VINTAGE_MOD_SW;
  extern ListParameter PRM_REVERB_SW;
  extern ListParameter PRM_REVERB_TYPE;
  extern Parameter PRM_REVERB_TIME;
  extern Parameter PRM_REVERB_PREDELAY;
  extern ListParameter PRM_REVERB_LOWCUT;
  extern ListParameter PRM_REVERB_HICUT;
  extern Parameter PRM_REVERB_DENSITY;
  extern Parameter PRM_REVERB_EFFECT_LEVEL;
  extern Parameter PRM_REVERB_DIRECT_LEVEL;
  extern Parameter PRM_REVERB_SPRING_COLOR;
  extern ListParameter PRM_PEDAL_FX_SW;
  extern ListParameter PRM_PEDAL_FX_TYPE;
  extern ListParameter PRM_PEDAL_FX_WAH_TYPE;
  extern Parameter PRM_PEDAL_FX_WAH_PEDAL_POSITION;
  extern Parameter PRM_PEDAL_FX_WAH_PEDAL_MIN;
  extern Parameter PRM_PEDAL_FX_WAH_PEDAL_MAX;
  extern Parameter PRM_PEDAL_FX_WAH_EFFECT_LEVEL;
  extern Parameter PRM_PEDAL_FX_WAH_DIRECT_MIX;
  extern RangeParameter PRM_PEDAL_FX_PEDAL_BEND_PITCH_MAX;
  extern Parameter PRM_PEDAL_FX_PEDAL_BEND_PEDAL_POS;
  extern Parameter PRM_PEDAL_FX_PEDAL_BEND_EFFECT_LEVEL;
  extern Parameter PRM_PEDAL_FX_PEDAL_BEND_DIRECT_MIX;
  extern Parameter PRM_PEDAL_FX_EVH95_POS;
  extern Parameter PRM_PEDAL_FX_EVH95_MIN;
  extern Parameter PRM_PEDAL_FX_EVH95_MAX;
  extern Parameter PRM_PEDAL_FX_EVH95_E_LEVEL;
  extern Parameter PRM_PEDAL_FX_EVH95_D_LEVEL;
  extern Parameter PRM_FOOT_VOLUME_VOL_LEVEL;
  extern ListParameter PRM_SEND_RETURN_SW;
  extern ListParameter PRM_SEND_RETURN_MODE;
  extern Parameter PRM_SEND_RETURN_SEND_LEVEL;
  extern Parameter PRM_SEND_RETURN_RETURN_LEVEL;
  extern ListParameter PRM_NS1_SW;
  extern Parameter PRM_NS1_THRESHOLD;
  extern Parameter PRM_NS1_RELEASE;
  extern ListParameter PRM_MASTER_KEY;
  extern ListParameter PRM_CHAIN_PTN;
  extern ListParameter PRM_POSITION_SEND_RETURN;
  extern ListParameter PRM_POSITION_EQ;
  extern ListParameter PRM_POSITION_PEDAL_FX;
  extern Parameter PRM_FXBOX_ASGN_BOOSTER_G;
  extern Parameter PRM_FXBOX_ASGN_BOOSTER_R;
  extern Parameter PRM_FXBOX_ASGN_BOOSTER_Y;
  extern Parameter PRM_FXBOX_ASGN_MOD_G;
  extern Parameter PRM_FXBOX_ASGN_MOD_R;
  extern Parameter PRM_FXBOX_ASGN_MOD_Y;
  extern Parameter PRM_FXBOX_ASGN_FX_G;
  extern Parameter PRM_FXBOX_ASGN_FX_R;
  extern Parameter PRM_FXBOX_ASGN_FX_Y;
  extern Parameter PRM_FXBOX_ASGN_DELAY_G;
  extern Parameter PRM_FXBOX_ASGN_DELAY_R;
  extern Parameter PRM_FXBOX_ASGN_DELAY_Y;
  extern Parameter PRM_FXBOX_ASGN_REVERB_G;
  extern Parameter PRM_FXBOX_ASGN_REVERB_R;
  extern Parameter PRM_FXBOX_ASGN_REVERB_Y;
  extern Parameter PRM_FXBOX_ASGN_DELAY2_G;
  extern Parameter PRM_FXBOX_ASGN_DELAY2_R;
  extern Parameter PRM_FXBOX_ASGN_DELAY2_Y;
  extern Parameter PRM_FXBOX_DLYREV_LAYER_G;
  extern Parameter PRM_FXBOX_DLYREV_LAYER_R;
  extern Parameter PRM_FXBOX_DLYREV_LAYER_Y;
  extern ListParameter PRM_FXBOX_SEL_BOOST;
  extern ListParameter PRM_FXBOX_SEL_MOD;
  extern ListParameter PRM_FXBOX_SEL_FX;
  extern ListParameter PRM_FXBOX_SEL_DELAY;
  extern ListParameter PRM_FXBOX_SEL_REVERB;
  extern Parameter PRM_PEDAL_FUNCTION_EXP_PEDAL;
  extern Parameter PRM_PEDAL_FUNCTION_GAFC_EXP1;
  extern Parameter PRM_PEDAL_FUNCTION_GAFC_EXP2;
  extern Parameter PRM_FS_FUNCTION_GAFC_FS1;
  extern Parameter PRM_FS_FUNCTION_GAFC_FS2;
  extern ListParameter PRM_CABINET_RESONANCE;
  extern ListParameter PRM_KNOB_POS_TYPE;
  extern Parameter PRM_KNOB_POS_GAIN;
  extern Parameter PRM_KNOB_POS_VOLUME;
  extern Parameter PRM_KNOB_POS_BASS;
  extern Parameter PRM_KNOB_POS_MIDDLE;
  extern Parameter PRM_KNOB_POS_TREBLE;
  extern Parameter PRM_KNOB_POS_PRESENCE;
  extern Parameter PRM_KNOB_POS_BOOST;
  extern Parameter PRM_KNOB_POS_MOD;
  extern Parameter PRM_KNOB_POS_FX;
  extern Parameter PRM_KNOB_POS_DELAY;
  extern Parameter PRM_KNOB_POS_REVERB;
  extern ListParameter PRM_LED_STATE_VARI;
  extern Parameter PRM_LED_STATE_BOOST;
  extern Parameter PRM_LED_STATE_MOD;
  extern Parameter PRM_LED_STATE_FX;
  extern Parameter PRM_LED_STATE_DELAY;
  extern Parameter PRM_LED_STATE_REVERB;
  extern Parameter PRM_KNOB_ASSIGN_BOOSTER;
  extern Parameter PRM_KNOB_ASSIGN_DELAY;
  extern Parameter PRM_KNOB_ASSIGN_REVERB;
  extern Parameter PRM_KNOB_ASSIGN_CHORUS;
  extern Parameter PRM_KNOB_ASSIGN_FLANGER;
  extern Parameter PRM_KNOB_ASSIGN_PHASER;
  extern Parameter PRM_KNOB_ASSIGN_UNI_V;
  extern Parameter PRM_KNOB_ASSIGN_TREMOLO;
  extern Parameter PRM_KNOB_ASSIGN_VIBRATO;
  extern Parameter PRM_KNOB_ASSIGN_ROTARY;
  extern Parameter PRM_KNOB_ASSIGN_RING_MOD;
  extern Parameter PRM_KNOB_ASSIGN_SLOW_GEAR;
  extern Parameter PRM_KNOB_ASSIGN_SLICER;
  extern Parameter PRM_KNOB_ASSIGN_COMP;
  extern Parameter PRM_KNOB_ASSIGN_LIMITER;
  extern Parameter PRM_KNOB_ASSIGN_T_WAH;
  extern Parameter PRM_KNOB_ASSIGN_AUTO_WAH;
  extern Parameter PRM_KNOB_ASSIGN_PEDAL_WAH;
  extern Parameter PRM_KNOB_ASSIGN_GEQ;
  extern Parameter PRM_KNOB_ASSIGN_PEQ;
  extern Parameter PRM_KNOB_ASSIGN_GUITAR_SIM;
  extern Parameter PRM_KNOB_ASSIGN_AC_GUITAR_SIM;
  extern Parameter PRM_KNOB_ASSIGN_AC_PROCESSOR;
  extern Parameter PRM_KNOB_ASSIGN_WAVE_SYNTH;
  extern Parameter PRM_KNOB_ASSIGN_OCTAVE;
  extern Parameter PRM_KNOB_ASSIGN_PITCH_SHIFTER;
  extern Parameter PRM_KNOB_ASSIGN_HARMONIST;
  extern Parameter PRM_KNOB_ASSIGN_HUMANIZER;
  extern Parameter PRM_KNOB_ASSIGN_EVH_PHASER;
  extern Parameter PRM_KNOB_ASSIGN_EVH_FLANGER;
  extern Parameter PRM_KNOB_ASSIGN_EVH_WAH;
  extern Parameter PRM_KNOB_ASSIGN_DC30;
  extern Parameter PRM_KNOB_ASSIGN_HEAVY_OCT;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_BOOSTER_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_BOOSTER_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_DELAY_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_DELAY_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_REVERB_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_REVERB_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_CHORUS_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_CHORUS_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_FLANGER_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_FLANGER_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_PHASER_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_PHASER_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_UNI_V_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_UNI_V_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_TREMOLO_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_TREMOLO_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_VIBRATO_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_VIBRATO_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_ROTARY_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_ROTARY_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_RING_MOD_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_RING_MOD_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_SLOW_GEAR_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_SLOW_GEAR_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_SLICER_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_SLICER_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_COMP_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_COMP_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_LIMITER_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_LIMITER_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_T_WAH_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_T_WAH_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_AUTO_WAH_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_AUTO_WAH_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_PEDAL_WAH_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_PEDAL_WAH_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_GEQ_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_GEQ_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_PEQ_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_PEQ_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_GUITAR_SIM_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_GUITAR_SIM_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_AC_GUITAR_SIM_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_AC_GUITAR_SIM_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_AC_PROCESSOR_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_AC_PROCESSOR_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_WAVE_SYNTH_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_WAVE_SYNTH_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_OCTAVE_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_OCTAVE_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_PITCH_SHIFTER_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_PITCH_SHIFTER_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_HARMONIST_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_HARMONIST_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_HUMANIZER_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_HUMANIZER_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_EVH_PHASER_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_EVH_PHASER_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_EVH_FLANGER_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_EVH_FLANGER_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_EVH_WAH_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_EVH_WAH_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_DC30_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_DC30_MAX;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_HEAVY_OCT_MIN;
  extern Parameter PRM_EXP_PEDAL_ASSIGN_HEAVY_OCT_MAX;
  extern Parameter PRM_PATCH_WRITE;
  extern Parameter PRM_PATCH_CLEAR;

  extern Parameter* overview[];
  extern Parameter* ampLevels[];
  extern Parameter* effectLevels[];
  extern Parameter* ampCabSettings[];
  extern Parameter* effectTypes[];
  extern std::unordered_map<uint32_t, Parameter*> list;

  void startUpSync();
  void runTimeSync();
  void channelRead();

};  // namespace AllParams

#endif