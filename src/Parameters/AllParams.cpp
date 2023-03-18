#include "AllParams.h"
#include "Tools/Profiling.h"
Parameter AllParams::PRM_SYS_USB_IN_OUT_MODE("USB In/Out Mode", 0x00000000, 1, 0, 0, 0);
RangeParameter AllParams::PRM_SYS_USB_INPUT_LEVEL("USB Input Level", 0x00000001, 1, -20, 20, 0);
Parameter AllParams::PRM_SYS_USB_OUT_LEV("USB Out Level", 0x00000002, 1, 0, 100, 50);
Parameter AllParams::PRM_SYS_USB_MIX_LEV("USB Mix Level", 0x00000003, 1, 0, 100, 25);
ListParameter AllParams::PRM_SYS_USB_DIR_MONITOR("USB Dir Monitor", 0x00000004, 1, 1, 1, 1, Strings ::toggleNames);
Parameter AllParams::PRM_SYS_USB_DIR_MONITOR_CMD("USB Dir Monitor CMD", 0x00000005, 1, 0, 0, 0);
ListParameter AllParams::PRM_SYS_USB_LOOPBACK("USB Loopback", 0x00000006, 1, 0, 1, 0, Strings::toggleNames);
Parameter AllParams::PRM_SYS_USB_2_OUT_LEV("USB2 Out Level", 0x00000007, 1, 0, 100, 50);
ListParameter AllParams::PRM_SYS_EQ_SW("EQ Switch", 0x00000010, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_SYS_EQ_TYPE("EQ Type", 0x00000011, 1, 0, 1, 0, Strings::SysEQType);
ListParameter AllParams::PRM_SYS_EQ_POSITION("Position", 0x00000012, 1, 0, 1, 1, Strings::InOut);
ListParameter AllParams::PRM_SYS_EQ_PEQ_LOW_CUT("Low-Cut", 0x00000013, 1, 0, 17, 0, Strings::PRM_REVERB_LOWCUT_NAMES);
RangeParameter AllParams::PRM_SYS_EQ_PEQ_LOW_GAIN("Low Gain", 0x00000014, 1, -20, 20, 0);
ListParameter AllParams::PRM_SYS_EQ_PEQ_LOWMID_FREQ("Low-Mid Freq", 0x00000015, 1, 0, 27, 13, Strings::HighMidFreq);
ListParameter AllParams::PRM_SYS_EQ_PEQ_LOWMID_Q("Low-Mid Q", 0x00000016, 1, 0, 5, 1, Strings::EQ_Q);
RangeParameter AllParams::PRM_SYS_EQ_PEQ_LOWMID_GAIN("Low-Mid Gain", 0x00000017, 1, -20, 20, 0);
ListParameter AllParams::PRM_SYS_EQ_PEQ_HIGHMID_FREQ("High-Mid Freq", 0x00000018, 1, 0, 27, 23, Strings::HighMidFreq);
ListParameter AllParams::PRM_SYS_EQ_PEQ_HIGHMID_Q("High-Mid Q", 0x00000019, 1, 0, 5, 1, Strings::EQ_Q);
RangeParameter AllParams::PRM_SYS_EQ_PEQ_HIGHMID_GAIN("High-Mid Gain", 0x0000001a, 1, -20, 20, 0);
RangeParameter AllParams::PRM_SYS_EQ_PEQ_HIGH_GAIN("High Gain", 0x0000001b, 1, -20, 20, 0);
ListParameter AllParams::PRM_SYS_EQ_PEQ_HIGH_CUT("High-Cut", 0x0000001c, 1, 0, 14, 14, Strings::PRM_REVERB_HIGHCUT_NAMES);
RangeParameter AllParams::PRM_SYS_EQ_PEQ_LEVEL("Level", 0x0000001d, 1, -20, 20, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND1("31Hz", 0x0000001e, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND2("62Hz", 0x0000001f, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND3("125Hz", 0x00000020, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND4("250Hz", 0x00000021, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND5("500Hz", 0x00000022, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND6("1KHz", 0x00000023, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND7("2KHz", 0x00000024, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND8("4KHz", 0x00000025, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND9("8KHz", 0x00000026, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_BAND10("16KHz", 0x00000027, 1, -24, 24, 0);
RangeParameter AllParams::PRM_SYS_EQ_GEQ_LEVEL("Level", 0x00000028, 1, -24, 24, 0);
ListParameter AllParams::PRM_SYS_PATCH_SEL("Channel", 0x00010000, 2, 0, 8, 0, Strings::channelNames, /* SkipList */ { 3, 4, 7, 8 });
ListParameter AllParams::PRM_SYS_LINE_OUT_MODE("Line-Out Air Feel", 0x00000029, 1, 0, 2, 0, Strings::lineOutMode);
Parameter AllParams::PRM_SYS_EXPAND_MODE("Expand Mode", 0x0000002a, 1, 0, 1, 0);
ListParameter AllParams::PRM_SYS_PWR_CAB_EQ_TYPE("Type", 0x0000002b, 1, 0, 4, 0, Strings::highPassFilterTypes);
Parameter AllParams::PRM_SYS_PWR_CAB_EQ_FREQ("Freq", 0x0000002c, 1, 1, 100, 1);
RangeParameter AllParams::PRM_SYS_PWR_CAB_EQ_LEVEL("Level", 0x0000002d, 1, -20, 20, 0);
Parameter AllParams::PRM_SYS_MIDI_RX_CH("RX Channel", 0x00020000, 1, 0, 15, 0);
Parameter AllParams::PRM_SYS_MIDI_CC_BOOST_SW("RX CC BST Switch", 0x00020001, 1, 0, 62, 15);
Parameter AllParams::PRM_SYS_MIDI_CC_MOD_SW("RX CX MOD Switch", 0x00020002, 1, 0, 62, 16);
Parameter AllParams::PRM_SYS_MIDI_CC_FX_SW("RX CC FX Switch", 0x00020003, 1, 0, 62, 17);
Parameter AllParams::PRM_SYS_MIDI_CC_DELAY_SW("RX CC DLY Switch", 0x00020004, 1, 0, 62, 18);
Parameter AllParams::PRM_SYS_MIDI_CC_REVERB_SW("RX CC RVB Switch", 0x00020005, 1, 0, 62, 19);
Parameter AllParams::PRM_SYS_MIDI_CC_XLP_SW("RX CC SND/RTN Switch", 0x00020006, 1, 0, 62, 20);
Parameter AllParams::PRM_SYS_MIDI_CC_EXPPEDAL("RX CC EXP PDL", 0x00020007, 1, 0, 62, 47);
Parameter AllParams::PRM_SYS_MIDI_CC_GAFCEXP1("RX CC GAFC EXP1", 0x00020008, 1, 0, 62, 48);
Parameter AllParams::PRM_SYS_MIDI_CC_GAFCEXP2("RX CC GAFC EXP2", 0x00020009, 1, 0, 62, 49);
Parameter AllParams::PRM_SYS_MIDI_CC_GAFCFS1("RX CC GAFC FS1", 0x0002000a, 1, 0, 62, 50);
Parameter AllParams::PRM_SYS_MIDI_CC_GAFCFS2("RX CC GAFC FS2", 0x0002000b, 1, 0, 62, 51);
Parameter AllParams::PRM_SYS_MIDI_PC_PANEL("RX PC Panel", 0x0002000c, 1, 0, 127, 4);
Parameter AllParams::PRM_SYS_MIDI_PC_A1("RX PC A CH1", 0x0002000d, 1, 0, 127, 0);
Parameter AllParams::PRM_SYS_MIDI_PC_A2("RX PC A CH2", 0x0002000e, 1, 0, 127, 1);
Parameter AllParams::PRM_SYS_MIDI_PC_A3("RX PC A CH3", 0x0002000f, 1, 0, 127, 2);
Parameter AllParams::PRM_SYS_MIDI_PC_A4("RX PC A CH4", 0x00020010, 1, 0, 127, 3);
Parameter AllParams::PRM_SYS_MIDI_PC_B1("RX PC B CH1", 0x00020011, 1, 0, 127, 5);
Parameter AllParams::PRM_SYS_MIDI_PC_B2("RX PC B CH2", 0x00020012, 1, 0, 127, 6);
Parameter AllParams::PRM_SYS_MIDI_PC_B3("RX PC B CH3", 0x00020013, 1, 0, 127, 7);
Parameter AllParams::PRM_SYS_MIDI_PC_B4("RX PC B CH4", 0x00020014, 1, 0, 127, 8);
ListParameter AllParams::PRM_ODDS_SW("Boost Switch", 0x60000010, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_ODDS_TYPE("Boost Type", 0x60000011, 1, 0, 22, 10, Strings::boostTypeNames, /* SkipList */ { 7 });
Parameter AllParams::PRM_ODDS_DRIVE("Drive", 0x60000012, 1, 0, 120, 50);
RangeParameter AllParams::PRM_ODDS_BOTTOM("Bottom", 0x60000013, 1, -50, 50, 10);
RangeParameter AllParams::PRM_ODDS_TONE("Tone", 0x60000014, 1, -50, 50, 0);
ListParameter AllParams::PRM_ODDS_SOLO_SW("Solo Switch", 0x60000015, 1, 0, 1, 0, Strings::toggleNames);
Parameter AllParams::PRM_ODDS_SOLO_LEVEL("Solo Level", 0x60000016, 1, 0, 100, 50);
Parameter AllParams::PRM_ODDS_EFFECT_LEVEL("Effect Level", 0x60000017, 1, 0, 100, 40);
Parameter AllParams::PRM_ODDS_DIRECT_LEVEL("Direct Mix", 0x60000018, 1, 0, 100, 0);
ListParameter AllParams::PRM_SNEAKY_CUSTOM_TYPE("Custom Type", 0x60000019, 1, 0, 7, 0, Strings::customBoosts);
Parameter AllParams::PRM_SNEAKY_CUSTOM_BOTTOM("Custom Bottom", 0x6000001a, 1, 0, 100, 50);
Parameter AllParams::PRM_SNEAKY_CUSTOM_TOP("Custom Top", 0x6000001b, 1, 0, 100, 50);
Parameter AllParams::PRM_SNEAKY_CUSTOM_LOW("Custom Low", 0x6000001c, 1, 0, 100, 50);
Parameter AllParams::PRM_SNEAKY_CUSTOM_HIGH("Custom High", 0x6000001d, 1, 0, 100, 50);
Parameter AllParams::PRM_SNEAKY_CUSTOM_CHARACTER("Custom Character", 0x6000001e, 1, 0, 100, 50);
ListParameter AllParams::PRM_PREAMP_A_TYPE("Amp Type", 0x60000021, 1, 0, 32, 8, Strings::ampTypeNames, /* SkipList*/ { 26, 27 });
Parameter AllParams::PRM_PREAMP_A_GAIN("Gain", 0x60000022, 1, 0, 120, 60);
Parameter AllParams::PRM_PREAMP_A_BASS("Bass", 0x60000024, 1, 0, 100, 50);
Parameter AllParams::PRM_PREAMP_A_MIDDLE("Middle", 0x60000025, 1, 0, 100, 50);
Parameter AllParams::PRM_PREAMP_A_TREBLE("Treble", 0x60000026, 1, 0, 100, 50);
Parameter AllParams::PRM_PREAMP_A_PRESENCE("Presence", 0x60000027, 1, 0, 100, 50);
Parameter AllParams::PRM_PREAMP_A_LEVEL("Level", 0x60000028, 1, 0, 100, 50);
ListParameter AllParams::PRM_PREAMP_A_BRIGHT("Bright Switch", 0x60000029, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_PREAMP_A_SOLO_SW("Solo Switch", 0x6000002b, 1, 0, 1, 0, Strings::toggleNames);
Parameter AllParams::PRM_PREAMP_A_SOLO_LEVEL("Solo Level", 0x6000002c, 1, 0, 100, 50);
ListParameter AllParams::PRM_EQ_SW("Switch", 0x60000040, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_EQ_TYPE("Type", 0x60000041, 1, 0, 1, 0, Strings::SysEQType);
ListParameter AllParams::PRM_EQ_LOW_CUT("Low-Cut", 0x60000042, 1, 0, 17, 0, Strings::PRM_REVERB_LOWCUT_NAMES);
RangeParameter AllParams::PRM_EQ_LOW_GAIN("Low Gain", 0x60000043, 1, -20, 20, 0);
ListParameter AllParams::PRM_EQ_LOWMID_FREQ("Low-Mid Freq", 0x60000044, 1, 0, 27, 14, Strings::HighMidFreq);
ListParameter AllParams::PRM_EQ_LOWMID_Q("Low-Mid Q", 0x60000045, 1, 0, 5, 1, Strings::EQ_Q);
RangeParameter AllParams::PRM_EQ_LOWMID_GAIN("Low-Mid Gain", 0x60000046, 1, -20, 20, 0);
ListParameter AllParams::PRM_EQ_HIGHMID_FREQ("High-Mid Freq", 0x60000047, 1, 0, 27, 23, Strings::HighMidFreq);
ListParameter AllParams::PRM_EQ_HIGHMID_Q("High-Mid Q", 0x60000048, 1, 0, 5, 1, Strings::EQ_Q);
RangeParameter AllParams::PRM_EQ_HIGHMID_GAIN("High-Mid Gain", 0x60000049, 1, -20, 20, 0);
RangeParameter AllParams::PRM_EQ_HIGH_GAIN("High Gain", 0x6000004a, 1, -20, 20, 0);
ListParameter AllParams::PRM_EQ_HIGH_CUT("High-Cut", 0x6000004b, 1, 0, 14, 14, Strings::PRM_REVERB_HIGHCUT_NAMES);
RangeParameter AllParams::PRM_EQ_LEVEL("Level", 0x6000004c, 1, -20, 20, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND1("31Hz", 0x6000004d, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND2("62Hz", 0x6000004e, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND3("125Hz", 0x6000004f, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND4("250Hz", 0x60000050, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND5("500Hz", 0x60000051, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND6("1KHz", 0x60000052, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND7("2KHz", 0x60000053, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND8("4KHz", 0x60000054, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND9("8KHz", 0x60000055, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_BAND10("16KHz", 0x60000056, 1, -24, 24, 0);
RangeParameter AllParams::PRM_EQ_GEQ_LEVEL("Level", 0x60000057, 1, -24, 24, 0);
ListParameter AllParams::PRM_FX1_SW("Mod Switch", 0x60000100, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_FX1_FXTYPE("Mod Type", 0x60000101, 1, 0, 39, 29, Strings::fxTypeNames, /* SkipList */ { 5, 8, 11, 13, 17, 24, 30, 32, 33, 34 });
ListParameter AllParams::PRM_FX1_TWAH_MODE("Mode", 0x60000102, 1, 0, 1, 1, Strings::TWahMode);
ListParameter AllParams::PRM_FX1_TWAH_POLARITY("Polarity", 0x60000103, 1, 0, 1, 1, Strings::UpDown);
Parameter AllParams::PRM_FX1_TWAH_SENS("Sensitivity", 0x60000104, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_TWAH_FREQ("Freq", 0x60000105, 1, 0, 100, 35);
Parameter AllParams::PRM_FX1_TWAH_PEAK("Peak", 0x60000106, 1, 0, 100, 35);
Parameter AllParams::PRM_FX1_TWAH_D_LEVEL("Direct Mix", 0x60000107, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_TWAH_LEVEL("Effect Level", 0x60000108, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX1_AWAH_MODE("Mode", 0x60000109, 1, 0, 1, 1, Strings::TWahMode);
Parameter AllParams::PRM_FX1_AWAH_FREQ("Frequency", 0x6000010a, 1, 0, 100, 35);
Parameter AllParams::PRM_FX1_AWAH_PEAK("Peak", 0x6000010b, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_AWAH_RATE("Rate", 0x6000010c, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_AWAH_DEPTH("Depth", 0x6000010d, 1, 0, 100, 60);
Parameter AllParams::PRM_FX1_AWAH_D_LEVEL("Direct Mix", 0x6000010e, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_AWAH_LEVEL("Effect Level", 0x6000010f, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX1_SUBWAH_TYPE("Type", 0x60000110, 1, 0, 5, 0, Strings::PedalWahTypes);
Parameter AllParams::PRM_FX1_SUBWAH_PDLPOS("Pedal Pos", 0x60000111, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_SUBWAH_MIN("Pedal Min", 0x60000112, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_SUBWAH_MAX("Pedal Max", 0x60000113, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_SUBWAH_E_LEVEL("Effect Level", 0x60000114, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_SUBWAH_D_LEVEL("Direct Mix", 0x60000115, 1, 0, 100, 0);
ListParameter AllParams::PRM_FX1_ADCOMP_TYPE("Type", 0x60000116, 1, 0, 6, 0, Strings::CompTypes);
Parameter AllParams::PRM_FX1_ADCOMP_SUSTAIN("Sustain", 0x60000117, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_ADCOMP_ATTACK("Attack", 0x60000118, 1, 0, 100, 50);
RangeParameter AllParams::PRM_FX1_ADCOMP_TONE("Tone", 0x60000119, 1, -50, 50, 0);
Parameter AllParams::PRM_FX1_ADCOMP_LEVEL("Level", 0x6000011a, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX1_LIMITER_TYPE("Type", 0x6000011b, 1, 0, 2, 0, Strings::LimiterTypes);
Parameter AllParams::PRM_FX1_LIMITER_ATTACK("Attack", 0x6000011c, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_LIMITER_THRESHOLD("Threshold", 0x6000011d, 1, 0, 100, 30);
ListParameter AllParams::PRM_FX1_LIMITER_RATIO("Ratio", 0x6000011e, 1, 0, 17, 11, Strings::Lim_Ratios);
Parameter AllParams::PRM_FX1_LIMITER_RELEASE("Release", 0x6000011f, 1, 0, 100, 10);
Parameter AllParams::PRM_FX1_LIMITER_LEVEL("Level", 0x60000120, 1, 0, 100, 30);
RangeParameter AllParams::PRM_FX1_GEQ_BAND1("31Hz", 0x60000121, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_BAND2("62Hz", 0x60000122, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_BAND3("125Hz", 0x60000123, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_BAND4("250Hz", 0x60000124, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_BAND5("500Hz", 0x60000125, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_BAND6("1kHz", 0x60000126, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_BAND7("2kHz", 0x60000127, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_BAND8("4kHz", 0x60000128, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_BAND9("8kHz", 0x60000129, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_BAND10("16kHz", 0x6000012a, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_GEQ_LEVEL("Level", 0x6000012b, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX1_PEQ_LOW_CUT("Low-Cut", 0x6000012c, 1, 0, 17, 0, Strings::PRM_REVERB_LOWCUT_NAMES);
RangeParameter AllParams::PRM_FX1_PEQ_LOW_GAIN("Low Gain", 0x6000012d, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX1_PEQ_LOWMID_FREQ("Low-Mid Freq", 0x6000012e, 1, 0, 27, 13, Strings::HighMidFreq);
ListParameter AllParams::PRM_FX1_PEQ_LOWMID_Q("Low-Mid Q", 0x6000012f, 1, 0, 5, 1, Strings::EQ_Q);
RangeParameter AllParams::PRM_FX1_PEQ_LOWMID_GAIN("Low-Mid Gain", 0x60000130, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX1_PEQ_HIGHMID_FREQ("High-Mid Freq", 0x60000131, 1, 0, 27, 23, Strings::HighMidFreq);
ListParameter AllParams::PRM_FX1_PEQ_HIGHMID_Q("High-Mid Q", 0x60000132, 1, 0, 5, 1, Strings::EQ_Q);
RangeParameter AllParams::PRM_FX1_PEQ_HIGHMID_GAIN("High-Mid Gain", 0x60000133, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX1_PEQ_HIGH_GAIN("High Gain", 0x60000134, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX1_PEQ_HIGH_CUT("High-Cut", 0x60000135, 1, 0, 14, 14, Strings::PRM_REVERB_HIGHCUT_NAMES);
RangeParameter AllParams::PRM_FX1_PEQ_LEVEL("Level", 0x60000136, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX1_GTRSIM_TYPE("Type", 0x60000137, 1, 0, 7, 0, Strings::GitSimType);
RangeParameter AllParams::PRM_FX1_GTRSIM_LOW("Low", 0x60000138, 1, -50, 50, 0);
RangeParameter AllParams::PRM_FX1_GTRSIM_HIGH("High", 0x60000139, 1, -50, 50, 0);
Parameter AllParams::PRM_FX1_GTRSIM_LEVEL("Level", 0x6000013a, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_GTRSIM_BODY("Body", 0x6000013b, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_SLOWGEAR_SENS("Sensitivity", 0x6000013c, 1, 0, 100, 45);
Parameter AllParams::PRM_FX1_SLOWGEAR_RISETIME("Rise-Time", 0x6000013d, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_SLOWGEAR_LEVEL("Level", 0x6000013e, 1, 0, 100, 60);
ListParameter AllParams::PRM_FX1_WAVESYN_WAVE("Wave", 0x6000013f, 1, 0, 1, 0, Strings::WaveType);
Parameter AllParams::PRM_FX1_WAVESYN_CUTOFF("Cut-Off", 0x60000140, 1, 0, 100, 40);
Parameter AllParams::PRM_FX1_WAVESYN_RESONANCE("Resonance", 0x60000141, 1, 0, 100, 30);
Parameter AllParams::PRM_FX1_WAVESYN_FLT_SENS("Filter Sens", 0x60000142, 1, 0, 100, 40);
Parameter AllParams::PRM_FX1_WAVESYN_FLT_DECAY("Filter Decay", 0x60000143, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_WAVESYN_FLT_DEPTH("Filter Depth", 0x60000144, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_WAVESYN_SYN_LEVEL("Synth Level", 0x60000145, 1, 0, 100, 25);
Parameter AllParams::PRM_FX1_WAVESYN_D_LEVEL("Direct Mix", 0x60000146, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_OCTAVE_RANGE("Range", 0x60000147, 1, 0, 3, 0);
Parameter AllParams::PRM_FX1_OCTAVE_LEVEL("Effect Level", 0x60000148, 1, 0, 100, 62);
Parameter AllParams::PRM_FX1_OCTAVE_D_LEVEL("Direct Mix", 0x60000149, 1, 0, 100, 100);
ListParameter AllParams::PRM_FX1_PITCHSHIFT_VOICE("Voice", 0x6000014a, 1, 0, 1, 0, Strings::Voices);
ListParameter AllParams::PRM_FX1_PITCHSHIFT_MODE1("PS1: Mode", 0x6000014b, 1, 0, 3, 1, Strings::PSMode);
RangeParameter AllParams::PRM_FX1_PITCHSHIFT_PITCH1("PS1: Pitch", 0x6000014c, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_PITCHSHIFT_FINE1("PS1: Fine", 0x6000014d, 1, -50, 50, 10);
Parameter AllParams::PRM_FX1_PITCHSHIFT_PREDELAY1("PS1: Pre-Delay", 0x6000014e, 2, 0, 300, 0);
Parameter AllParams::PRM_FX1_PITCHSHIFT_LEVEL1("PS1: Level", 0x60000150, 1, 0, 100, 70);
ListParameter AllParams::PRM_FX1_PITCHSHIFT_MODE2("PS2: Mode", 0x60000151, 1, 0, 3, 1, Strings::PSMode);
RangeParameter AllParams::PRM_FX1_PITCHSHIFT_PITCH2("PS2: Pitch", 0x60000152, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_PITCHSHIFT_FINE2("PS2: Fine", 0x60000153, 1, -50, 50, -10);
Parameter AllParams::PRM_FX1_PITCHSHIFT_PREDELAY2("PS2: Pre-Delay", 0x60000154, 2, 0, 300, 0);
Parameter AllParams::PRM_FX1_PITCHSHIFT_LEVEL2("PS2: Level", 0x60000156, 1, 0, 100, 70);
Parameter AllParams::PRM_FX1_PITCHSHIFT_FEEDBACK("PS1: Feedback", 0x60000157, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_PITCHSHIFT_D_LEVEL("Direct Mix", 0x60000158, 1, 0, 100, 100);
ListParameter AllParams::PRM_FX1_HARMONIST_VOICE("Voice", 0x60000159, 1, 0, 1, 1, Strings::Voices);
ListParameter AllParams::PRM_FX1_HARMONIST_HARMONY1("HR1: Harmony", 0x6000015a, 1, 0, 29, 12, Strings::Harmonist);
Parameter AllParams::PRM_FX1_HARMONIST_PREDELAY1("HR1: Pre-Delay", 0x6000015b, 2, 0, 300, 0);
Parameter AllParams::PRM_FX1_HARMONIST_LEVEL1("HR1: Level", 0x6000015d, 1, 0, 100, 70);
ListParameter AllParams::PRM_FX1_HARMONIST_HARMONY2("HR2: Harmony", 0x6000015e, 1, 0, 29, 7, Strings::Harmonist);
Parameter AllParams::PRM_FX1_HARMONIST_PREDELAY2("HR2: Pre-Delay", 0x6000015f, 2, 0, 300, 0);
Parameter AllParams::PRM_FX1_HARMONIST_LEVEL2("HR2: Level", 0x60000161, 1, 0, 100, 80);
Parameter AllParams::PRM_FX1_HARMONIST_FEEDBACK("HR1: Feedback", 0x60000162, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_HARMONIST_D_LEVEL("Direct Mix", 0x60000163, 1, 0, 100, 100);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_1("HR1: C", 0x60000164, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_2("HR1: Db", 0x60000165, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_3("HR1: D", 0x60000166, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_4("HR1: Eb", 0x60000167, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_5("HR1: E", 0x60000168, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_6("HR1: F", 0x60000169, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_7("HR1: F#", 0x6000016a, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_8("HR1: G", 0x6000016b, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_9("HR1: Ab", 0x6000016c, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_10("HR1: A", 0x6000016d, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_11("HR1: Bb", 0x6000016e, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V1_HARM_12("HR1: B", 0x6000016f, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_1("HR2: C", 0x60000170, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_2("HR2: Db", 0x60000171, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_3("HR2: D", 0x60000172, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_4("HR2: Eb", 0x60000173, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_5("HR2: E", 0x60000174, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_6("HR2: F", 0x60000175, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_7("HR2: F#", 0x60000176, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_8("HR2: G", 0x60000177, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_9("HR2: Ab", 0x60000178, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_10("HR2: A", 0x60000179, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_11("HR2: Bb", 0x6000017a, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX1_HARMONIST_V2_HARM_12("HR2: B", 0x6000017b, 1, -24, 24, 0);
ListParameter AllParams::PRM_FX1_ACPROCESS_TYPE("Type", 0x6000017c, 1, 0, 3, 1, Strings::ACProTypes);
RangeParameter AllParams::PRM_FX1_ACPROCESS_BASS("Bass", 0x6000017d, 1, -50, 50, 0);
RangeParameter AllParams::PRM_FX1_ACPROCESS_MID("Middle", 0x6000017e, 1, -50, 50, 0);
ListParameter AllParams::PRM_FX1_ACPROCESS_MID_F("Middle Freq", 0x6000017f, 1, 0, 27, 16, Strings::HighMidFreq);
RangeParameter AllParams::PRM_FX1_ACPROCESS_TREBLE("Treble", 0x60000200, 1, -50, 50, 0);
RangeParameter AllParams::PRM_FX1_ACPROCESS_PRESENCE("Presence", 0x60000201, 1, -50, 50, 0);
Parameter AllParams::PRM_FX1_ACPROCESS_LEVEL("Level", 0x60000202, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX1_PHASER_TYPE("Type", 0x60000203, 1, 0, 3, 0, Strings::PRM_FX_PHASER_TYPE_NAMES);
Parameter AllParams::PRM_FX1_PHASER_RATE("Rate", 0x60000204, 1, 0, 100, 70);
Parameter AllParams::PRM_FX1_PHASER_DEPTH("Depth", 0x60000205, 1, 0, 100, 40);
Parameter AllParams::PRM_FX1_PHASER_MANUAL("Manual", 0x60000206, 1, 0, 100, 55);
Parameter AllParams::PRM_FX1_PHASER_RESONANCE("Resonance", 0x60000207, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_PHASER_STEPRATE("Step Rate", 0x60000208, 1, -1, 100, -1);
Parameter AllParams::PRM_FX1_PHASER_E_LEVEL("Effect Level", 0x60000209, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_PHASER_D_LEVEL("Direct Mix", 0x6000020a, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_FLANGER_RATE("Rate", 0x6000020b, 1, 0, 100, 31);
Parameter AllParams::PRM_FX1_FLANGER_DEPTH("Depth", 0x6000020c, 1, 0, 100, 40);
Parameter AllParams::PRM_FX1_FLANGER_MANUAL("Manual", 0x6000020d, 1, 0, 100, 82);
Parameter AllParams::PRM_FX1_FLANGER_RESONANCE("Resonance", 0x6000020e, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX1_FLANGER_LOWCUT("Low-Cut", 0x60000210, 1, 0, 10, 0, Strings::PRM_FLANGER_LOWCUT_NAMES);
Parameter AllParams::PRM_FX1_FLANGER_E_LEVEL("Effect Level", 0x60000211, 1, 0, 100, 60);
Parameter AllParams::PRM_FX1_FLANGER_D_LEVEL("Direct Mix", 0x60000212, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_TREMOLO_WAVESHAPE("Wave Shape", 0x60000213, 1, 0, 100, 70);
Parameter AllParams::PRM_FX1_TREMOLO_RATE("Rate", 0x60000214, 1, 0, 100, 85);
Parameter AllParams::PRM_FX1_TREMOLO_DEPTH("Depth", 0x60000215, 1, 0, 100, 65);
Parameter AllParams::PRM_FX1_TREMOLO_LEVEL("Level", 0x60000216, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_ROTARY_RATE_FAST("Rate", 0x60000219, 1, 0, 100, 85);
Parameter AllParams::PRM_FX1_ROTARY_DEPTH("Depth", 0x6000021c, 1, 0, 100, 60);
Parameter AllParams::PRM_FX1_ROTARY_LEVEL("Level", 0x6000021d, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_UNI_V_RATE("Rate", 0x6000021e, 1, 0, 100, 70);
Parameter AllParams::PRM_FX1_UNI_V_DEPTH("Depth", 0x6000021f, 1, 0, 100, 60);
Parameter AllParams::PRM_FX1_UNI_V_LEVEL("Level", 0x60000220, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_SLICER_PATTERN("Pattern", 0x60000221, 1, 0, 19, 0);
Parameter AllParams::PRM_FX1_SLICER_RATE("Rate", 0x60000222, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_SLICER_TRIGSENS("Trigger Sens", 0x60000223, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_SLICER_EFFECT_LEVEL("Effect Level", 0x60000224, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_SLICER_DIRECT_LEVEL("Direct Mix", 0x60000225, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_VIBRATO_RATE("Rate", 0x60000226, 1, 0, 100, 80);
Parameter AllParams::PRM_FX1_VIBRATO_DEPTH("Depth", 0x60000227, 1, 0, 100, 45);
Parameter AllParams::PRM_FX1_VIBRATO_LEVEL("Level", 0x6000022a, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX1_RINGMOD_MODE("Mode", 0x6000022b, 1, 0, 1, 0, Strings::Normal_Intelligent);
Parameter AllParams::PRM_FX1_RINGMOD_FREQ("Frequency", 0x6000022c, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_RINGMOD_E_LEVEL("Effect Level", 0x6000022d, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_RINGMOD_D_LEVEL("Direct Mix", 0x6000022e, 1, 0, 100, 100);
ListParameter AllParams::PRM_FX1_HUMANIZER_MODE("Mode", 0x6000022f, 1, 0, 1, 1, Strings::HumanizerType);
ListParameter AllParams::PRM_FX1_HUMANIZER_VOWEL1("Vowel 1", 0x60000230, 1, 0, 4, 0, Strings::Vowels);
ListParameter AllParams::PRM_FX1_HUMANIZER_VOWEL2("Vowel 2", 0x60000231, 1, 0, 4, 2, Strings::Vowels);
Parameter AllParams::PRM_FX1_HUMANIZER_SENS("Sensitivity", 0x60000232, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_HUMANIZER_RATE("Rate", 0x60000233, 1, 0, 100, 80);
Parameter AllParams::PRM_FX1_HUMANIZER_DEPTH("Depth", 0x60000234, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_HUMANIZER_MANUAL("Manual", 0x60000235, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_HUMANIZER_LEVEL("Level", 0x60000236, 1, 0, 100, 100);
ListParameter AllParams::PRM_FX1_2x2CHORUS_XOVERF("X-Over Frequency", 0x60000237, 1, 0, 16, 4, Strings::PRM_FX_CHORUS_XOVER_NAMES);
Parameter AllParams::PRM_FX1_2x2CHORUS_LOW_RATE("Low Rate", 0x60000238, 1, 0, 100, 43);
Parameter AllParams::PRM_FX1_2x2CHORUS_LOW_DEPTH("Low Depth", 0x60000239, 1, 0, 100, 46);
Parameter AllParams::PRM_FX1_2x2CHORUS_LOW_PREDELAY("Low Pre-Delay", 0x6000023a, 1, 0, 80, 3);
Parameter AllParams::PRM_FX1_2x2CHORUS_LOW_LEVEL("Low Level", 0x6000023b, 1, 0, 100, 75);
Parameter AllParams::PRM_FX1_2x2CHORUS_HIGH_RATE("High Rate", 0x6000023c, 1, 0, 100, 33);
Parameter AllParams::PRM_FX1_2x2CHORUS_HIGH_DEPTH("High Depth", 0x6000023d, 1, 0, 100, 48);
Parameter AllParams::PRM_FX1_2x2CHORUS_HIGH_PREDELAY("High Pre-Delay", 0x6000023e, 1, 0, 80, 3);
Parameter AllParams::PRM_FX1_2x2CHORUS_HIGH_LEVEL("High Level", 0x6000023f, 1, 0, 100, 65);
Parameter AllParams::PRM_FX1_2x2CHORUS_DIRECT_LEVEL("Direct Mix", 0x60000240, 1, 0, 100, 80);
RangeParameter AllParams::PRM_FX1_ACSIM_TOP("High", 0x60000241, 1, -50, 50, 0);
Parameter AllParams::PRM_FX1_ACSIM_BODY("Body", 0x60000242, 1, 0, 100, 50);
RangeParameter AllParams::PRM_FX1_ACSIM_LOW("Low", 0x60000243, 1, -50, 50, 0);
RangeParameter AllParams::PRM_FX1_ACSIM_HIGH("High", 0x60000244, 1, -50, 50, 0);
Parameter AllParams::PRM_FX1_ACSIM_LEVEL("Level", 0x60000245, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX1_EVH_PHASER_SCRIPT("Script", 0x60000246, 1, 0, 1, 1, Strings::toggleNames);
Parameter AllParams::PRM_FX1_EVH_PHASER_SPEED("Speed", 0x60000247, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_EVH_FLANGER_MANUAL("Manual", 0x60000248, 1, 0, 100, 45);
Parameter AllParams::PRM_FX1_EVH_FLANGER_WIDTH("Width", 0x60000249, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_EVH_FLANGER_SPEED("Speed", 0x6000024a, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_EVH_FLANGER_REGEN("Regeneration", 0x6000024b, 1, 0, 100, 80);
Parameter AllParams::PRM_FX1_EVH_WAH_PEDAL_POS("Pedal Pos", 0x6000024c, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_EVH_WAH_PEDAL_MIN("Pedal Min", 0x6000024d, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_EVH_WAH_PEDAL_MAX("Pedal Max", 0x6000024e, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_EVH_WAH_EFFECT_LEVEL("Effect Level", 0x6000024f, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_EVH_WAH_DIRECT_MIX("Direct Mix", 0x60000250, 1, 0, 100, 0);
ListParameter AllParams::PRM_FX1_DC30_SELECTOR("Selector", 0x60000251, 1, 0, 1, 0, Strings::DC30Type);
Parameter AllParams::PRM_FX1_DC30_INPUT_VOLUME("Input Volume", 0x60000252, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_DC30_CHORUS_INTENSITY("Chorus Intensity", 0x60000253, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_DC30_ECHO_REPEAT_RATE("Echo Repeat Rate", 0x60000254, 2, 40, 600, 400);
Parameter AllParams::PRM_FX1_DC30_ECHO_INTENSITY("Echo Intensity", 0x60000256, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_DC30_ECHO_VOLUME("Echo Volume", 0x60000257, 1, 0, 100, 100);
Parameter AllParams::PRM_FX1_DC30_TONE("Tone", 0x60000258, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX1_DC30_OUTPUT("Output", 0x60000259, 1, 0, 1, 0, Strings::DC30Output);
Parameter AllParams::PRM_FX1_HEAVY_OCTAVE_1OCT_LEVEL("1 Oct Level", 0x6000025a, 1, 0, 100, 50);
Parameter AllParams::PRM_FX1_HEAVY_OCTAVE_2OCT_LEVEL("2 Oct Level", 0x6000025b, 1, 0, 100, 0);
Parameter AllParams::PRM_FX1_HEAVY_OCTAVE_DIRECT_LEVEL("Direct Mix", 0x6000025c, 1, 0, 100, 100);
ListParameter AllParams::PRM_FX2_SW("Fx Switch", 0x60000300, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_FX2_FXTYPE("Fx Type", 0x60000301, 1, 0, 39, 29, Strings::fxTypeNames, /* SkipList */ { 5, 8, 11, 13, 17, 24, 30, 32, 33, 34 });
ListParameter AllParams::PRM_FX2_TWAH_MODE("Mode", 0x60000302, 1, 0, 1, 1, Strings::TWahMode);
ListParameter AllParams::PRM_FX2_TWAH_POLARITY("Polarity", 0x60000303, 1, 0, 1, 1, Strings::UpDown);
Parameter AllParams::PRM_FX2_TWAH_SENS("Sensitivity", 0x60000304, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_TWAH_FREQ("Freq", 0x60000305, 1, 0, 100, 35);
Parameter AllParams::PRM_FX2_TWAH_PEAK("Peak", 0x60000306, 1, 0, 100, 35);
Parameter AllParams::PRM_FX2_TWAH_D_LEVEL("Direct Mix", 0x60000307, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_TWAH_LEVEL("Effect Level", 0x60000308, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX2_AWAH_MODE("Mode", 0x60000309, 1, 0, 1, 1, Strings::TWahMode);
Parameter AllParams::PRM_FX2_AWAH_FREQ("Freq", 0x6000030a, 1, 0, 100, 35);
Parameter AllParams::PRM_FX2_AWAH_PEAK("Peak", 0x6000030b, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_AWAH_RATE("Rate", 0x6000030c, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_AWAH_DEPTH("Depth", 0x6000030d, 1, 0, 100, 60);
Parameter AllParams::PRM_FX2_AWAH_D_LEVEL("Direct Mix", 0x6000030e, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_AWAH_LEVEL("Effect Level", 0x6000030f, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX2_SUBWAH_TYPE("Type", 0x60000310, 1, 0, 5, 0, Strings::PedalWahTypes);
Parameter AllParams::PRM_FX2_SUBWAH_PDLPOS("Pedal Pos", 0x60000311, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_SUBWAH_MIN("Pedal Min", 0x60000312, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_SUBWAH_MAX("Pedal Max", 0x60000313, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_SUBWAH_E_LEVEL("Effect Level", 0x60000314, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_SUBWAH_D_LEVEL("Direct Mix", 0x60000315, 1, 0, 100, 0);
ListParameter AllParams::PRM_FX2_ADCOMP_TYPE("Type", 0x60000316, 1, 0, 6, 0, Strings::CompTypes);
Parameter AllParams::PRM_FX2_ADCOMP_SUSTAIN("Sustain", 0x60000317, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_ADCOMP_ATTACK("Attack", 0x60000318, 1, 0, 100, 50);
RangeParameter AllParams::PRM_FX2_ADCOMP_TONE("Tone", 0x60000319, 1, -50, 50, 0);
Parameter AllParams::PRM_FX2_ADCOMP_LEVEL("Level", 0x6000031a, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX2_LIMITER_TYPE("Type", 0x6000031b, 1, 0, 2, 0, Strings::LimiterTypes);
Parameter AllParams::PRM_FX2_LIMITER_ATTACK("Attack", 0x6000031c, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_LIMITER_THRESHOLD("Threshold", 0x6000031d, 1, 0, 100, 30);
ListParameter AllParams::PRM_FX2_LIMITER_RATIO("Ratio", 0x6000031e, 1, 0, 17, 11, Strings::Lim_Ratios);
Parameter AllParams::PRM_FX2_LIMITER_RELEASE("Release", 0x6000031f, 1, 0, 100, 10);
Parameter AllParams::PRM_FX2_LIMITER_LEVEL("Level", 0x60000320, 1, 0, 100, 30);
RangeParameter AllParams::PRM_FX2_GEQ_BAND1("31Hz", 0x60000321, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_BAND2("62Hz", 0x60000322, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_BAND3("125Hz", 0x60000323, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_BAND4("250Hz", 0x60000324, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_BAND5("500Hz", 0x60000325, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_BAND6("1kHz", 0x60000326, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_BAND7("2kHz", 0x60000327, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_BAND8("4kHz", 0x60000328, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_BAND9("8kHz", 0x60000329, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_BAND10("16kHz", 0x6000032a, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_GEQ_LEVEL("Level", 0x6000032b, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX2_PEQ_LOW_CUT("Low-Cut", 0x6000032c, 1, 0, 17, 0, Strings::PRM_REVERB_LOWCUT_NAMES);
RangeParameter AllParams::PRM_FX2_PEQ_LOW_GAIN("Low Gain", 0x6000032d, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX2_PEQ_LOWMID_FREQ("Low-Mid Freq", 0x6000032e, 1, 0, 27, 13, Strings::HighMidFreq);
ListParameter AllParams::PRM_FX2_PEQ_LOWMID_Q("Low-Mid Q", 0x6000032f, 1, 0, 5, 1, Strings::EQ_Q);
RangeParameter AllParams::PRM_FX2_PEQ_LOWMID_GAIN("Low-Mid Gain", 0x60000330, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX2_PEQ_HIGHMID_FREQ("High-Mid Freq", 0x60000331, 1, 0, 27, 23, Strings::HighMidFreq);
ListParameter AllParams::PRM_FX2_PEQ_HIGHMID_Q("High-Mid Q", 0x60000332, 1, 0, 5, 1, Strings::EQ_Q);
RangeParameter AllParams::PRM_FX2_PEQ_HIGHMID_GAIN("High-Mid Gain", 0x60000333, 1, -20, 20, 0);
RangeParameter AllParams::PRM_FX2_PEQ_HIGH_GAIN("High Gain", 0x60000334, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX2_PEQ_HIGH_CUT("High-Cut", 0x60000335, 1, 0, 14, 14, Strings::PRM_REVERB_HIGHCUT_NAMES);
RangeParameter AllParams::PRM_FX2_PEQ_LEVEL("Level", 0x60000336, 1, -20, 20, 0);
ListParameter AllParams::PRM_FX2_GTRSIM_TYPE("Type", 0x60000337, 1, 0, 7, 0, Strings::GitSimType);
RangeParameter AllParams::PRM_FX2_GTRSIM_LOW("Low", 0x60000338, 1, -50, 50, 0);
RangeParameter AllParams::PRM_FX2_GTRSIM_HIGH("High", 0x60000339, 1, -50, 50, 0);
Parameter AllParams::PRM_FX2_GTRSIM_LEVEL("Level", 0x6000033a, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_GTRSIM_BODY("Body", 0x6000033b, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_SLOWGEAR_SENS("Sensitivity", 0x6000033c, 1, 0, 100, 45);
Parameter AllParams::PRM_FX2_SLOWGEAR_RISETIME("Rise-Time", 0x6000033d, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_SLOWGEAR_LEVEL("Level", 0x6000033e, 1, 0, 100, 60);
ListParameter AllParams::PRM_FX2_WAVESYN_WAVE("Wave", 0x6000033f, 1, 0, 1, 0, Strings::WaveType);
Parameter AllParams::PRM_FX2_WAVESYN_CUTOFF("Cut-Off", 0x60000340, 1, 0, 100, 40);
Parameter AllParams::PRM_FX2_WAVESYN_RESONANCE("Resonance", 0x60000341, 1, 0, 100, 30);
Parameter AllParams::PRM_FX2_WAVESYN_FLT_SENS("Filter Sens", 0x60000342, 1, 0, 100, 40);
Parameter AllParams::PRM_FX2_WAVESYN_FLT_DECAY("Filter Decay", 0x60000343, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_WAVESYN_FLT_DEPTH("Filter Depth", 0x60000344, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_WAVESYN_SYN_LEVEL("Synth Level", 0x60000345, 1, 0, 100, 25);
Parameter AllParams::PRM_FX2_WAVESYN_D_LEVEL("Direct Mix", 0x60000346, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_OCTAVE_RANGE("Range", 0x60000347, 1, 0, 3, 0);
Parameter AllParams::PRM_FX2_OCTAVE_LEVEL("Effect Level", 0x60000348, 1, 0, 100, 62);
Parameter AllParams::PRM_FX2_OCTAVE_D_LEVEL("Direct Mix", 0x60000349, 1, 0, 100, 100);
ListParameter AllParams::PRM_FX2_PITCHSHIFT_VOICE("Voice", 0x6000034a, 1, 0, 1, 0, Strings::Voices);
ListParameter AllParams::PRM_FX2_PITCHSHIFT_MODE1("PS1: Mode", 0x6000034b, 1, 0, 3, 1, Strings::PSMode);
RangeParameter AllParams::PRM_FX2_PITCHSHIFT_PITCH1("PS1: Pitch", 0x6000034c, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_PITCHSHIFT_FINE1("PS1: Fine", 0x6000034d, 1, -50, 50, 10);
Parameter AllParams::PRM_FX2_PITCHSHIFT_PREDELAY1("PS1: Pre-Delay", 0x6000034e, 2, 0, 300, 0);
Parameter AllParams::PRM_FX2_PITCHSHIFT_LEVEL1("PS1: Level", 0x60000350, 1, 0, 100, 70);
ListParameter AllParams::PRM_FX2_PITCHSHIFT_MODE2("PS2: Mode", 0x60000351, 1, 0, 3, 1, Strings::PSMode);
RangeParameter AllParams::PRM_FX2_PITCHSHIFT_PITCH2("PS2: Pitch", 0x60000352, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_PITCHSHIFT_FINE2("PS2: Fine", 0x60000353, 1, -50, 50, -10);
Parameter AllParams::PRM_FX2_PITCHSHIFT_PREDELAY2("PS2: Pre-Delay", 0x60000354, 2, 0, 300, 0);
Parameter AllParams::PRM_FX2_PITCHSHIFT_LEVEL2("PS2: Level", 0x60000356, 1, 0, 100, 70);
Parameter AllParams::PRM_FX2_PITCHSHIFT_FEEDBACK("PS1: Feedback", 0x60000357, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_PITCHSHIFT_D_LEVEL("Direct Mix", 0x60000358, 1, 0, 100, 100);
ListParameter AllParams::PRM_FX2_HARMONIST_VOICE("Voice", 0x60000359, 1, 0, 1, 1, Strings::Voices);
ListParameter AllParams::PRM_FX2_HARMONIST_HARMONY1("HR1: Harmony", 0x6000035a, 1, 0, 29, 12, Strings::Harmonist);
Parameter AllParams::PRM_FX2_HARMONIST_PREDELAY1("HR1: Pre-Delay", 0x6000035b, 2, 0, 300, 0);
Parameter AllParams::PRM_FX2_HARMONIST_LEVEL1("HR1: Level", 0x6000035d, 1, 0, 100, 70);
ListParameter AllParams::PRM_FX2_HARMONIST_HARMONY2("HR2: Harmony", 0x6000035e, 1, 0, 29, 7, Strings::Harmonist);
Parameter AllParams::PRM_FX2_HARMONIST_PREDELAY2("HR2: Pre-Delay", 0x6000035f, 2, 0, 300, 0);
Parameter AllParams::PRM_FX2_HARMONIST_LEVEL2("HR2: Level", 0x60000361, 1, 0, 100, 80);
Parameter AllParams::PRM_FX2_HARMONIST_FEEDBACK("HR1: Feedback", 0x60000362, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_HARMONIST_D_LEVEL("Direct Mix", 0x60000363, 1, 0, 100, 100);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_1("HR1: C", 0x60000364, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_2("HR1: Db", 0x60000365, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_3("HR1: D", 0x60000366, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_4("HR1: Eb", 0x60000367, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_5("HR1: E", 0x60000368, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_6("HR1: F", 0x60000369, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_7("HR1: F#", 0x6000036a, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_8("HR1: G", 0x6000036b, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_9("HR1: Ab", 0x6000036c, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_10("HR1: A", 0x6000036d, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_11("HR1: Bb", 0x6000036e, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V1_HARM_12("HR1: B", 0x6000036f, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_1("HR2: C", 0x60000370, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_2("HR2: Db", 0x60000371, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_3("HR2: D", 0x60000372, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_4("HR2: Eb", 0x60000373, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_5("HR2: E", 0x60000374, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_6("HR2: F", 0x60000375, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_7("HR2: F#", 0x60000376, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_8("HR2: G", 0x60000377, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_9("HR2: Ab", 0x60000378, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_10("HR2: A", 0x60000379, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_11("HR2: Bb", 0x6000037a, 1, -24, 24, 0);
RangeParameter AllParams::PRM_FX2_HARMONIST_V2_HARM_12("HR2: B", 0x6000037b, 1, -24, 24, 0);
ListParameter AllParams::PRM_FX2_ACPROCESS_TYPE("Type", 0x6000037c, 1, 0, 3, 1, Strings::ACProTypes);
RangeParameter AllParams::PRM_FX2_ACPROCESS_BASS("Bass", 0x6000037d, 1, -50, 50, 0);
RangeParameter AllParams::PRM_FX2_ACPROCESS_MID("Middle", 0x6000037e, 1, -50, 50, 0);
ListParameter AllParams::PRM_FX2_ACPROCESS_MID_F("Middle Freq", 0x6000037f, 1, 0, 27, 16, Strings::HighMidFreq);
RangeParameter AllParams::PRM_FX2_ACPROCESS_TREBLE("Treble", 0x60000400, 1, -50, 50, 0);
RangeParameter AllParams::PRM_FX2_ACPROCESS_PRESENCE("Presence", 0x60000401, 1, -50, 50, 0);
Parameter AllParams::PRM_FX2_ACPROCESS_LEVEL("Level", 0x60000402, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX2_PHASER_TYPE("Type", 0x60000403, 1, 0, 3, 0, Strings::PRM_FX_PHASER_TYPE_NAMES);
Parameter AllParams::PRM_FX2_PHASER_RATE("Rate", 0x60000404, 1, 0, 100, 70);
Parameter AllParams::PRM_FX2_PHASER_DEPTH("Depth", 0x60000405, 1, 0, 100, 40);
Parameter AllParams::PRM_FX2_PHASER_MANUAL("Manual", 0x60000406, 1, 0, 100, 55);
Parameter AllParams::PRM_FX2_PHASER_RESONANCE("Resonance", 0x60000407, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_PHASER_STEPRATE("Step Rate", 0x60000408, 1, -1, 100, -1);
Parameter AllParams::PRM_FX2_PHASER_E_LEVEL("Effect Level", 0x60000409, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_PHASER_D_LEVEL("Direct Mix", 0x6000040a, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_FLANGER_RATE("Rate", 0x6000040b, 1, 0, 100, 31);
Parameter AllParams::PRM_FX2_FLANGER_DEPTH("Depth", 0x6000040c, 1, 0, 100, 40);
Parameter AllParams::PRM_FX2_FLANGER_MANUAL("Manual", 0x6000040d, 1, 0, 100, 82);
Parameter AllParams::PRM_FX2_FLANGER_RESONANCE("Resonance", 0x6000040e, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX2_FLANGER_LOWCUT("Low-Cut", 0x60000410, 1, 0, 10, 0, Strings::PRM_FLANGER_LOWCUT_NAMES);
Parameter AllParams::PRM_FX2_FLANGER_E_LEVEL("Effect Level", 0x60000411, 1, 0, 100, 60);
Parameter AllParams::PRM_FX2_FLANGER_D_LEVEL("Direct Mix", 0x60000412, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_TREMOLO_WAVESHAPE("Wave Shape", 0x60000413, 1, 0, 100, 70);
Parameter AllParams::PRM_FX2_TREMOLO_RATE("Rate", 0x60000414, 1, 0, 100, 85);
Parameter AllParams::PRM_FX2_TREMOLO_DEPTH("Depth", 0x60000415, 1, 0, 100, 65);
Parameter AllParams::PRM_FX2_TREMOLO_LEVEL("Level", 0x60000416, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_ROTARY_RATE_FAST("Rate", 0x60000419, 1, 0, 100, 85);
Parameter AllParams::PRM_FX2_ROTARY_DEPTH("Depth", 0x6000041c, 1, 0, 100, 60);
Parameter AllParams::PRM_FX2_ROTARY_LEVEL("Level", 0x6000041d, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_UNI_V_RATE("Rate", 0x6000041e, 1, 0, 100, 70);
Parameter AllParams::PRM_FX2_UNI_V_DEPTH("Depth", 0x6000041f, 1, 0, 100, 60);
Parameter AllParams::PRM_FX2_UNI_V_LEVEL("Level", 0x60000420, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_SLICER_PATTERN("Pattern", 0x60000421, 1, 0, 19, 0);
Parameter AllParams::PRM_FX2_SLICER_RATE("Rate", 0x60000422, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_SLICER_TRIGSENS("Trigger Sens", 0x60000423, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_SLICER_EFFECT_LEVEL("Effect Level", 0x60000424, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_SLICER_DIRECT_LEVEL("Direct Mix", 0x60000425, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_VIBRATO_RATE("Rate", 0x60000426, 1, 0, 100, 80);
Parameter AllParams::PRM_FX2_VIBRATO_DEPTH("Depth", 0x60000427, 1, 0, 100, 45);
Parameter AllParams::PRM_FX2_VIBRATO_LEVEL("Level", 0x6000042a, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX2_RINGMOD_MODE("Mode", 0x6000042b, 1, 0, 1, 0, Strings::Normal_Intelligent);
Parameter AllParams::PRM_FX2_RINGMOD_FREQ("Frequency", 0x6000042c, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_RINGMOD_E_LEVEL("Effect Level", 0x6000042d, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_RINGMOD_D_LEVEL("Direct Mix", 0x6000042e, 1, 0, 100, 100);
ListParameter AllParams::PRM_FX2_HUMANIZER_MODE("Mode", 0x6000042f, 1, 0, 1, 1, Strings::HumanizerType);
ListParameter AllParams::PRM_FX2_HUMANIZER_VOWEL1("Vowel 1", 0x60000430, 1, 0, 4, 0, Strings::Vowels);
ListParameter AllParams::PRM_FX2_HUMANIZER_VOWEL2("Vowel 2", 0x60000431, 1, 0, 4, 2, Strings::Vowels);
Parameter AllParams::PRM_FX2_HUMANIZER_SENS("Sensitivity", 0x60000432, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_HUMANIZER_RATE("Rate", 0x60000433, 1, 0, 100, 80);
Parameter AllParams::PRM_FX2_HUMANIZER_DEPTH("Depth", 0x60000434, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_HUMANIZER_MANUAL("Manual", 0x60000435, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_HUMANIZER_LEVEL("Level", 0x60000436, 1, 0, 100, 100);
ListParameter AllParams::PRM_FX2_2x2CHORUS_XOVERF("X-Over Frequency", 0x60000437, 1, 0, 16, 4, Strings::PRM_FX_CHORUS_XOVER_NAMES);
Parameter AllParams::PRM_FX2_2x2CHORUS_LOW_RATE("Low Rate", 0x60000438, 1, 0, 100, 43);
Parameter AllParams::PRM_FX2_2x2CHORUS_LOW_DEPTH("Low Depth", 0x60000439, 1, 0, 100, 46);
Parameter AllParams::PRM_FX2_2x2CHORUS_LOW_PREDELAY("Low Pre-Delay", 0x6000043a, 1, 0, 80, 3);
Parameter AllParams::PRM_FX2_2x2CHORUS_LOW_LEVEL("Low Level", 0x6000043b, 1, 0, 100, 75);
Parameter AllParams::PRM_FX2_2x2CHORUS_HIGH_RATE("High Rate", 0x6000043c, 1, 0, 100, 33);
Parameter AllParams::PRM_FX2_2x2CHORUS_HIGH_DEPTH("High Depth", 0x6000043d, 1, 0, 100, 48);
Parameter AllParams::PRM_FX2_2x2CHORUS_HIGH_PREDELAY("High Pre-Delay", 0x6000043e, 1, 0, 80, 3);
Parameter AllParams::PRM_FX2_2x2CHORUS_HIGH_LEVEL("High Level", 0x6000043f, 1, 0, 100, 65);
Parameter AllParams::PRM_FX2_2x2CHORUS_DIRECT_LEVEL("Direct Mix", 0x60000440, 1, 0, 100, 80);
RangeParameter AllParams::PRM_FX2_ACSIM_TOP("High", 0x60000441, 1, -50, 50, 0);
Parameter AllParams::PRM_FX2_ACSIM_BODY("Body", 0x60000442, 1, 0, 100, 50);
RangeParameter AllParams::PRM_FX2_ACSIM_LOW("Low", 0x60000443, 1, -50, 50, 0);
RangeParameter AllParams::PRM_FX2_ACSIM_HIGH("High", 0x60000444, 1, -50, 50, 0);
Parameter AllParams::PRM_FX2_ACSIM_LEVEL("Level", 0x60000445, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX2_EVH_PHASER_SCRIPT("Script", 0x60000446, 1, 0, 1, 1, Strings::toggleNames);
Parameter AllParams::PRM_FX2_EVH_PHASER_SPEED("Speed", 0x60000447, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_EVH_FLANGER_MANUAL("Manual", 0x60000448, 1, 0, 100, 45);
Parameter AllParams::PRM_FX2_EVH_FLANGER_WIDTH("Width", 0x60000449, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_EVH_FLANGER_SPEED("Speed", 0x6000044a, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_EVH_FLANGER_REGEN("Regeneration", 0x6000044b, 1, 0, 100, 80);
Parameter AllParams::PRM_FX2_EVH_WAH_PEDAL_POS("Pedal Pos", 0x6000044c, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_EVH_WAH_PEDAL_MIN("Pedal Min", 0x6000044d, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_EVH_WAH_PEDAL_MAX("Pedal Max", 0x6000044e, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_EVH_WAH_EFFECT_LEVEL("Effect Level", 0x6000044f, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_EVH_WAH_DIRECT_MIX("Direct Mix", 0x60000450, 1, 0, 100, 0);
ListParameter AllParams::PRM_FX2_DC30_SELECTOR("Selector", 0x60000451, 1, 0, 1, 0, Strings::DC30Type);
Parameter AllParams::PRM_FX2_DC30_INPUT_VOLUME("Input Volume", 0x60000452, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_DC30_CHORUS_INTENSITY("Chorus Intensity", 0x60000453, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_DC30_ECHO_REPEAT_RATE("Echo Repeat Rate", 0x60000454, 2, 40, 600, 400);
Parameter AllParams::PRM_FX2_DC30_ECHO_INTENSITY("Echo Intensity", 0x60000456, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_DC30_ECHO_VOLUME("Echo Volume", 0x60000457, 1, 0, 100, 100);
Parameter AllParams::PRM_FX2_DC30_TONE("Tone", 0x60000458, 1, 0, 100, 50);
ListParameter AllParams::PRM_FX2_DC30_OUTPUT("Output", 0x60000459, 1, 0, 1, 0, Strings::DC30Output);
Parameter AllParams::PRM_FX2_HEAVY_OCTAVE_1OCT_LEVEL("1 Oct Level", 0x6000045a, 1, 0, 100, 50);
Parameter AllParams::PRM_FX2_HEAVY_OCTAVE_2OCT_LEVEL("2 Oct Level", 0x6000045b, 1, 0, 100, 0);
Parameter AllParams::PRM_FX2_HEAVY_OCTAVE_DIRECT_LEVEL("Direct Mix", 0x6000045c, 1, 0, 100, 100);
ListParameter AllParams::PRM_DLY_SW("Delay Switch", 0x60000500, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_DLY_TYPE("Delay Type", 0x60000501, 1, 0, 10, 0, Strings::delayTypeNames);
Parameter AllParams::PRM_DLY_COMMON_DLY_TIME("Delay Time", 0x60000502, 2, 1, 2000, 1000);
Parameter AllParams::PRM_DLY_COMMON_FEEDBACK("Feedback", 0x60000504, 1, 0, 100, 22);
ListParameter AllParams::PRM_DLY_COMMON_HICUT("High-Cut", 0x60000505, 1, 0, 14, 10, Strings::PRM_REVERB_HIGHCUT_NAMES);
Parameter AllParams::PRM_DLY_COMMON_EFFECT_LEVEL("Effect Level", 0x60000506, 1, 0, 120, 50);
Parameter AllParams::PRM_DLY_COMMON_DIRECT_LEVEL("Direct Mix", 0x60000507, 1, 0, 100, 100);
Parameter AllParams::PRM_DLY_PAN_TAPTIME("Tap Time", 0x60000508, 1, 0, 100, 50);
Parameter AllParams::PRM_DLY_MOD_RATE("Mod Rate", 0x60000513, 1, 0, 100, 40);
Parameter AllParams::PRM_DLY_MOD_DEPTH("Mod Depth", 0x60000514, 1, 0, 100, 55);
Parameter AllParams::PRM_DLY_VINTAGE_LPF("Range", 0x60000515, 1, 0, 1, 1);
Parameter AllParams::PRM_DLY_VINTAGE_FILTER("Filter", 0x60000516, 1, 0, 1, 0);
ListParameter AllParams::PRM_DLY_VINTAGE_FEEDBACK_PHASE("Feedback Phase", 0x60000517, 1, 0, 1, 0, Strings::NormalInverse);
ListParameter AllParams::PRM_DLY_VINTAGE_EFFECT_PHASE("Delay Phase", 0x60000518, 1, 0, 1, 0, Strings::NormalInverse);
ListParameter AllParams::PRM_DLY_VINTAGE_MOD_SW("Mod Switch", 0x60000519, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_DLY2_SW("Delay 2 Switch", 0x60000520, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_DLY2_TYPE("Delay 2 Type", 0x60000521, 1, 0, 10, 0, Strings::delayTypeNames);
Parameter AllParams::PRM_DLY2_COMMON_DLY_TIME("Delay Time", 0x60000522, 2, 1, 2000, 400);
Parameter AllParams::PRM_DLY2_COMMON_FEEDBACK("Feedback", 0x60000524, 1, 0, 100, 22);
ListParameter AllParams::PRM_DLY2_COMMON_HICUT("High-Cut", 0x60000525, 1, 0, 14, 10, Strings::PRM_REVERB_HIGHCUT_NAMES);
Parameter AllParams::PRM_DLY2_COMMON_EFFECT_LEVEL("Effect Level", 0x60000526, 1, 0, 120, 50);
Parameter AllParams::PRM_DLY2_COMMON_DIRECT_LEVEL("Direct Mix", 0x60000527, 1, 0, 100, 100);
Parameter AllParams::PRM_DLY2_PAN_TAPTIME("Tap Time", 0x60000528, 1, 0, 100, 50);
Parameter AllParams::PRM_DLY2_MOD_RATE("Mod Rate", 0x60000533, 1, 0, 100, 40);
Parameter AllParams::PRM_DLY2_MOD_DEPTH("Mod Depth", 0x60000534, 1, 0, 100, 55);
ListParameter AllParams::PRM_DLY2_VINTAGE_LPF("Range", 0x60000535, 1, 0, 1, 1, Strings::SDE_Range);
Parameter AllParams::PRM_DLY2_VINTAGE_FILTER("Filter", 0x60000536, 1, 0, 1, 0);
ListParameter AllParams::PRM_DLY2_VINTAGE_FEEDBACK_PHASE("Feedback Phase", 0x60000537, 1, 0, 1, 0, Strings::NormalInverse);
ListParameter AllParams::PRM_DLY2_VINTAGE_EFFECT_PHASE("Delay Phase", 0x60000538, 1, 0, 1, 0, Strings::NormalInverse);
ListParameter AllParams::PRM_DLY2_VINTAGE_MOD_SW("Mod Switch", 0x60000539, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_REVERB_SW("Reverb Switch", 0x60000540, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_REVERB_TYPE("Reverb Type", 0x60000541, 1, 0, 6, 4, Strings::reverbTypeNames);
Parameter AllParams::PRM_REVERB_TIME("Time", 0x60000542, 1, 1, 100, 30);
Parameter AllParams::PRM_REVERB_PREDELAY("Pre-Delay", 0x60000543, 2, 0, 500, 10);
ListParameter AllParams::PRM_REVERB_LOWCUT("Low-Cut", 0x60000545, 1, 0, 17, 14, Strings::PRM_REVERB_LOWCUT_NAMES);
ListParameter AllParams::PRM_REVERB_HICUT("High-Cut", 0x60000546, 1, 0, 14, 8, Strings::PRM_REVERB_HIGHCUT_NAMES);
Parameter AllParams::PRM_REVERB_DENSITY("Density", 0x60000547, 1, 0, 10, 8);
Parameter AllParams::PRM_REVERB_EFFECT_LEVEL("Effect Level", 0x60000548, 1, 0, 100, 35);
Parameter AllParams::PRM_REVERB_DIRECT_LEVEL("Direct Mix", 0x60000549, 1, 0, 100, 100);
Parameter AllParams::PRM_REVERB_SPRING_COLOR("Spring Colour", 0x6000054b, 1, 0, 100, 50);
ListParameter AllParams::PRM_PEDAL_FX_SW("Pedal Switch", 0x60000550, 1, 0, 1, 0, Strings::toggleNames);
ListParameter AllParams::PRM_PEDAL_FX_TYPE("Pedal Type", 0x60000551, 1, 0, 2, 0, Strings::WahFxTypes);
ListParameter AllParams::PRM_PEDAL_FX_WAH_TYPE("Pedal Wah Type", 0x60000552, 1, 0, 5, 0, Strings::PedalWahTypes);
Parameter AllParams::PRM_PEDAL_FX_WAH_PEDAL_POSITION("Pedal Pos", 0x60000553, 1, 0, 100, 100);
Parameter AllParams::PRM_PEDAL_FX_WAH_PEDAL_MIN("Pedal Min", 0x60000554, 1, 0, 100, 0);
Parameter AllParams::PRM_PEDAL_FX_WAH_PEDAL_MAX("Pedal Max", 0x60000555, 1, 0, 100, 100);
Parameter AllParams::PRM_PEDAL_FX_WAH_EFFECT_LEVEL("Effect Level", 0x60000556, 1, 0, 100, 100);
Parameter AllParams::PRM_PEDAL_FX_WAH_DIRECT_MIX("Direct Mix", 0x60000557, 1, 0, 100, 0);
RangeParameter AllParams::PRM_PEDAL_FX_PEDAL_BEND_PITCH_MAX("Pitch", 0x60000558, 1, -24, 24, 12);
Parameter AllParams::PRM_PEDAL_FX_PEDAL_BEND_PEDAL_POS("Pedal Pos", 0x60000559, 1, 0, 100, 50);
Parameter AllParams::PRM_PEDAL_FX_PEDAL_BEND_EFFECT_LEVEL("Effect Level", 0x6000055a, 1, 0, 100, 100);
Parameter AllParams::PRM_PEDAL_FX_PEDAL_BEND_DIRECT_MIX("Direct Mix", 0x6000055b, 1, 0, 100, 0);
Parameter AllParams::PRM_PEDAL_FX_EVH95_POS("Pedal Pos", 0x6000055c, 1, 0, 100, 100);
Parameter AllParams::PRM_PEDAL_FX_EVH95_MIN("Pedal Min", 0x6000055d, 1, 0, 100, 0);
Parameter AllParams::PRM_PEDAL_FX_EVH95_MAX("Pedal Max", 0x6000055e, 1, 0, 100, 100);
Parameter AllParams::PRM_PEDAL_FX_EVH95_E_LEVEL("Effect Level", 0x6000055f, 1, 0, 100, 100);
Parameter AllParams::PRM_PEDAL_FX_EVH95_D_LEVEL("Direct Mix", 0x60000560, 1, 0, 100, 0);
Parameter AllParams::PRM_FOOT_VOLUME_VOL_LEVEL("Foot Volume", 0x60000561, 1, 0, 100, 100);
ListParameter AllParams::PRM_SEND_RETURN_SW("Switch", 0x60000562, 1, 0, 1, 1, Strings::toggleNames);
ListParameter AllParams::PRM_SEND_RETURN_MODE("Mode", 0x60000563, 1, 0, 1, 0, Strings::seriesParallel);
Parameter AllParams::PRM_SEND_RETURN_SEND_LEVEL("Send Level", 0x60000564, 1, 0, 100, 50);
Parameter AllParams::PRM_SEND_RETURN_RETURN_LEVEL("Return Level", 0x60000565, 1, 0, 100, 50);
ListParameter AllParams::PRM_NS1_SW("N.Supp Switch", 0x60000566, 1, 0, 1, 0, Strings::toggleNames);
Parameter AllParams::PRM_NS1_THRESHOLD("N.Supp Threshold", 0x60000567, 1, 0, 100, 5);
Parameter AllParams::PRM_NS1_RELEASE("N.Supp Release", 0x60000568, 1, 0, 100, 50);
ListParameter AllParams::PRM_MASTER_KEY("Master Key", 0x60000571, 1, 0, 11, 0, Strings::MasterKey);
ListParameter AllParams::PRM_CHAIN_PTN("Chain Position", 0x60000620, 1, 0, 3, 1, Strings::chainOrders);
ListParameter AllParams::PRM_POSITION_SEND_RETURN("Position", 0x60000621, 1, 0, 1, 0, Strings::PostAmpPostRev);
ListParameter AllParams::PRM_POSITION_EQ("Position", 0x60000622, 1, 0, 1, 1, Strings::AmpInOut);
ListParameter AllParams::PRM_POSITION_PEDAL_FX("Position", 0x60000623, 1, 0, 1, 0, Strings::InputPostAmp);
Parameter AllParams::PRM_FXBOX_ASGN_BOOSTER_G("Booster GRN", 0x60000624, 1, 0, 22, 10);
Parameter AllParams::PRM_FXBOX_ASGN_BOOSTER_R("Booster RED", 0x60000625, 1, 0, 22, 11);
Parameter AllParams::PRM_FXBOX_ASGN_BOOSTER_Y("Booster YLW", 0x60000626, 1, 0, 22, 14);
Parameter AllParams::PRM_FXBOX_ASGN_MOD_G("Mod GRN", 0x60000627, 1, 0, 39, 29);
Parameter AllParams::PRM_FXBOX_ASGN_MOD_R("Mod RED", 0x60000628, 1, 0, 39, 20);
Parameter AllParams::PRM_FXBOX_ASGN_MOD_Y("Mod YLW", 0x60000629, 1, 0, 39, 19);
Parameter AllParams::PRM_FXBOX_ASGN_FX_G("Fx GRN", 0x6000062a, 1, 0, 39, 21);
Parameter AllParams::PRM_FXBOX_ASGN_FX_R("Fx RED", 0x6000062b, 1, 0, 39, 0);
Parameter AllParams::PRM_FXBOX_ASGN_FX_Y("Fx YLW", 0x6000062c, 1, 0, 39, 14);
Parameter AllParams::PRM_FXBOX_ASGN_DELAY_G("Delay GRN", 0x6000062d, 1, 0, 10, 0);
Parameter AllParams::PRM_FXBOX_ASGN_DELAY_R("Delay RED", 0x6000062e, 1, 0, 10, 7);
Parameter AllParams::PRM_FXBOX_ASGN_DELAY_Y("Delay YLW", 0x6000062f, 1, 0, 10, 8);
Parameter AllParams::PRM_FXBOX_ASGN_REVERB_G("Reverb GRN", 0x60000630, 1, 0, 6, 4);
Parameter AllParams::PRM_FXBOX_ASGN_REVERB_R("Reverb RED", 0x60000631, 1, 0, 6, 5);
Parameter AllParams::PRM_FXBOX_ASGN_REVERB_Y("Reverb YLW", 0x60000632, 1, 0, 6, 3);
Parameter AllParams::PRM_FXBOX_ASGN_DELAY2_G("Delay2 GRN", 0x60000633, 1, 0, 10, 0);
Parameter AllParams::PRM_FXBOX_ASGN_DELAY2_R("Delay2 RED", 0x60000634, 1, 0, 10, 7);
Parameter AllParams::PRM_FXBOX_ASGN_DELAY2_Y("Delay2 YLW", 0x60000635, 1, 0, 10, 8);
Parameter AllParams::PRM_FXBOX_DLYREV_LAYER_G("Layer Mode GRN", 0x60000636, 1, 0, 2, 2);
Parameter AllParams::PRM_FXBOX_DLYREV_LAYER_R("Layer Mode RED", 0x60000637, 1, 0, 2, 2);
Parameter AllParams::PRM_FXBOX_DLYREV_LAYER_Y("Layer Mode YLW", 0x60000638, 1, 0, 2, 2);
ListParameter AllParams::PRM_FXBOX_SEL_BOOST("Boost Colour", 0x60000639, 1, 0, 2, 0, Strings::colourNames);
ListParameter AllParams::PRM_FXBOX_SEL_MOD("Mod Colour", 0x6000063a, 1, 0, 2, 0, Strings::colourNames);
ListParameter AllParams::PRM_FXBOX_SEL_FX("Fx Colour", 0x6000063b, 1, 0, 2, 0, Strings::colourNames);
ListParameter AllParams::PRM_FXBOX_SEL_DELAY("Delay Colour", 0x6000063c, 1, 0, 2, 0, Strings::colourNames);
ListParameter AllParams::PRM_FXBOX_SEL_REVERB("Reverb Colour", 0x6000063d, 1, 0, 2, 0, Strings::colourNames);
Parameter AllParams::PRM_PEDAL_FUNCTION_EXP_PEDAL("EXP PEDAL Func", 0x6000063e, 1, 0, 9, 2);
Parameter AllParams::PRM_PEDAL_FUNCTION_GAFC_EXP1("GAFC EXP1 Func", 0x6000063f, 1, 0, 9, 0);
Parameter AllParams::PRM_PEDAL_FUNCTION_GAFC_EXP2("GAFC EXP2 Func", 0x60000640, 1, 0, 9, 2);
Parameter AllParams::PRM_FS_FUNCTION_GAFC_FS1("GAFC FS1 Func", 0x60000641, 1, 0, 8, 0);
Parameter AllParams::PRM_FS_FUNCTION_GAFC_FS2("GAFC FS2 Func", 0x60000642, 1, 0, 8, 4);
ListParameter AllParams::PRM_CABINET_RESONANCE("Cab Resonance", 0x60000643, 1, 0, 2, 1, Strings::cabTypeNames);
ListParameter AllParams::PRM_KNOB_POS_TYPE("Amp Type", 0x60000650, 1, 0, 4, 1, Strings::ampTypePanelNames);
Parameter AllParams::PRM_KNOB_POS_GAIN("Gain", 0x60000651, 1, 0, 100, 50);
Parameter AllParams::PRM_KNOB_POS_VOLUME("Volume", 0x60000652, 1, 0, 100, 50);
Parameter AllParams::PRM_KNOB_POS_BASS("Bass", 0x60000653, 1, 0, 100, 50);
Parameter AllParams::PRM_KNOB_POS_MIDDLE("Middle", 0x60000654, 1, 0, 100, 50);
Parameter AllParams::PRM_KNOB_POS_TREBLE("Treble", 0x60000655, 1, 0, 100, 50);
Parameter AllParams::PRM_KNOB_POS_PRESENCE("Presence", 0x60000656, 1, 0, 100, 50);
Parameter AllParams::PRM_KNOB_POS_BOOST("Boost Level", 0x60000657, 1, -1, 100, -1);
Parameter AllParams::PRM_KNOB_POS_MOD("Mod Level", 0x60000658, 1, -1, 100, -1);
Parameter AllParams::PRM_KNOB_POS_FX("Fx Level", 0x60000659, 1, -1, 100, -1);
Parameter AllParams::PRM_KNOB_POS_DELAY("Delay Level", 0x6000065a, 1, -1, 100, -1);
Parameter AllParams::PRM_KNOB_POS_REVERB("Reverb Level", 0x6000065b, 1, -1, 100, -1);
ListParameter AllParams::PRM_LED_STATE_VARI("Amp Variation", 0x6000065c, 1, 0, 1, 0, Strings::toggleNames);
Parameter AllParams::PRM_LED_STATE_BOOST("Boost LED State", 0x6000065d, 1, 0, 3, 0);
Parameter AllParams::PRM_LED_STATE_MOD("Mod LED State", 0x6000065e, 1, 0, 3, 0);
Parameter AllParams::PRM_LED_STATE_FX("Fx LED State", 0x6000065f, 1, 0, 3, 0);
Parameter AllParams::PRM_LED_STATE_DELAY("Delay LED State", 0x60000660, 1, 0, 3, 0);
Parameter AllParams::PRM_LED_STATE_REVERB("Reverb LED State", 0x60000661, 1, 0, 3, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_BOOSTER("Boost", 0x60000700, 1, 0, 7, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_DELAY("Delay", 0x60000701, 1, 0, 8, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_REVERB("Reverb", 0x60000702, 1, 0, 7, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_CHORUS("Chorus", 0x60000703, 1, 0, 10, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_FLANGER("Flanger", 0x60000704, 1, 0, 7, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_PHASER("Phaser", 0x60000705, 1, 0, 7, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_UNI_V("Uni-V", 0x60000706, 1, 0, 3, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_TREMOLO("Tremolo", 0x60000707, 1, 0, 4, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_VIBRATO("Vibrato", 0x60000708, 1, 0, 3, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_ROTARY("Rotary", 0x60000709, 1, 0, 3, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_RING_MOD("Ring-Mod", 0x6000070a, 1, 0, 3, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_SLOW_GEAR("Slow Gear", 0x6000070b, 1, 0, 3, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_SLICER("Slicer", 0x6000070c, 1, 0, 4, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_COMP("Comp", 0x6000070d, 1, 0, 4, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_LIMITER("Limiter", 0x6000070e, 1, 0, 5, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_T_WAH("T.Wah", 0x6000070f, 1, 0, 5, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_AUTO_WAH("Auto Wah", 0x60000710, 1, 0, 6, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_PEDAL_WAH("Pedal Wah", 0x60000711, 1, 0, 5, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_GEQ("Graphic EQ", 0x60000712, 1, 0, 11, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_PEQ("Parametric EQ", 0x60000713, 1, 0, 11, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_GUITAR_SIM("Guitar Sim", 0x60000714, 1, 0, 4, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_AC_GUITAR_SIM("Ac.Guitar Sim", 0x60000715, 1, 0, 4, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_AC_PROCESSOR("Ac. Processor", 0x60000716, 1, 0, 6, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_WAVE_SYNTH("Wave Synth", 0x60000717, 1, 0, 7, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_OCTAVE("Octave", 0x60000718, 1, 0, 2, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_PITCH_SHIFTER("Pitch Shifter", 0x60000719, 1, 0, 10, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_HARMONIST("Harmonizer", 0x6000071a, 1, 0, 9, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_HUMANIZER("Humanizer", 0x6000071b, 1, 0, 5, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_EVH_PHASER("Phase 90E", 0x6000071c, 1, 0, 1, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_EVH_FLANGER("Flanger 117E", 0x6000071d, 1, 0, 4, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_EVH_WAH("Wah 95E", 0x6000071e, 1, 0, 5, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_DC30("DC-30", 0x6000071f, 1, 0, 6, 0);
Parameter AllParams::PRM_KNOB_ASSIGN_HEAVY_OCT("Heavy Octave", 0x60000720, 1, 0, 3, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_BOOSTER_MIN("Booster Min", 0x60000830, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_BOOSTER_MAX("Booster Max", 0x60000831, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_DELAY_MIN("Delay Min", 0x60000832, 2, 0, 2000, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_DELAY_MAX("Delay Max", 0x60000834, 2, 0, 2000, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_REVERB_MIN("Reverb Min", 0x60000836, 2, 0, 500, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_REVERB_MAX("Reverb Max", 0x60000838, 2, 0, 500, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_CHORUS_MIN("Chorus Min", 0x6000083a, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_CHORUS_MAX("Chorus Max", 0x6000083b, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_FLANGER_MIN("Flanger Min", 0x6000083c, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_FLANGER_MAX("Flanger Max", 0x6000083d, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_PHASER_MIN("Phaser Min", 0x6000083e, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_PHASER_MAX("Phaser Max", 0x6000083f, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_UNI_V_MIN("Uni-V Min", 0x60000840, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_UNI_V_MAX("Uni-V Max", 0x60000841, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_TREMOLO_MIN("Tremolo Min", 0x60000842, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_TREMOLO_MAX("Tremolo Max", 0x60000843, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_VIBRATO_MIN("Vibrato Min", 0x60000844, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_VIBRATO_MAX("Vibrato Max", 0x60000845, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_ROTARY_MIN("Rotary Min", 0x60000846, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_ROTARY_MAX("Rotary Max", 0x60000847, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_RING_MOD_MIN("Ring-Mod Min", 0x60000848, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_RING_MOD_MAX("Ring-Mod Max", 0x60000849, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_SLOW_GEAR_MIN("Slow Gear Min", 0x6000084a, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_SLOW_GEAR_MAX("Slow Gear Max", 0x6000084b, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_SLICER_MIN("Slicer Min", 0x6000084c, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_SLICER_MAX("Slicer Max", 0x6000084d, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_COMP_MIN("Compressor Min", 0x6000084e, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_COMP_MAX("Compressor Max", 0x6000084f, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_LIMITER_MIN("Limiter Min", 0x60000850, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_LIMITER_MAX("Limiter Max", 0x60000851, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_T_WAH_MIN("T.Wah Min", 0x60000852, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_T_WAH_MAX("T.Wah Max", 0x60000853, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_AUTO_WAH_MIN("Auto Wah Min", 0x60000854, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_AUTO_WAH_MAX("Auto Wah Max", 0x60000855, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_PEDAL_WAH_MIN("Pedal Wah Min", 0x60000856, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_PEDAL_WAH_MAX("Pedal Wah Max", 0x60000857, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_GEQ_MIN("Graphic EQ Min", 0x60000858, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_GEQ_MAX("Graphic EQ Max", 0x60000859, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_PEQ_MIN("Parametric EQ Min", 0x6000085a, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_PEQ_MAX("Parametric EQ Max", 0x6000085b, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_GUITAR_SIM_MIN("Guitar Sim Min", 0x6000085c, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_GUITAR_SIM_MAX("Guitar Sim Max", 0x6000085d, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_AC_GUITAR_SIM_MIN("Ac.Guitar Sim Min", 0x6000085e, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_AC_GUITAR_SIM_MAX("Ac.Guitar Sim Max", 0x6000085f, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_AC_PROCESSOR_MIN("Ac.Processor Min", 0x60000860, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_AC_PROCESSOR_MAX("Ac.Processor Max", 0x60000861, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_WAVE_SYNTH_MIN("Wave Synth Min", 0x60000862, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_WAVE_SYNTH_MAX("Wave Synth Max", 0x60000863, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_OCTAVE_MIN("Octave Min", 0x60000864, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_OCTAVE_MAX("Octave Max", 0x60000865, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_PITCH_SHIFTER_MIN("Pitch Shifter Min", 0x60000866, 2, 0, 300, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_PITCH_SHIFTER_MAX("Pitch Shifter Max", 0x60000868, 2, 0, 300, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_HARMONIST_MIN("Harmonist Min", 0x6000086a, 2, 0, 300, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_HARMONIST_MAX("Harmonist Max", 0x6000086c, 2, 0, 300, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_HUMANIZER_MIN("Humanizer Min", 0x6000086e, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_HUMANIZER_MAX("Humanizer Max", 0x6000086f, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_EVH_PHASER_MIN("Phaser 90E Min", 0x60000870, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_EVH_PHASER_MAX("Phaser 90E Max", 0x60000871, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_EVH_FLANGER_MIN("Flanger 117E Min", 0x60000872, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_EVH_FLANGER_MAX("Flanger 117E Max", 0x60000873, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_EVH_WAH_MIN("Wah 95E Min", 0x60000874, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_EVH_WAH_MAX("Wah 95E Max", 0x60000875, 1, 0, 127, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_DC30_MIN("DC-30 Min", 0x60000876, 2, 0, 600, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_DC30_MAX("DC-30 Max", 0x60000878, 2, 0, 600, 100);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_HEAVY_OCT_MIN("Heavy Octave Min", 0x6000087a, 1, 0, 127, 0);
Parameter AllParams::PRM_EXP_PEDAL_ASSIGN_HEAVY_OCT_MAX("Heavy Octave Max", 0x6000087b, 1, 0, 127, 100);
Parameter AllParams::PRM_PATCH_WRITE("Patch Write", 0x7F000104, 2, 0, 0, 0);
Parameter AllParams::PRM_PATCH_CLEAR("Patch Clear", 0x7F010003, 1, 0, 0, 0);

Parameter* AllParams::overview[] = {
  &PRM_PREAMP_A_TYPE,
  &PRM_FOOT_VOLUME_VOL_LEVEL,
  &PRM_PEDAL_FX_SW,
  &PRM_REVERB_SW,
  &PRM_FX1_SW,
  &PRM_FX2_SW,
  &PRM_DLY_SW,
  &PRM_ODDS_SW,
  &PRM_FXBOX_SEL_REVERB,
  &PRM_FXBOX_SEL_MOD,
  &PRM_FXBOX_SEL_FX,
  &PRM_FXBOX_SEL_DELAY,
  &PRM_FXBOX_SEL_BOOST,
  &PRM_DLY_COMMON_DLY_TIME,
  &PRM_KNOB_POS_REVERB,
  &PRM_KNOB_POS_MOD,
  &PRM_KNOB_POS_FX,
  &PRM_KNOB_POS_DELAY,
  &PRM_KNOB_POS_BOOST,
  &PRM_PREAMP_A_BASS,
  &PRM_PREAMP_A_MIDDLE,
  &PRM_PREAMP_A_TREBLE,
  &PRM_PREAMP_A_GAIN,
  &PRM_PREAMP_A_LEVEL,
  &PRM_PREAMP_A_TYPE,
  &PRM_CABINET_RESONANCE,
  &PRM_PREAMP_A_PRESENCE,
  &PRM_NS1_RELEASE,
  &PRM_NS1_THRESHOLD,
  &PRM_REVERB_TYPE,
  &PRM_FX1_FXTYPE,
  &PRM_FX2_FXTYPE,
  &PRM_ODDS_TYPE,
  &PRM_DLY2_TYPE
};

std::unordered_map<uint32_t, Parameter*> AllParams::list = {
  { { PRM_SYS_PATCH_SEL.getSysex() }, { &PRM_SYS_PATCH_SEL } },
  { { PRM_PREAMP_A_TYPE.getSysex() }, { &PRM_PREAMP_A_TYPE } },
  { { PRM_PEDAL_FX_SW.getSysex() }, { &PRM_PEDAL_FX_SW } },
  { { PRM_REVERB_SW.getSysex() }, { &PRM_REVERB_SW } },
  { { PRM_FX1_SW.getSysex() }, { &PRM_FX1_SW } },
  { { PRM_FX2_SW.getSysex() }, { &PRM_FX2_SW } },
  { { PRM_DLY_SW.getSysex() }, { &PRM_DLY_SW } },
  { { PRM_ODDS_SW.getSysex() }, { &PRM_ODDS_SW } },
  { { PRM_FXBOX_SEL_REVERB.getSysex() }, { &PRM_FXBOX_SEL_REVERB } },
  { { PRM_FXBOX_SEL_MOD.getSysex() }, { &PRM_FXBOX_SEL_MOD } },
  { { PRM_FXBOX_SEL_FX.getSysex() }, { &PRM_FXBOX_SEL_FX } },
  { { PRM_FXBOX_SEL_DELAY.getSysex() }, { &PRM_FXBOX_SEL_DELAY } },
  { { PRM_FXBOX_SEL_BOOST.getSysex() }, { &PRM_FXBOX_SEL_BOOST } },
  { { PRM_FOOT_VOLUME_VOL_LEVEL.getSysex() }, { &PRM_FOOT_VOLUME_VOL_LEVEL } },
  { { PRM_SYS_USB_IN_OUT_MODE.getSysex() }, { &PRM_SYS_USB_IN_OUT_MODE } },
  { { PRM_SYS_USB_INPUT_LEVEL.getSysex() }, { &PRM_SYS_USB_INPUT_LEVEL } },
  { { PRM_SYS_USB_OUT_LEV.getSysex() }, { &PRM_SYS_USB_OUT_LEV } },
  { { PRM_SYS_USB_MIX_LEV.getSysex() }, { &PRM_SYS_USB_MIX_LEV } },
  { { PRM_SYS_USB_DIR_MONITOR.getSysex() }, { &PRM_SYS_USB_DIR_MONITOR } },
  { { PRM_SYS_USB_DIR_MONITOR_CMD.getSysex() }, { &PRM_SYS_USB_DIR_MONITOR_CMD } },
  { { PRM_SYS_USB_LOOPBACK.getSysex() }, { &PRM_SYS_USB_LOOPBACK } },
  { { PRM_SYS_USB_2_OUT_LEV.getSysex() }, { &PRM_SYS_USB_2_OUT_LEV } },
  { { PRM_SYS_EQ_SW.getSysex() }, { &PRM_SYS_EQ_SW } },
  { { PRM_SYS_EQ_TYPE.getSysex() }, { &PRM_SYS_EQ_TYPE } },
  { { PRM_SYS_EQ_POSITION.getSysex() }, { &PRM_SYS_EQ_POSITION } },
  { { PRM_SYS_EQ_PEQ_LOW_CUT.getSysex() }, { &PRM_SYS_EQ_PEQ_LOW_CUT } },
  { { PRM_SYS_EQ_PEQ_LOW_GAIN.getSysex() }, { &PRM_SYS_EQ_PEQ_LOW_GAIN } },
  { { PRM_SYS_EQ_PEQ_LOWMID_FREQ.getSysex() }, { &PRM_SYS_EQ_PEQ_LOWMID_FREQ } },
  { { PRM_SYS_EQ_PEQ_LOWMID_Q.getSysex() }, { &PRM_SYS_EQ_PEQ_LOWMID_Q } },
  { { PRM_SYS_EQ_PEQ_LOWMID_GAIN.getSysex() }, { &PRM_SYS_EQ_PEQ_LOWMID_GAIN } },
  { { PRM_SYS_EQ_PEQ_HIGHMID_FREQ.getSysex() }, { &PRM_SYS_EQ_PEQ_HIGHMID_FREQ } },
  { { PRM_SYS_EQ_PEQ_HIGHMID_Q.getSysex() }, { &PRM_SYS_EQ_PEQ_HIGHMID_Q } },
  { { PRM_SYS_EQ_PEQ_HIGHMID_GAIN.getSysex() }, { &PRM_SYS_EQ_PEQ_HIGHMID_GAIN } },
  { { PRM_SYS_EQ_PEQ_HIGH_GAIN.getSysex() }, { &PRM_SYS_EQ_PEQ_HIGH_GAIN } },
  { { PRM_SYS_EQ_PEQ_HIGH_CUT.getSysex() }, { &PRM_SYS_EQ_PEQ_HIGH_CUT } },
  { { PRM_SYS_EQ_PEQ_LEVEL.getSysex() }, { &PRM_SYS_EQ_PEQ_LEVEL } },
  { { PRM_SYS_EQ_GEQ_BAND1.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND1 } },
  { { PRM_SYS_EQ_GEQ_BAND2.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND2 } },
  { { PRM_SYS_EQ_GEQ_BAND3.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND3 } },
  { { PRM_SYS_EQ_GEQ_BAND4.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND4 } },
  { { PRM_SYS_EQ_GEQ_BAND5.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND5 } },
  { { PRM_SYS_EQ_GEQ_BAND6.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND6 } },
  { { PRM_SYS_EQ_GEQ_BAND7.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND7 } },
  { { PRM_SYS_EQ_GEQ_BAND8.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND8 } },
  { { PRM_SYS_EQ_GEQ_BAND9.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND9 } },
  { { PRM_SYS_EQ_GEQ_BAND10.getSysex() }, { &PRM_SYS_EQ_GEQ_BAND10 } },
  { { PRM_SYS_EQ_GEQ_LEVEL.getSysex() }, { &PRM_SYS_EQ_GEQ_LEVEL } },
  { { PRM_SYS_LINE_OUT_MODE.getSysex() }, { &PRM_SYS_LINE_OUT_MODE } },
  { { PRM_SYS_EXPAND_MODE.getSysex() }, { &PRM_SYS_EXPAND_MODE } },
  { { PRM_SYS_PWR_CAB_EQ_TYPE.getSysex() }, { &PRM_SYS_PWR_CAB_EQ_TYPE } },
  { { PRM_SYS_PWR_CAB_EQ_FREQ.getSysex() }, { &PRM_SYS_PWR_CAB_EQ_FREQ } },
  { { PRM_SYS_PWR_CAB_EQ_LEVEL.getSysex() }, { &PRM_SYS_PWR_CAB_EQ_LEVEL } },
  { { PRM_SYS_MIDI_RX_CH.getSysex() }, { &PRM_SYS_MIDI_RX_CH } },
  { { PRM_SYS_MIDI_CC_BOOST_SW.getSysex() }, { &PRM_SYS_MIDI_CC_BOOST_SW } },
  { { PRM_SYS_MIDI_CC_MOD_SW.getSysex() }, { &PRM_SYS_MIDI_CC_MOD_SW } },
  { { PRM_SYS_MIDI_CC_FX_SW.getSysex() }, { &PRM_SYS_MIDI_CC_FX_SW } },
  { { PRM_SYS_MIDI_CC_DELAY_SW.getSysex() }, { &PRM_SYS_MIDI_CC_DELAY_SW } },
  { { PRM_SYS_MIDI_CC_REVERB_SW.getSysex() }, { &PRM_SYS_MIDI_CC_REVERB_SW } },
  { { PRM_SYS_MIDI_CC_XLP_SW.getSysex() }, { &PRM_SYS_MIDI_CC_XLP_SW } },
  { { PRM_SYS_MIDI_CC_EXPPEDAL.getSysex() }, { &PRM_SYS_MIDI_CC_EXPPEDAL } },
  { { PRM_SYS_MIDI_CC_GAFCEXP1.getSysex() }, { &PRM_SYS_MIDI_CC_GAFCEXP1 } },
  { { PRM_SYS_MIDI_CC_GAFCEXP2.getSysex() }, { &PRM_SYS_MIDI_CC_GAFCEXP2 } },
  { { PRM_SYS_MIDI_CC_GAFCFS1.getSysex() }, { &PRM_SYS_MIDI_CC_GAFCFS1 } },
  { { PRM_SYS_MIDI_CC_GAFCFS2.getSysex() }, { &PRM_SYS_MIDI_CC_GAFCFS2 } },
  { { PRM_SYS_MIDI_PC_PANEL.getSysex() }, { &PRM_SYS_MIDI_PC_PANEL } },
  { { PRM_SYS_MIDI_PC_A1.getSysex() }, { &PRM_SYS_MIDI_PC_A1 } },
  { { PRM_SYS_MIDI_PC_A2.getSysex() }, { &PRM_SYS_MIDI_PC_A2 } },
  { { PRM_SYS_MIDI_PC_A3.getSysex() }, { &PRM_SYS_MIDI_PC_A3 } },
  { { PRM_SYS_MIDI_PC_A4.getSysex() }, { &PRM_SYS_MIDI_PC_A4 } },
  { { PRM_SYS_MIDI_PC_B1.getSysex() }, { &PRM_SYS_MIDI_PC_B1 } },
  { { PRM_SYS_MIDI_PC_B2.getSysex() }, { &PRM_SYS_MIDI_PC_B2 } },
  { { PRM_SYS_MIDI_PC_B3.getSysex() }, { &PRM_SYS_MIDI_PC_B3 } },
  { { PRM_SYS_MIDI_PC_B4.getSysex() }, { &PRM_SYS_MIDI_PC_B4 } },
  { { PRM_ODDS_TYPE.getSysex() }, { &PRM_ODDS_TYPE } },
  { { PRM_ODDS_DRIVE.getSysex() }, { &PRM_ODDS_DRIVE } },
  { { PRM_ODDS_BOTTOM.getSysex() }, { &PRM_ODDS_BOTTOM } },
  { { PRM_ODDS_TONE.getSysex() }, { &PRM_ODDS_TONE } },
  { { PRM_ODDS_SOLO_SW.getSysex() }, { &PRM_ODDS_SOLO_SW } },
  { { PRM_ODDS_SOLO_LEVEL.getSysex() }, { &PRM_ODDS_SOLO_LEVEL } },
  { { PRM_ODDS_EFFECT_LEVEL.getSysex() }, { &PRM_ODDS_EFFECT_LEVEL } },
  { { PRM_ODDS_DIRECT_LEVEL.getSysex() }, { &PRM_ODDS_DIRECT_LEVEL } },
  { { PRM_SNEAKY_CUSTOM_TYPE.getSysex() }, { &PRM_SNEAKY_CUSTOM_TYPE } },
  { { PRM_SNEAKY_CUSTOM_BOTTOM.getSysex() }, { &PRM_SNEAKY_CUSTOM_BOTTOM } },
  { { PRM_SNEAKY_CUSTOM_TOP.getSysex() }, { &PRM_SNEAKY_CUSTOM_TOP } },
  { { PRM_SNEAKY_CUSTOM_LOW.getSysex() }, { &PRM_SNEAKY_CUSTOM_LOW } },
  { { PRM_SNEAKY_CUSTOM_HIGH.getSysex() }, { &PRM_SNEAKY_CUSTOM_HIGH } },
  { { PRM_SNEAKY_CUSTOM_CHARACTER.getSysex() }, { &PRM_SNEAKY_CUSTOM_CHARACTER } },
  { { PRM_PREAMP_A_GAIN.getSysex() }, { &PRM_PREAMP_A_GAIN } },
  { { PRM_PREAMP_A_BASS.getSysex() }, { &PRM_PREAMP_A_BASS } },
  { { PRM_PREAMP_A_MIDDLE.getSysex() }, { &PRM_PREAMP_A_MIDDLE } },
  { { PRM_PREAMP_A_TREBLE.getSysex() }, { &PRM_PREAMP_A_TREBLE } },
  { { PRM_PREAMP_A_PRESENCE.getSysex() }, { &PRM_PREAMP_A_PRESENCE } },
  { { PRM_PREAMP_A_LEVEL.getSysex() }, { &PRM_PREAMP_A_LEVEL } },
  { { PRM_PREAMP_A_BRIGHT.getSysex() }, { &PRM_PREAMP_A_BRIGHT } },
  { { PRM_PREAMP_A_SOLO_SW.getSysex() }, { &PRM_PREAMP_A_SOLO_SW } },
  { { PRM_PREAMP_A_SOLO_LEVEL.getSysex() }, { &PRM_PREAMP_A_SOLO_LEVEL } },
  { { PRM_EQ_SW.getSysex() }, { &PRM_EQ_SW } },
  { { PRM_EQ_TYPE.getSysex() }, { &PRM_EQ_TYPE } },
  { { PRM_EQ_LOW_CUT.getSysex() }, { &PRM_EQ_LOW_CUT } },
  { { PRM_EQ_LOW_GAIN.getSysex() }, { &PRM_EQ_LOW_GAIN } },
  { { PRM_EQ_LOWMID_FREQ.getSysex() }, { &PRM_EQ_LOWMID_FREQ } },
  { { PRM_EQ_LOWMID_Q.getSysex() }, { &PRM_EQ_LOWMID_Q } },
  { { PRM_EQ_LOWMID_GAIN.getSysex() }, { &PRM_EQ_LOWMID_GAIN } },
  { { PRM_EQ_HIGHMID_FREQ.getSysex() }, { &PRM_EQ_HIGHMID_FREQ } },
  { { PRM_EQ_HIGHMID_Q.getSysex() }, { &PRM_EQ_HIGHMID_Q } },
  { { PRM_EQ_HIGHMID_GAIN.getSysex() }, { &PRM_EQ_HIGHMID_GAIN } },
  { { PRM_EQ_HIGH_GAIN.getSysex() }, { &PRM_EQ_HIGH_GAIN } },
  { { PRM_EQ_HIGH_CUT.getSysex() }, { &PRM_EQ_HIGH_CUT } },
  { { PRM_EQ_LEVEL.getSysex() }, { &PRM_EQ_LEVEL } },
  { { PRM_EQ_GEQ_BAND1.getSysex() }, { &PRM_EQ_GEQ_BAND1 } },
  { { PRM_EQ_GEQ_BAND2.getSysex() }, { &PRM_EQ_GEQ_BAND2 } },
  { { PRM_EQ_GEQ_BAND3.getSysex() }, { &PRM_EQ_GEQ_BAND3 } },
  { { PRM_EQ_GEQ_BAND4.getSysex() }, { &PRM_EQ_GEQ_BAND4 } },
  { { PRM_EQ_GEQ_BAND5.getSysex() }, { &PRM_EQ_GEQ_BAND5 } },
  { { PRM_EQ_GEQ_BAND6.getSysex() }, { &PRM_EQ_GEQ_BAND6 } },
  { { PRM_EQ_GEQ_BAND7.getSysex() }, { &PRM_EQ_GEQ_BAND7 } },
  { { PRM_EQ_GEQ_BAND8.getSysex() }, { &PRM_EQ_GEQ_BAND8 } },
  { { PRM_EQ_GEQ_BAND9.getSysex() }, { &PRM_EQ_GEQ_BAND9 } },
  { { PRM_EQ_GEQ_BAND10.getSysex() }, { &PRM_EQ_GEQ_BAND10 } },
  { { PRM_EQ_GEQ_LEVEL.getSysex() }, { &PRM_EQ_GEQ_LEVEL } },

  { { PRM_FX1_FXTYPE.getSysex() }, { &PRM_FX1_FXTYPE } },
  { { PRM_FX1_TWAH_MODE.getSysex() }, { &PRM_FX1_TWAH_MODE } },
  { { PRM_FX1_TWAH_POLARITY.getSysex() }, { &PRM_FX1_TWAH_POLARITY } },
  { { PRM_FX1_TWAH_SENS.getSysex() }, { &PRM_FX1_TWAH_SENS } },
  { { PRM_FX1_TWAH_FREQ.getSysex() }, { &PRM_FX1_TWAH_FREQ } },
  { { PRM_FX1_TWAH_PEAK.getSysex() }, { &PRM_FX1_TWAH_PEAK } },
  { { PRM_FX1_TWAH_D_LEVEL.getSysex() }, { &PRM_FX1_TWAH_D_LEVEL } },
  { { PRM_FX1_TWAH_LEVEL.getSysex() }, { &PRM_FX1_TWAH_LEVEL } },
  { { PRM_FX1_AWAH_MODE.getSysex() }, { &PRM_FX1_AWAH_MODE } },
  { { PRM_FX1_AWAH_FREQ.getSysex() }, { &PRM_FX1_AWAH_FREQ } },
  { { PRM_FX1_AWAH_PEAK.getSysex() }, { &PRM_FX1_AWAH_PEAK } },
  { { PRM_FX1_AWAH_RATE.getSysex() }, { &PRM_FX1_AWAH_RATE } },
  { { PRM_FX1_AWAH_DEPTH.getSysex() }, { &PRM_FX1_AWAH_DEPTH } },
  { { PRM_FX1_AWAH_D_LEVEL.getSysex() }, { &PRM_FX1_AWAH_D_LEVEL } },
  { { PRM_FX1_AWAH_LEVEL.getSysex() }, { &PRM_FX1_AWAH_LEVEL } },
  { { PRM_FX1_SUBWAH_TYPE.getSysex() }, { &PRM_FX1_SUBWAH_TYPE } },
  { { PRM_FX1_SUBWAH_PDLPOS.getSysex() }, { &PRM_FX1_SUBWAH_PDLPOS } },
  { { PRM_FX1_SUBWAH_MIN.getSysex() }, { &PRM_FX1_SUBWAH_MIN } },
  { { PRM_FX1_SUBWAH_MAX.getSysex() }, { &PRM_FX1_SUBWAH_MAX } },
  { { PRM_FX1_SUBWAH_E_LEVEL.getSysex() }, { &PRM_FX1_SUBWAH_E_LEVEL } },
  { { PRM_FX1_SUBWAH_D_LEVEL.getSysex() }, { &PRM_FX1_SUBWAH_D_LEVEL } },
  { { PRM_FX1_ADCOMP_TYPE.getSysex() }, { &PRM_FX1_ADCOMP_TYPE } },
  { { PRM_FX1_ADCOMP_SUSTAIN.getSysex() }, { &PRM_FX1_ADCOMP_SUSTAIN } },
  { { PRM_FX1_ADCOMP_ATTACK.getSysex() }, { &PRM_FX1_ADCOMP_ATTACK } },
  { { PRM_FX1_ADCOMP_TONE.getSysex() }, { &PRM_FX1_ADCOMP_TONE } },
  { { PRM_FX1_ADCOMP_LEVEL.getSysex() }, { &PRM_FX1_ADCOMP_LEVEL } },
  { { PRM_FX1_LIMITER_TYPE.getSysex() }, { &PRM_FX1_LIMITER_TYPE } },
  { { PRM_FX1_LIMITER_ATTACK.getSysex() }, { &PRM_FX1_LIMITER_ATTACK } },
  { { PRM_FX1_LIMITER_THRESHOLD.getSysex() }, { &PRM_FX1_LIMITER_THRESHOLD } },
  { { PRM_FX1_LIMITER_RATIO.getSysex() }, { &PRM_FX1_LIMITER_RATIO } },
  { { PRM_FX1_LIMITER_RELEASE.getSysex() }, { &PRM_FX1_LIMITER_RELEASE } },
  { { PRM_FX1_LIMITER_LEVEL.getSysex() }, { &PRM_FX1_LIMITER_LEVEL } },
  { { PRM_FX1_GEQ_BAND1.getSysex() }, { &PRM_FX1_GEQ_BAND1 } },
  { { PRM_FX1_GEQ_BAND2.getSysex() }, { &PRM_FX1_GEQ_BAND2 } },
  { { PRM_FX1_GEQ_BAND3.getSysex() }, { &PRM_FX1_GEQ_BAND3 } },
  { { PRM_FX1_GEQ_BAND4.getSysex() }, { &PRM_FX1_GEQ_BAND4 } },
  { { PRM_FX1_GEQ_BAND5.getSysex() }, { &PRM_FX1_GEQ_BAND5 } },
  { { PRM_FX1_GEQ_BAND6.getSysex() }, { &PRM_FX1_GEQ_BAND6 } },
  { { PRM_FX1_GEQ_BAND7.getSysex() }, { &PRM_FX1_GEQ_BAND7 } },
  { { PRM_FX1_GEQ_BAND8.getSysex() }, { &PRM_FX1_GEQ_BAND8 } },
  { { PRM_FX1_GEQ_BAND9.getSysex() }, { &PRM_FX1_GEQ_BAND9 } },
  { { PRM_FX1_GEQ_BAND10.getSysex() }, { &PRM_FX1_GEQ_BAND10 } },
  { { PRM_FX1_GEQ_LEVEL.getSysex() }, { &PRM_FX1_GEQ_LEVEL } },
  { { PRM_FX1_PEQ_LOW_CUT.getSysex() }, { &PRM_FX1_PEQ_LOW_CUT } },
  { { PRM_FX1_PEQ_LOW_GAIN.getSysex() }, { &PRM_FX1_PEQ_LOW_GAIN } },
  { { PRM_FX1_PEQ_LOWMID_FREQ.getSysex() }, { &PRM_FX1_PEQ_LOWMID_FREQ } },
  { { PRM_FX1_PEQ_LOWMID_Q.getSysex() }, { &PRM_FX1_PEQ_LOWMID_Q } },
  { { PRM_FX1_PEQ_LOWMID_GAIN.getSysex() }, { &PRM_FX1_PEQ_LOWMID_GAIN } },
  { { PRM_FX1_PEQ_HIGHMID_FREQ.getSysex() }, { &PRM_FX1_PEQ_HIGHMID_FREQ } },
  { { PRM_FX1_PEQ_HIGHMID_Q.getSysex() }, { &PRM_FX1_PEQ_HIGHMID_Q } },
  { { PRM_FX1_PEQ_HIGHMID_GAIN.getSysex() }, { &PRM_FX1_PEQ_HIGHMID_GAIN } },
  { { PRM_FX1_PEQ_HIGH_GAIN.getSysex() }, { &PRM_FX1_PEQ_HIGH_GAIN } },
  { { PRM_FX1_PEQ_HIGH_CUT.getSysex() }, { &PRM_FX1_PEQ_HIGH_CUT } },
  { { PRM_FX1_PEQ_LEVEL.getSysex() }, { &PRM_FX1_PEQ_LEVEL } },
  { { PRM_FX1_GTRSIM_TYPE.getSysex() }, { &PRM_FX1_GTRSIM_TYPE } },
  { { PRM_FX1_GTRSIM_LOW.getSysex() }, { &PRM_FX1_GTRSIM_LOW } },
  { { PRM_FX1_GTRSIM_HIGH.getSysex() }, { &PRM_FX1_GTRSIM_HIGH } },
  { { PRM_FX1_GTRSIM_LEVEL.getSysex() }, { &PRM_FX1_GTRSIM_LEVEL } },
  { { PRM_FX1_GTRSIM_BODY.getSysex() }, { &PRM_FX1_GTRSIM_BODY } },
  { { PRM_FX1_SLOWGEAR_SENS.getSysex() }, { &PRM_FX1_SLOWGEAR_SENS } },
  { { PRM_FX1_SLOWGEAR_RISETIME.getSysex() }, { &PRM_FX1_SLOWGEAR_RISETIME } },
  { { PRM_FX1_SLOWGEAR_LEVEL.getSysex() }, { &PRM_FX1_SLOWGEAR_LEVEL } },
  { { PRM_FX1_WAVESYN_WAVE.getSysex() }, { &PRM_FX1_WAVESYN_WAVE } },
  { { PRM_FX1_WAVESYN_CUTOFF.getSysex() }, { &PRM_FX1_WAVESYN_CUTOFF } },
  { { PRM_FX1_WAVESYN_RESONANCE.getSysex() }, { &PRM_FX1_WAVESYN_RESONANCE } },
  { { PRM_FX1_WAVESYN_FLT_SENS.getSysex() }, { &PRM_FX1_WAVESYN_FLT_SENS } },
  { { PRM_FX1_WAVESYN_FLT_DECAY.getSysex() }, { &PRM_FX1_WAVESYN_FLT_DECAY } },
  { { PRM_FX1_WAVESYN_FLT_DEPTH.getSysex() }, { &PRM_FX1_WAVESYN_FLT_DEPTH } },
  { { PRM_FX1_WAVESYN_SYN_LEVEL.getSysex() }, { &PRM_FX1_WAVESYN_SYN_LEVEL } },
  { { PRM_FX1_WAVESYN_D_LEVEL.getSysex() }, { &PRM_FX1_WAVESYN_D_LEVEL } },
  { { PRM_FX1_OCTAVE_RANGE.getSysex() }, { &PRM_FX1_OCTAVE_RANGE } },
  { { PRM_FX1_OCTAVE_LEVEL.getSysex() }, { &PRM_FX1_OCTAVE_LEVEL } },
  { { PRM_FX1_OCTAVE_D_LEVEL.getSysex() }, { &PRM_FX1_OCTAVE_D_LEVEL } },
  { { PRM_FX1_PITCHSHIFT_VOICE.getSysex() }, { &PRM_FX1_PITCHSHIFT_VOICE } },
  { { PRM_FX1_PITCHSHIFT_MODE1.getSysex() }, { &PRM_FX1_PITCHSHIFT_MODE1 } },
  { { PRM_FX1_PITCHSHIFT_PITCH1.getSysex() }, { &PRM_FX1_PITCHSHIFT_PITCH1 } },
  { { PRM_FX1_PITCHSHIFT_FINE1.getSysex() }, { &PRM_FX1_PITCHSHIFT_FINE1 } },
  { { PRM_FX1_PITCHSHIFT_PREDELAY1.getSysex() }, { &PRM_FX1_PITCHSHIFT_PREDELAY1 } },
  { { PRM_FX1_PITCHSHIFT_LEVEL1.getSysex() }, { &PRM_FX1_PITCHSHIFT_LEVEL1 } },
  { { PRM_FX1_PITCHSHIFT_MODE2.getSysex() }, { &PRM_FX1_PITCHSHIFT_MODE2 } },
  { { PRM_FX1_PITCHSHIFT_PITCH2.getSysex() }, { &PRM_FX1_PITCHSHIFT_PITCH2 } },
  { { PRM_FX1_PITCHSHIFT_FINE2.getSysex() }, { &PRM_FX1_PITCHSHIFT_FINE2 } },
  { { PRM_FX1_PITCHSHIFT_PREDELAY2.getSysex() }, { &PRM_FX1_PITCHSHIFT_PREDELAY2 } },
  { { PRM_FX1_PITCHSHIFT_LEVEL2.getSysex() }, { &PRM_FX1_PITCHSHIFT_LEVEL2 } },
  { { PRM_FX1_PITCHSHIFT_FEEDBACK.getSysex() }, { &PRM_FX1_PITCHSHIFT_FEEDBACK } },
  { { PRM_FX1_PITCHSHIFT_D_LEVEL.getSysex() }, { &PRM_FX1_PITCHSHIFT_D_LEVEL } },
  { { PRM_FX1_HARMONIST_VOICE.getSysex() }, { &PRM_FX1_HARMONIST_VOICE } },
  { { PRM_FX1_HARMONIST_HARMONY1.getSysex() }, { &PRM_FX1_HARMONIST_HARMONY1 } },
  { { PRM_FX1_HARMONIST_PREDELAY1.getSysex() }, { &PRM_FX1_HARMONIST_PREDELAY1 } },
  { { PRM_FX1_HARMONIST_LEVEL1.getSysex() }, { &PRM_FX1_HARMONIST_LEVEL1 } },
  { { PRM_FX1_HARMONIST_HARMONY2.getSysex() }, { &PRM_FX1_HARMONIST_HARMONY2 } },
  { { PRM_FX1_HARMONIST_PREDELAY2.getSysex() }, { &PRM_FX1_HARMONIST_PREDELAY2 } },
  { { PRM_FX1_HARMONIST_LEVEL2.getSysex() }, { &PRM_FX1_HARMONIST_LEVEL2 } },
  { { PRM_FX1_HARMONIST_FEEDBACK.getSysex() }, { &PRM_FX1_HARMONIST_FEEDBACK } },
  { { PRM_FX1_HARMONIST_D_LEVEL.getSysex() }, { &PRM_FX1_HARMONIST_D_LEVEL } },
  { { PRM_FX1_HARMONIST_V1_HARM_1.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_1 } },
  { { PRM_FX1_HARMONIST_V1_HARM_2.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_2 } },
  { { PRM_FX1_HARMONIST_V1_HARM_3.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_3 } },
  { { PRM_FX1_HARMONIST_V1_HARM_4.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_4 } },
  { { PRM_FX1_HARMONIST_V1_HARM_5.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_5 } },
  { { PRM_FX1_HARMONIST_V1_HARM_6.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_6 } },
  { { PRM_FX1_HARMONIST_V1_HARM_7.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_7 } },
  { { PRM_FX1_HARMONIST_V1_HARM_8.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_8 } },
  { { PRM_FX1_HARMONIST_V1_HARM_9.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_9 } },
  { { PRM_FX1_HARMONIST_V1_HARM_10.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_10 } },
  { { PRM_FX1_HARMONIST_V1_HARM_11.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_11 } },
  { { PRM_FX1_HARMONIST_V1_HARM_12.getSysex() }, { &PRM_FX1_HARMONIST_V1_HARM_12 } },
  { { PRM_FX1_HARMONIST_V2_HARM_1.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_1 } },
  { { PRM_FX1_HARMONIST_V2_HARM_2.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_2 } },
  { { PRM_FX1_HARMONIST_V2_HARM_3.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_3 } },
  { { PRM_FX1_HARMONIST_V2_HARM_4.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_4 } },
  { { PRM_FX1_HARMONIST_V2_HARM_5.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_5 } },
  { { PRM_FX1_HARMONIST_V2_HARM_6.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_6 } },
  { { PRM_FX1_HARMONIST_V2_HARM_7.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_7 } },
  { { PRM_FX1_HARMONIST_V2_HARM_8.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_8 } },
  { { PRM_FX1_HARMONIST_V2_HARM_9.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_9 } },
  { { PRM_FX1_HARMONIST_V2_HARM_10.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_10 } },
  { { PRM_FX1_HARMONIST_V2_HARM_11.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_11 } },
  { { PRM_FX1_HARMONIST_V2_HARM_12.getSysex() }, { &PRM_FX1_HARMONIST_V2_HARM_12 } },
  { { PRM_FX1_ACPROCESS_TYPE.getSysex() }, { &PRM_FX1_ACPROCESS_TYPE } },
  { { PRM_FX1_ACPROCESS_BASS.getSysex() }, { &PRM_FX1_ACPROCESS_BASS } },
  { { PRM_FX1_ACPROCESS_MID.getSysex() }, { &PRM_FX1_ACPROCESS_MID } },
  { { PRM_FX1_ACPROCESS_MID_F.getSysex() }, { &PRM_FX1_ACPROCESS_MID_F } },
  { { PRM_FX1_ACPROCESS_TREBLE.getSysex() }, { &PRM_FX1_ACPROCESS_TREBLE } },
  { { PRM_FX1_ACPROCESS_PRESENCE.getSysex() }, { &PRM_FX1_ACPROCESS_PRESENCE } },
  { { PRM_FX1_ACPROCESS_LEVEL.getSysex() }, { &PRM_FX1_ACPROCESS_LEVEL } },
  { { PRM_FX1_PHASER_TYPE.getSysex() }, { &PRM_FX1_PHASER_TYPE } },
  { { PRM_FX1_PHASER_RATE.getSysex() }, { &PRM_FX1_PHASER_RATE } },
  { { PRM_FX1_PHASER_DEPTH.getSysex() }, { &PRM_FX1_PHASER_DEPTH } },
  { { PRM_FX1_PHASER_MANUAL.getSysex() }, { &PRM_FX1_PHASER_MANUAL } },
  { { PRM_FX1_PHASER_RESONANCE.getSysex() }, { &PRM_FX1_PHASER_RESONANCE } },
  { { PRM_FX1_PHASER_STEPRATE.getSysex() }, { &PRM_FX1_PHASER_STEPRATE } },
  { { PRM_FX1_PHASER_E_LEVEL.getSysex() }, { &PRM_FX1_PHASER_E_LEVEL } },
  { { PRM_FX1_PHASER_D_LEVEL.getSysex() }, { &PRM_FX1_PHASER_D_LEVEL } },
  { { PRM_FX1_FLANGER_RATE.getSysex() }, { &PRM_FX1_FLANGER_RATE } },
  { { PRM_FX1_FLANGER_DEPTH.getSysex() }, { &PRM_FX1_FLANGER_DEPTH } },
  { { PRM_FX1_FLANGER_MANUAL.getSysex() }, { &PRM_FX1_FLANGER_MANUAL } },
  { { PRM_FX1_FLANGER_RESONANCE.getSysex() }, { &PRM_FX1_FLANGER_RESONANCE } },
  { { PRM_FX1_FLANGER_LOWCUT.getSysex() }, { &PRM_FX1_FLANGER_LOWCUT } },
  { { PRM_FX1_FLANGER_E_LEVEL.getSysex() }, { &PRM_FX1_FLANGER_E_LEVEL } },
  { { PRM_FX1_FLANGER_D_LEVEL.getSysex() }, { &PRM_FX1_FLANGER_D_LEVEL } },
  { { PRM_FX1_TREMOLO_WAVESHAPE.getSysex() }, { &PRM_FX1_TREMOLO_WAVESHAPE } },
  { { PRM_FX1_TREMOLO_RATE.getSysex() }, { &PRM_FX1_TREMOLO_RATE } },
  { { PRM_FX1_TREMOLO_DEPTH.getSysex() }, { &PRM_FX1_TREMOLO_DEPTH } },
  { { PRM_FX1_TREMOLO_LEVEL.getSysex() }, { &PRM_FX1_TREMOLO_LEVEL } },
  { { PRM_FX1_ROTARY_RATE_FAST.getSysex() }, { &PRM_FX1_ROTARY_RATE_FAST } },
  { { PRM_FX1_ROTARY_DEPTH.getSysex() }, { &PRM_FX1_ROTARY_DEPTH } },
  { { PRM_FX1_ROTARY_LEVEL.getSysex() }, { &PRM_FX1_ROTARY_LEVEL } },
  { { PRM_FX1_UNI_V_RATE.getSysex() }, { &PRM_FX1_UNI_V_RATE } },
  { { PRM_FX1_UNI_V_DEPTH.getSysex() }, { &PRM_FX1_UNI_V_DEPTH } },
  { { PRM_FX1_UNI_V_LEVEL.getSysex() }, { &PRM_FX1_UNI_V_LEVEL } },
  { { PRM_FX1_SLICER_PATTERN.getSysex() }, { &PRM_FX1_SLICER_PATTERN } },
  { { PRM_FX1_SLICER_RATE.getSysex() }, { &PRM_FX1_SLICER_RATE } },
  { { PRM_FX1_SLICER_TRIGSENS.getSysex() }, { &PRM_FX1_SLICER_TRIGSENS } },
  { { PRM_FX1_SLICER_EFFECT_LEVEL.getSysex() }, { &PRM_FX1_SLICER_EFFECT_LEVEL } },
  { { PRM_FX1_SLICER_DIRECT_LEVEL.getSysex() }, { &PRM_FX1_SLICER_DIRECT_LEVEL } },
  { { PRM_FX1_VIBRATO_RATE.getSysex() }, { &PRM_FX1_VIBRATO_RATE } },
  { { PRM_FX1_VIBRATO_DEPTH.getSysex() }, { &PRM_FX1_VIBRATO_DEPTH } },
  { { PRM_FX1_VIBRATO_LEVEL.getSysex() }, { &PRM_FX1_VIBRATO_LEVEL } },
  { { PRM_FX1_RINGMOD_MODE.getSysex() }, { &PRM_FX1_RINGMOD_MODE } },
  { { PRM_FX1_RINGMOD_FREQ.getSysex() }, { &PRM_FX1_RINGMOD_FREQ } },
  { { PRM_FX1_RINGMOD_E_LEVEL.getSysex() }, { &PRM_FX1_RINGMOD_E_LEVEL } },
  { { PRM_FX1_RINGMOD_D_LEVEL.getSysex() }, { &PRM_FX1_RINGMOD_D_LEVEL } },
  { { PRM_FX1_HUMANIZER_MODE.getSysex() }, { &PRM_FX1_HUMANIZER_MODE } },
  { { PRM_FX1_HUMANIZER_VOWEL1.getSysex() }, { &PRM_FX1_HUMANIZER_VOWEL1 } },
  { { PRM_FX1_HUMANIZER_VOWEL2.getSysex() }, { &PRM_FX1_HUMANIZER_VOWEL2 } },
  { { PRM_FX1_HUMANIZER_SENS.getSysex() }, { &PRM_FX1_HUMANIZER_SENS } },
  { { PRM_FX1_HUMANIZER_RATE.getSysex() }, { &PRM_FX1_HUMANIZER_RATE } },
  { { PRM_FX1_HUMANIZER_DEPTH.getSysex() }, { &PRM_FX1_HUMANIZER_DEPTH } },
  { { PRM_FX1_HUMANIZER_MANUAL.getSysex() }, { &PRM_FX1_HUMANIZER_MANUAL } },
  { { PRM_FX1_HUMANIZER_LEVEL.getSysex() }, { &PRM_FX1_HUMANIZER_LEVEL } },
  { { PRM_FX1_2x2CHORUS_XOVERF.getSysex() }, { &PRM_FX1_2x2CHORUS_XOVERF } },
  { { PRM_FX1_2x2CHORUS_LOW_RATE.getSysex() }, { &PRM_FX1_2x2CHORUS_LOW_RATE } },
  { { PRM_FX1_2x2CHORUS_LOW_DEPTH.getSysex() }, { &PRM_FX1_2x2CHORUS_LOW_DEPTH } },
  { { PRM_FX1_2x2CHORUS_LOW_PREDELAY.getSysex() }, { &PRM_FX1_2x2CHORUS_LOW_PREDELAY } },
  { { PRM_FX1_2x2CHORUS_LOW_LEVEL.getSysex() }, { &PRM_FX1_2x2CHORUS_LOW_LEVEL } },
  { { PRM_FX1_2x2CHORUS_HIGH_RATE.getSysex() }, { &PRM_FX1_2x2CHORUS_HIGH_RATE } },
  { { PRM_FX1_2x2CHORUS_HIGH_DEPTH.getSysex() }, { &PRM_FX1_2x2CHORUS_HIGH_DEPTH } },
  { { PRM_FX1_2x2CHORUS_HIGH_PREDELAY.getSysex() }, { &PRM_FX1_2x2CHORUS_HIGH_PREDELAY } },
  { { PRM_FX1_2x2CHORUS_HIGH_LEVEL.getSysex() }, { &PRM_FX1_2x2CHORUS_HIGH_LEVEL } },
  { { PRM_FX1_2x2CHORUS_DIRECT_LEVEL.getSysex() }, { &PRM_FX1_2x2CHORUS_DIRECT_LEVEL } },
  { { PRM_FX1_ACSIM_TOP.getSysex() }, { &PRM_FX1_ACSIM_TOP } },
  { { PRM_FX1_ACSIM_BODY.getSysex() }, { &PRM_FX1_ACSIM_BODY } },
  { { PRM_FX1_ACSIM_LOW.getSysex() }, { &PRM_FX1_ACSIM_LOW } },
  { { PRM_FX1_ACSIM_LEVEL.getSysex() }, { &PRM_FX1_ACSIM_LEVEL } },
  { { PRM_FX1_EVH_PHASER_SCRIPT.getSysex() }, { &PRM_FX1_EVH_PHASER_SCRIPT } },
  { { PRM_FX1_EVH_PHASER_SPEED.getSysex() }, { &PRM_FX1_EVH_PHASER_SPEED } },
  { { PRM_FX1_EVH_FLANGER_MANUAL.getSysex() }, { &PRM_FX1_EVH_FLANGER_MANUAL } },
  { { PRM_FX1_EVH_FLANGER_WIDTH.getSysex() }, { &PRM_FX1_EVH_FLANGER_WIDTH } },
  { { PRM_FX1_EVH_FLANGER_SPEED.getSysex() }, { &PRM_FX1_EVH_FLANGER_SPEED } },
  { { PRM_FX1_EVH_FLANGER_REGEN.getSysex() }, { &PRM_FX1_EVH_FLANGER_REGEN } },
  { { PRM_FX1_EVH_WAH_PEDAL_POS.getSysex() }, { &PRM_FX1_EVH_WAH_PEDAL_POS } },
  { { PRM_FX1_EVH_WAH_PEDAL_MIN.getSysex() }, { &PRM_FX1_EVH_WAH_PEDAL_MIN } },
  { { PRM_FX1_EVH_WAH_PEDAL_MAX.getSysex() }, { &PRM_FX1_EVH_WAH_PEDAL_MAX } },
  { { PRM_FX1_EVH_WAH_EFFECT_LEVEL.getSysex() }, { &PRM_FX1_EVH_WAH_EFFECT_LEVEL } },
  { { PRM_FX1_EVH_WAH_DIRECT_MIX.getSysex() }, { &PRM_FX1_EVH_WAH_DIRECT_MIX } },
  { { PRM_FX1_DC30_SELECTOR.getSysex() }, { &PRM_FX1_DC30_SELECTOR } },
  { { PRM_FX1_DC30_INPUT_VOLUME.getSysex() }, { &PRM_FX1_DC30_INPUT_VOLUME } },
  { { PRM_FX1_DC30_CHORUS_INTENSITY.getSysex() }, { &PRM_FX1_DC30_CHORUS_INTENSITY } },
  { { PRM_FX1_DC30_ECHO_REPEAT_RATE.getSysex() }, { &PRM_FX1_DC30_ECHO_REPEAT_RATE } },
  { { PRM_FX1_DC30_ECHO_INTENSITY.getSysex() }, { &PRM_FX1_DC30_ECHO_INTENSITY } },
  { { PRM_FX1_DC30_ECHO_VOLUME.getSysex() }, { &PRM_FX1_DC30_ECHO_VOLUME } },
  { { PRM_FX1_DC30_TONE.getSysex() }, { &PRM_FX1_DC30_TONE } },
  { { PRM_FX1_DC30_OUTPUT.getSysex() }, { &PRM_FX1_DC30_OUTPUT } },
  { { PRM_FX1_HEAVY_OCTAVE_1OCT_LEVEL.getSysex() }, { &PRM_FX1_HEAVY_OCTAVE_1OCT_LEVEL } },
  { { PRM_FX1_HEAVY_OCTAVE_2OCT_LEVEL.getSysex() }, { &PRM_FX1_HEAVY_OCTAVE_2OCT_LEVEL } },
  { { PRM_FX1_HEAVY_OCTAVE_DIRECT_LEVEL.getSysex() }, { &PRM_FX1_HEAVY_OCTAVE_DIRECT_LEVEL } },

  { { PRM_FX2_FXTYPE.getSysex() }, { &PRM_FX2_FXTYPE } },
  { { PRM_FX2_TWAH_MODE.getSysex() }, { &PRM_FX2_TWAH_MODE } },
  { { PRM_FX2_TWAH_POLARITY.getSysex() }, { &PRM_FX2_TWAH_POLARITY } },
  { { PRM_FX2_TWAH_SENS.getSysex() }, { &PRM_FX2_TWAH_SENS } },
  { { PRM_FX2_TWAH_FREQ.getSysex() }, { &PRM_FX2_TWAH_FREQ } },
  { { PRM_FX2_TWAH_PEAK.getSysex() }, { &PRM_FX2_TWAH_PEAK } },
  { { PRM_FX2_TWAH_D_LEVEL.getSysex() }, { &PRM_FX2_TWAH_D_LEVEL } },
  { { PRM_FX2_TWAH_LEVEL.getSysex() }, { &PRM_FX2_TWAH_LEVEL } },
  { { PRM_FX2_AWAH_MODE.getSysex() }, { &PRM_FX2_AWAH_MODE } },
  { { PRM_FX2_AWAH_FREQ.getSysex() }, { &PRM_FX2_AWAH_FREQ } },
  { { PRM_FX2_AWAH_PEAK.getSysex() }, { &PRM_FX2_AWAH_PEAK } },
  { { PRM_FX2_AWAH_RATE.getSysex() }, { &PRM_FX2_AWAH_RATE } },
  { { PRM_FX2_AWAH_DEPTH.getSysex() }, { &PRM_FX2_AWAH_DEPTH } },
  { { PRM_FX2_AWAH_D_LEVEL.getSysex() }, { &PRM_FX2_AWAH_D_LEVEL } },
  { { PRM_FX2_AWAH_LEVEL.getSysex() }, { &PRM_FX2_AWAH_LEVEL } },
  { { PRM_FX2_SUBWAH_TYPE.getSysex() }, { &PRM_FX2_SUBWAH_TYPE } },
  { { PRM_FX2_SUBWAH_PDLPOS.getSysex() }, { &PRM_FX2_SUBWAH_PDLPOS } },
  { { PRM_FX2_SUBWAH_MIN.getSysex() }, { &PRM_FX2_SUBWAH_MIN } },
  { { PRM_FX2_SUBWAH_MAX.getSysex() }, { &PRM_FX2_SUBWAH_MAX } },
  { { PRM_FX2_SUBWAH_E_LEVEL.getSysex() }, { &PRM_FX2_SUBWAH_E_LEVEL } },
  { { PRM_FX2_SUBWAH_D_LEVEL.getSysex() }, { &PRM_FX2_SUBWAH_D_LEVEL } },
  { { PRM_FX2_ADCOMP_TYPE.getSysex() }, { &PRM_FX2_ADCOMP_TYPE } },
  { { PRM_FX2_ADCOMP_SUSTAIN.getSysex() }, { &PRM_FX2_ADCOMP_SUSTAIN } },
  { { PRM_FX2_ADCOMP_ATTACK.getSysex() }, { &PRM_FX2_ADCOMP_ATTACK } },
  { { PRM_FX2_ADCOMP_TONE.getSysex() }, { &PRM_FX2_ADCOMP_TONE } },
  { { PRM_FX2_ADCOMP_LEVEL.getSysex() }, { &PRM_FX2_ADCOMP_LEVEL } },
  { { PRM_FX2_LIMITER_TYPE.getSysex() }, { &PRM_FX2_LIMITER_TYPE } },
  { { PRM_FX2_LIMITER_ATTACK.getSysex() }, { &PRM_FX2_LIMITER_ATTACK } },
  { { PRM_FX2_LIMITER_THRESHOLD.getSysex() }, { &PRM_FX2_LIMITER_THRESHOLD } },
  { { PRM_FX2_LIMITER_RATIO.getSysex() }, { &PRM_FX2_LIMITER_RATIO } },
  { { PRM_FX2_LIMITER_RELEASE.getSysex() }, { &PRM_FX2_LIMITER_RELEASE } },
  { { PRM_FX2_LIMITER_LEVEL.getSysex() }, { &PRM_FX2_LIMITER_LEVEL } },
  { { PRM_FX2_GEQ_BAND1.getSysex() }, { &PRM_FX2_GEQ_BAND1 } },
  { { PRM_FX2_GEQ_BAND2.getSysex() }, { &PRM_FX2_GEQ_BAND2 } },
  { { PRM_FX2_GEQ_BAND3.getSysex() }, { &PRM_FX2_GEQ_BAND3 } },
  { { PRM_FX2_GEQ_BAND4.getSysex() }, { &PRM_FX2_GEQ_BAND4 } },
  { { PRM_FX2_GEQ_BAND5.getSysex() }, { &PRM_FX2_GEQ_BAND5 } },
  { { PRM_FX2_GEQ_BAND6.getSysex() }, { &PRM_FX2_GEQ_BAND6 } },
  { { PRM_FX2_GEQ_BAND7.getSysex() }, { &PRM_FX2_GEQ_BAND7 } },
  { { PRM_FX2_GEQ_BAND8.getSysex() }, { &PRM_FX2_GEQ_BAND8 } },
  { { PRM_FX2_GEQ_BAND9.getSysex() }, { &PRM_FX2_GEQ_BAND9 } },
  { { PRM_FX2_GEQ_BAND10.getSysex() }, { &PRM_FX2_GEQ_BAND10 } },
  { { PRM_FX2_GEQ_LEVEL.getSysex() }, { &PRM_FX2_GEQ_LEVEL } },
  { { PRM_FX2_PEQ_LOW_CUT.getSysex() }, { &PRM_FX2_PEQ_LOW_CUT } },
  { { PRM_FX2_PEQ_LOW_GAIN.getSysex() }, { &PRM_FX2_PEQ_LOW_GAIN } },
  { { PRM_FX2_PEQ_LOWMID_FREQ.getSysex() }, { &PRM_FX2_PEQ_LOWMID_FREQ } },
  { { PRM_FX2_PEQ_LOWMID_Q.getSysex() }, { &PRM_FX2_PEQ_LOWMID_Q } },
  { { PRM_FX2_PEQ_LOWMID_GAIN.getSysex() }, { &PRM_FX2_PEQ_LOWMID_GAIN } },
  { { PRM_FX2_PEQ_HIGHMID_FREQ.getSysex() }, { &PRM_FX2_PEQ_HIGHMID_FREQ } },
  { { PRM_FX2_PEQ_HIGHMID_Q.getSysex() }, { &PRM_FX2_PEQ_HIGHMID_Q } },
  { { PRM_FX2_PEQ_HIGHMID_GAIN.getSysex() }, { &PRM_FX2_PEQ_HIGHMID_GAIN } },
  { { PRM_FX2_PEQ_HIGH_GAIN.getSysex() }, { &PRM_FX2_PEQ_HIGH_GAIN } },
  { { PRM_FX2_PEQ_HIGH_CUT.getSysex() }, { &PRM_FX2_PEQ_HIGH_CUT } },
  { { PRM_FX2_PEQ_LEVEL.getSysex() }, { &PRM_FX2_PEQ_LEVEL } },
  { { PRM_FX2_GTRSIM_TYPE.getSysex() }, { &PRM_FX2_GTRSIM_TYPE } },
  { { PRM_FX2_GTRSIM_LOW.getSysex() }, { &PRM_FX2_GTRSIM_LOW } },
  { { PRM_FX2_GTRSIM_HIGH.getSysex() }, { &PRM_FX2_GTRSIM_HIGH } },
  { { PRM_FX2_GTRSIM_LEVEL.getSysex() }, { &PRM_FX2_GTRSIM_LEVEL } },
  { { PRM_FX2_GTRSIM_BODY.getSysex() }, { &PRM_FX2_GTRSIM_BODY } },
  { { PRM_FX2_SLOWGEAR_SENS.getSysex() }, { &PRM_FX2_SLOWGEAR_SENS } },
  { { PRM_FX2_SLOWGEAR_RISETIME.getSysex() }, { &PRM_FX2_SLOWGEAR_RISETIME } },
  { { PRM_FX2_SLOWGEAR_LEVEL.getSysex() }, { &PRM_FX2_SLOWGEAR_LEVEL } },
  { { PRM_FX2_WAVESYN_WAVE.getSysex() }, { &PRM_FX2_WAVESYN_WAVE } },
  { { PRM_FX2_WAVESYN_CUTOFF.getSysex() }, { &PRM_FX2_WAVESYN_CUTOFF } },
  { { PRM_FX2_WAVESYN_RESONANCE.getSysex() }, { &PRM_FX2_WAVESYN_RESONANCE } },
  { { PRM_FX2_WAVESYN_FLT_SENS.getSysex() }, { &PRM_FX2_WAVESYN_FLT_SENS } },
  { { PRM_FX2_WAVESYN_FLT_DECAY.getSysex() }, { &PRM_FX2_WAVESYN_FLT_DECAY } },
  { { PRM_FX2_WAVESYN_FLT_DEPTH.getSysex() }, { &PRM_FX2_WAVESYN_FLT_DEPTH } },
  { { PRM_FX2_WAVESYN_SYN_LEVEL.getSysex() }, { &PRM_FX2_WAVESYN_SYN_LEVEL } },
  { { PRM_FX2_WAVESYN_D_LEVEL.getSysex() }, { &PRM_FX2_WAVESYN_D_LEVEL } },
  { { PRM_FX2_OCTAVE_RANGE.getSysex() }, { &PRM_FX2_OCTAVE_RANGE } },
  { { PRM_FX2_OCTAVE_LEVEL.getSysex() }, { &PRM_FX2_OCTAVE_LEVEL } },
  { { PRM_FX2_OCTAVE_D_LEVEL.getSysex() }, { &PRM_FX2_OCTAVE_D_LEVEL } },
  { { PRM_FX2_PITCHSHIFT_VOICE.getSysex() }, { &PRM_FX2_PITCHSHIFT_VOICE } },
  { { PRM_FX2_PITCHSHIFT_MODE1.getSysex() }, { &PRM_FX2_PITCHSHIFT_MODE1 } },
  { { PRM_FX2_PITCHSHIFT_PITCH1.getSysex() }, { &PRM_FX2_PITCHSHIFT_PITCH1 } },
  { { PRM_FX2_PITCHSHIFT_FINE1.getSysex() }, { &PRM_FX2_PITCHSHIFT_FINE1 } },
  { { PRM_FX2_PITCHSHIFT_PREDELAY1.getSysex() }, { &PRM_FX2_PITCHSHIFT_PREDELAY1 } },
  { { PRM_FX2_PITCHSHIFT_LEVEL1.getSysex() }, { &PRM_FX2_PITCHSHIFT_LEVEL1 } },
  { { PRM_FX2_PITCHSHIFT_MODE2.getSysex() }, { &PRM_FX2_PITCHSHIFT_MODE2 } },
  { { PRM_FX2_PITCHSHIFT_PITCH2.getSysex() }, { &PRM_FX2_PITCHSHIFT_PITCH2 } },
  { { PRM_FX2_PITCHSHIFT_FINE2.getSysex() }, { &PRM_FX2_PITCHSHIFT_FINE2 } },
  { { PRM_FX2_PITCHSHIFT_PREDELAY2.getSysex() }, { &PRM_FX2_PITCHSHIFT_PREDELAY2 } },
  { { PRM_FX2_PITCHSHIFT_LEVEL2.getSysex() }, { &PRM_FX2_PITCHSHIFT_LEVEL2 } },
  { { PRM_FX2_PITCHSHIFT_FEEDBACK.getSysex() }, { &PRM_FX2_PITCHSHIFT_FEEDBACK } },
  { { PRM_FX2_PITCHSHIFT_D_LEVEL.getSysex() }, { &PRM_FX2_PITCHSHIFT_D_LEVEL } },
  { { PRM_FX2_HARMONIST_VOICE.getSysex() }, { &PRM_FX2_HARMONIST_VOICE } },
  { { PRM_FX2_HARMONIST_HARMONY1.getSysex() }, { &PRM_FX2_HARMONIST_HARMONY1 } },
  { { PRM_FX2_HARMONIST_PREDELAY1.getSysex() }, { &PRM_FX2_HARMONIST_PREDELAY1 } },
  { { PRM_FX2_HARMONIST_LEVEL1.getSysex() }, { &PRM_FX2_HARMONIST_LEVEL1 } },
  { { PRM_FX2_HARMONIST_HARMONY2.getSysex() }, { &PRM_FX2_HARMONIST_HARMONY2 } },
  { { PRM_FX2_HARMONIST_PREDELAY2.getSysex() }, { &PRM_FX2_HARMONIST_PREDELAY2 } },
  { { PRM_FX2_HARMONIST_LEVEL2.getSysex() }, { &PRM_FX2_HARMONIST_LEVEL2 } },
  { { PRM_FX2_HARMONIST_FEEDBACK.getSysex() }, { &PRM_FX2_HARMONIST_FEEDBACK } },
  { { PRM_FX2_HARMONIST_D_LEVEL.getSysex() }, { &PRM_FX2_HARMONIST_D_LEVEL } },
  { { PRM_FX2_HARMONIST_V1_HARM_1.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_1 } },
  { { PRM_FX2_HARMONIST_V1_HARM_2.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_2 } },
  { { PRM_FX2_HARMONIST_V1_HARM_3.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_3 } },
  { { PRM_FX2_HARMONIST_V1_HARM_4.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_4 } },
  { { PRM_FX2_HARMONIST_V1_HARM_5.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_5 } },
  { { PRM_FX2_HARMONIST_V1_HARM_6.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_6 } },
  { { PRM_FX2_HARMONIST_V1_HARM_7.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_7 } },
  { { PRM_FX2_HARMONIST_V1_HARM_8.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_8 } },
  { { PRM_FX2_HARMONIST_V1_HARM_9.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_9 } },
  { { PRM_FX2_HARMONIST_V1_HARM_10.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_10 } },
  { { PRM_FX2_HARMONIST_V1_HARM_11.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_11 } },
  { { PRM_FX2_HARMONIST_V1_HARM_12.getSysex() }, { &PRM_FX2_HARMONIST_V1_HARM_12 } },
  { { PRM_FX2_HARMONIST_V2_HARM_1.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_1 } },
  { { PRM_FX2_HARMONIST_V2_HARM_2.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_2 } },
  { { PRM_FX2_HARMONIST_V2_HARM_3.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_3 } },
  { { PRM_FX2_HARMONIST_V2_HARM_4.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_4 } },
  { { PRM_FX2_HARMONIST_V2_HARM_5.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_5 } },
  { { PRM_FX2_HARMONIST_V2_HARM_6.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_6 } },
  { { PRM_FX2_HARMONIST_V2_HARM_7.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_7 } },
  { { PRM_FX2_HARMONIST_V2_HARM_8.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_8 } },
  { { PRM_FX2_HARMONIST_V2_HARM_9.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_9 } },
  { { PRM_FX2_HARMONIST_V2_HARM_10.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_10 } },
  { { PRM_FX2_HARMONIST_V2_HARM_11.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_11 } },
  { { PRM_FX2_HARMONIST_V2_HARM_12.getSysex() }, { &PRM_FX2_HARMONIST_V2_HARM_12 } },
  { { PRM_FX2_ACPROCESS_TYPE.getSysex() }, { &PRM_FX2_ACPROCESS_TYPE } },
  { { PRM_FX2_ACPROCESS_BASS.getSysex() }, { &PRM_FX2_ACPROCESS_BASS } },
  { { PRM_FX2_ACPROCESS_MID.getSysex() }, { &PRM_FX2_ACPROCESS_MID } },
  { { PRM_FX2_ACPROCESS_MID_F.getSysex() }, { &PRM_FX2_ACPROCESS_MID_F } },
  { { PRM_FX2_ACPROCESS_TREBLE.getSysex() }, { &PRM_FX2_ACPROCESS_TREBLE } },
  { { PRM_FX2_ACPROCESS_PRESENCE.getSysex() }, { &PRM_FX2_ACPROCESS_PRESENCE } },
  { { PRM_FX2_ACPROCESS_LEVEL.getSysex() }, { &PRM_FX2_ACPROCESS_LEVEL } },
  { { PRM_FX2_PHASER_TYPE.getSysex() }, { &PRM_FX2_PHASER_TYPE } },
  { { PRM_FX2_PHASER_RATE.getSysex() }, { &PRM_FX2_PHASER_RATE } },
  { { PRM_FX2_PHASER_DEPTH.getSysex() }, { &PRM_FX2_PHASER_DEPTH } },
  { { PRM_FX2_PHASER_MANUAL.getSysex() }, { &PRM_FX2_PHASER_MANUAL } },
  { { PRM_FX2_PHASER_RESONANCE.getSysex() }, { &PRM_FX2_PHASER_RESONANCE } },
  { { PRM_FX2_PHASER_STEPRATE.getSysex() }, { &PRM_FX2_PHASER_STEPRATE } },
  { { PRM_FX2_PHASER_E_LEVEL.getSysex() }, { &PRM_FX2_PHASER_E_LEVEL } },
  { { PRM_FX2_PHASER_D_LEVEL.getSysex() }, { &PRM_FX2_PHASER_D_LEVEL } },
  { { PRM_FX2_FLANGER_RATE.getSysex() }, { &PRM_FX2_FLANGER_RATE } },
  { { PRM_FX2_FLANGER_DEPTH.getSysex() }, { &PRM_FX2_FLANGER_DEPTH } },
  { { PRM_FX2_FLANGER_MANUAL.getSysex() }, { &PRM_FX2_FLANGER_MANUAL } },
  { { PRM_FX2_FLANGER_RESONANCE.getSysex() }, { &PRM_FX2_FLANGER_RESONANCE } },
  { { PRM_FX2_FLANGER_LOWCUT.getSysex() }, { &PRM_FX2_FLANGER_LOWCUT } },
  { { PRM_FX2_FLANGER_E_LEVEL.getSysex() }, { &PRM_FX2_FLANGER_E_LEVEL } },
  { { PRM_FX2_FLANGER_D_LEVEL.getSysex() }, { &PRM_FX2_FLANGER_D_LEVEL } },
  { { PRM_FX2_TREMOLO_WAVESHAPE.getSysex() }, { &PRM_FX2_TREMOLO_WAVESHAPE } },
  { { PRM_FX2_TREMOLO_RATE.getSysex() }, { &PRM_FX2_TREMOLO_RATE } },
  { { PRM_FX2_TREMOLO_DEPTH.getSysex() }, { &PRM_FX2_TREMOLO_DEPTH } },
  { { PRM_FX2_TREMOLO_LEVEL.getSysex() }, { &PRM_FX2_TREMOLO_LEVEL } },
  { { PRM_FX2_ROTARY_DEPTH.getSysex() }, { &PRM_FX2_ROTARY_DEPTH } },
  { { PRM_FX2_ROTARY_LEVEL.getSysex() }, { &PRM_FX2_ROTARY_LEVEL } },
  { { PRM_FX2_UNI_V_RATE.getSysex() }, { &PRM_FX2_UNI_V_RATE } },
  { { PRM_FX2_UNI_V_DEPTH.getSysex() }, { &PRM_FX2_UNI_V_DEPTH } },
  { { PRM_FX2_UNI_V_LEVEL.getSysex() }, { &PRM_FX2_UNI_V_LEVEL } },
  { { PRM_FX2_SLICER_PATTERN.getSysex() }, { &PRM_FX2_SLICER_PATTERN } },
  { { PRM_FX2_SLICER_RATE.getSysex() }, { &PRM_FX2_SLICER_RATE } },
  { { PRM_FX2_SLICER_TRIGSENS.getSysex() }, { &PRM_FX2_SLICER_TRIGSENS } },
  { { PRM_FX2_SLICER_EFFECT_LEVEL.getSysex() }, { &PRM_FX2_SLICER_EFFECT_LEVEL } },
  { { PRM_FX2_SLICER_DIRECT_LEVEL.getSysex() }, { &PRM_FX2_SLICER_DIRECT_LEVEL } },
  { { PRM_FX2_VIBRATO_RATE.getSysex() }, { &PRM_FX2_VIBRATO_RATE } },
  { { PRM_FX2_VIBRATO_DEPTH.getSysex() }, { &PRM_FX2_VIBRATO_DEPTH } },
  { { PRM_FX2_VIBRATO_LEVEL.getSysex() }, { &PRM_FX2_VIBRATO_LEVEL } },
  { { PRM_FX2_RINGMOD_MODE.getSysex() }, { &PRM_FX2_RINGMOD_MODE } },
  { { PRM_FX2_RINGMOD_FREQ.getSysex() }, { &PRM_FX2_RINGMOD_FREQ } },
  { { PRM_FX2_RINGMOD_E_LEVEL.getSysex() }, { &PRM_FX2_RINGMOD_E_LEVEL } },
  { { PRM_FX2_RINGMOD_D_LEVEL.getSysex() }, { &PRM_FX2_RINGMOD_D_LEVEL } },
  { { PRM_FX2_HUMANIZER_MODE.getSysex() }, { &PRM_FX2_HUMANIZER_MODE } },
  { { PRM_FX2_HUMANIZER_VOWEL1.getSysex() }, { &PRM_FX2_HUMANIZER_VOWEL1 } },
  { { PRM_FX2_HUMANIZER_VOWEL2.getSysex() }, { &PRM_FX2_HUMANIZER_VOWEL2 } },
  { { PRM_FX2_HUMANIZER_SENS.getSysex() }, { &PRM_FX2_HUMANIZER_SENS } },
  { { PRM_FX2_HUMANIZER_RATE.getSysex() }, { &PRM_FX2_HUMANIZER_RATE } },
  { { PRM_FX2_HUMANIZER_DEPTH.getSysex() }, { &PRM_FX2_HUMANIZER_DEPTH } },
  { { PRM_FX2_HUMANIZER_MANUAL.getSysex() }, { &PRM_FX2_HUMANIZER_MANUAL } },
  { { PRM_FX2_HUMANIZER_LEVEL.getSysex() }, { &PRM_FX2_HUMANIZER_LEVEL } },
  { { PRM_FX2_2x2CHORUS_XOVERF.getSysex() }, { &PRM_FX2_2x2CHORUS_XOVERF } },
  { { PRM_FX2_2x2CHORUS_LOW_RATE.getSysex() }, { &PRM_FX2_2x2CHORUS_LOW_RATE } },
  { { PRM_FX2_2x2CHORUS_LOW_DEPTH.getSysex() }, { &PRM_FX2_2x2CHORUS_LOW_DEPTH } },
  { { PRM_FX2_2x2CHORUS_LOW_PREDELAY.getSysex() }, { &PRM_FX2_2x2CHORUS_LOW_PREDELAY } },
  { { PRM_FX2_2x2CHORUS_LOW_LEVEL.getSysex() }, { &PRM_FX2_2x2CHORUS_LOW_LEVEL } },
  { { PRM_FX2_2x2CHORUS_HIGH_RATE.getSysex() }, { &PRM_FX2_2x2CHORUS_HIGH_RATE } },
  { { PRM_FX2_2x2CHORUS_HIGH_DEPTH.getSysex() }, { &PRM_FX2_2x2CHORUS_HIGH_DEPTH } },
  { { PRM_FX2_2x2CHORUS_HIGH_PREDELAY.getSysex() }, { &PRM_FX2_2x2CHORUS_HIGH_PREDELAY } },
  { { PRM_FX2_2x2CHORUS_HIGH_LEVEL.getSysex() }, { &PRM_FX2_2x2CHORUS_HIGH_LEVEL } },
  { { PRM_FX2_2x2CHORUS_DIRECT_LEVEL.getSysex() }, { &PRM_FX2_2x2CHORUS_DIRECT_LEVEL } },
  { { PRM_FX2_ACSIM_TOP.getSysex() }, { &PRM_FX2_ACSIM_TOP } },
  { { PRM_FX2_ACSIM_BODY.getSysex() }, { &PRM_FX2_ACSIM_BODY } },
  { { PRM_FX2_ACSIM_LOW.getSysex() }, { &PRM_FX2_ACSIM_LOW } },
  { { PRM_FX2_ACSIM_LEVEL.getSysex() }, { &PRM_FX2_ACSIM_LEVEL } },
  { { PRM_FX2_EVH_PHASER_SCRIPT.getSysex() }, { &PRM_FX2_EVH_PHASER_SCRIPT } },
  { { PRM_FX2_EVH_PHASER_SPEED.getSysex() }, { &PRM_FX2_EVH_PHASER_SPEED } },
  { { PRM_FX2_EVH_FLANGER_MANUAL.getSysex() }, { &PRM_FX2_EVH_FLANGER_MANUAL } },
  { { PRM_FX2_EVH_FLANGER_WIDTH.getSysex() }, { &PRM_FX2_EVH_FLANGER_WIDTH } },
  { { PRM_FX2_EVH_FLANGER_SPEED.getSysex() }, { &PRM_FX2_EVH_FLANGER_SPEED } },
  { { PRM_FX2_EVH_FLANGER_REGEN.getSysex() }, { &PRM_FX2_EVH_FLANGER_REGEN } },
  { { PRM_FX2_EVH_WAH_PEDAL_POS.getSysex() }, { &PRM_FX2_EVH_WAH_PEDAL_POS } },
  { { PRM_FX2_EVH_WAH_PEDAL_MIN.getSysex() }, { &PRM_FX2_EVH_WAH_PEDAL_MIN } },
  { { PRM_FX2_EVH_WAH_PEDAL_MAX.getSysex() }, { &PRM_FX2_EVH_WAH_PEDAL_MAX } },
  { { PRM_FX2_EVH_WAH_EFFECT_LEVEL.getSysex() }, { &PRM_FX2_EVH_WAH_EFFECT_LEVEL } },
  { { PRM_FX2_EVH_WAH_DIRECT_MIX.getSysex() }, { &PRM_FX2_EVH_WAH_DIRECT_MIX } },
  { { PRM_FX2_DC30_SELECTOR.getSysex() }, { &PRM_FX2_DC30_SELECTOR } },
  { { PRM_FX2_DC30_INPUT_VOLUME.getSysex() }, { &PRM_FX2_DC30_INPUT_VOLUME } },
  { { PRM_FX2_DC30_CHORUS_INTENSITY.getSysex() }, { &PRM_FX2_DC30_CHORUS_INTENSITY } },
  { { PRM_FX2_DC30_ECHO_REPEAT_RATE.getSysex() }, { &PRM_FX2_DC30_ECHO_REPEAT_RATE } },
  { { PRM_FX2_DC30_ECHO_INTENSITY.getSysex() }, { &PRM_FX2_DC30_ECHO_INTENSITY } },
  { { PRM_FX2_DC30_ECHO_VOLUME.getSysex() }, { &PRM_FX2_DC30_ECHO_VOLUME } },
  { { PRM_FX2_DC30_TONE.getSysex() }, { &PRM_FX2_DC30_TONE } },
  { { PRM_FX2_DC30_OUTPUT.getSysex() }, { &PRM_FX2_DC30_OUTPUT } },
  { { PRM_FX2_HEAVY_OCTAVE_1OCT_LEVEL.getSysex() }, { &PRM_FX2_HEAVY_OCTAVE_1OCT_LEVEL } },
  { { PRM_FX2_HEAVY_OCTAVE_2OCT_LEVEL.getSysex() }, { &PRM_FX2_HEAVY_OCTAVE_2OCT_LEVEL } },
  { { PRM_FX2_HEAVY_OCTAVE_DIRECT_LEVEL.getSysex() }, { &PRM_FX2_HEAVY_OCTAVE_DIRECT_LEVEL } },
  { { PRM_DLY_TYPE.getSysex() }, { &PRM_DLY_TYPE } },
  { { PRM_DLY_COMMON_DLY_TIME.getSysex() }, { &PRM_DLY_COMMON_DLY_TIME } },
  { { PRM_DLY_COMMON_FEEDBACK.getSysex() }, { &PRM_DLY_COMMON_FEEDBACK } },
  { { PRM_DLY_COMMON_HICUT.getSysex() }, { &PRM_DLY_COMMON_HICUT } },
  { { PRM_DLY_COMMON_EFFECT_LEVEL.getSysex() }, { &PRM_DLY_COMMON_EFFECT_LEVEL } },
  { { PRM_DLY_COMMON_DIRECT_LEVEL.getSysex() }, { &PRM_DLY_COMMON_DIRECT_LEVEL } },
  { { PRM_DLY_PAN_TAPTIME.getSysex() }, { &PRM_DLY_PAN_TAPTIME } },
  { { PRM_DLY_MOD_RATE.getSysex() }, { &PRM_DLY_MOD_RATE } },
  { { PRM_DLY_MOD_DEPTH.getSysex() }, { &PRM_DLY_MOD_DEPTH } },
  { { PRM_DLY_VINTAGE_LPF.getSysex() }, { &PRM_DLY_VINTAGE_LPF } },
  { { PRM_DLY_VINTAGE_FILTER.getSysex() }, { &PRM_DLY_VINTAGE_FILTER } },
  { { PRM_DLY_VINTAGE_FEEDBACK_PHASE.getSysex() }, { &PRM_DLY_VINTAGE_FEEDBACK_PHASE } },
  { { PRM_DLY_VINTAGE_EFFECT_PHASE.getSysex() }, { &PRM_DLY_VINTAGE_EFFECT_PHASE } },
  { { PRM_DLY_VINTAGE_MOD_SW.getSysex() }, { &PRM_DLY_VINTAGE_MOD_SW } },
  { { PRM_DLY2_SW.getSysex() }, { &PRM_DLY2_SW } },
  { { PRM_DLY2_TYPE.getSysex() }, { &PRM_DLY2_TYPE } },
  { { PRM_DLY2_COMMON_DLY_TIME.getSysex() }, { &PRM_DLY2_COMMON_DLY_TIME } },
  { { PRM_DLY2_COMMON_FEEDBACK.getSysex() }, { &PRM_DLY2_COMMON_FEEDBACK } },
  { { PRM_DLY2_COMMON_HICUT.getSysex() }, { &PRM_DLY2_COMMON_HICUT } },
  { { PRM_DLY2_COMMON_EFFECT_LEVEL.getSysex() }, { &PRM_DLY2_COMMON_EFFECT_LEVEL } },
  { { PRM_DLY2_COMMON_DIRECT_LEVEL.getSysex() }, { &PRM_DLY2_COMMON_DIRECT_LEVEL } },
  { { PRM_DLY2_PAN_TAPTIME.getSysex() }, { &PRM_DLY2_PAN_TAPTIME } },
  { { PRM_DLY2_MOD_RATE.getSysex() }, { &PRM_DLY2_MOD_RATE } },
  { { PRM_DLY2_MOD_DEPTH.getSysex() }, { &PRM_DLY2_MOD_DEPTH } },
  { { PRM_DLY2_VINTAGE_LPF.getSysex() }, { &PRM_DLY2_VINTAGE_LPF } },
  { { PRM_DLY2_VINTAGE_FILTER.getSysex() }, { &PRM_DLY2_VINTAGE_FILTER } },
  { { PRM_DLY2_VINTAGE_FEEDBACK_PHASE.getSysex() }, { &PRM_DLY2_VINTAGE_FEEDBACK_PHASE } },
  { { PRM_DLY2_VINTAGE_EFFECT_PHASE.getSysex() }, { &PRM_DLY2_VINTAGE_EFFECT_PHASE } },
  { { PRM_DLY2_VINTAGE_MOD_SW.getSysex() }, { &PRM_DLY2_VINTAGE_MOD_SW } },
  { { PRM_REVERB_TYPE.getSysex() }, { &PRM_REVERB_TYPE } },
  { { PRM_REVERB_TIME.getSysex() }, { &PRM_REVERB_TIME } },
  { { PRM_REVERB_PREDELAY.getSysex() }, { &PRM_REVERB_PREDELAY } },
  { { PRM_REVERB_LOWCUT.getSysex() }, { &PRM_REVERB_LOWCUT } },
  { { PRM_REVERB_HICUT.getSysex() }, { &PRM_REVERB_HICUT } },
  { { PRM_REVERB_DENSITY.getSysex() }, { &PRM_REVERB_DENSITY } },
  { { PRM_REVERB_EFFECT_LEVEL.getSysex() }, { &PRM_REVERB_EFFECT_LEVEL } },
  { { PRM_REVERB_DIRECT_LEVEL.getSysex() }, { &PRM_REVERB_DIRECT_LEVEL } },
  { { PRM_REVERB_SPRING_COLOR.getSysex() }, { &PRM_REVERB_SPRING_COLOR } },
  { { PRM_PEDAL_FX_TYPE.getSysex() }, { &PRM_PEDAL_FX_TYPE } },
  { { PRM_PEDAL_FX_WAH_TYPE.getSysex() }, { &PRM_PEDAL_FX_WAH_TYPE } },
  { { PRM_PEDAL_FX_WAH_PEDAL_POSITION.getSysex() }, { &PRM_PEDAL_FX_WAH_PEDAL_POSITION } },
  { { PRM_PEDAL_FX_WAH_PEDAL_MIN.getSysex() }, { &PRM_PEDAL_FX_WAH_PEDAL_MIN } },
  { { PRM_PEDAL_FX_WAH_PEDAL_MAX.getSysex() }, { &PRM_PEDAL_FX_WAH_PEDAL_MAX } },
  { { PRM_PEDAL_FX_WAH_EFFECT_LEVEL.getSysex() }, { &PRM_PEDAL_FX_WAH_EFFECT_LEVEL } },
  { { PRM_PEDAL_FX_WAH_DIRECT_MIX.getSysex() }, { &PRM_PEDAL_FX_WAH_DIRECT_MIX } },
  { { PRM_PEDAL_FX_PEDAL_BEND_PITCH_MAX.getSysex() }, { &PRM_PEDAL_FX_PEDAL_BEND_PITCH_MAX } },
  { { PRM_PEDAL_FX_PEDAL_BEND_PEDAL_POS.getSysex() }, { &PRM_PEDAL_FX_PEDAL_BEND_PEDAL_POS } },
  { { PRM_PEDAL_FX_PEDAL_BEND_EFFECT_LEVEL.getSysex() }, { &PRM_PEDAL_FX_PEDAL_BEND_EFFECT_LEVEL } },
  { { PRM_PEDAL_FX_PEDAL_BEND_DIRECT_MIX.getSysex() }, { &PRM_PEDAL_FX_PEDAL_BEND_DIRECT_MIX } },
  { { PRM_PEDAL_FX_EVH95_POS.getSysex() }, { &PRM_PEDAL_FX_EVH95_POS } },
  { { PRM_PEDAL_FX_EVH95_MIN.getSysex() }, { &PRM_PEDAL_FX_EVH95_MIN } },
  { { PRM_PEDAL_FX_EVH95_MAX.getSysex() }, { &PRM_PEDAL_FX_EVH95_MAX } },
  { { PRM_PEDAL_FX_EVH95_E_LEVEL.getSysex() }, { &PRM_PEDAL_FX_EVH95_E_LEVEL } },
  { { PRM_PEDAL_FX_EVH95_D_LEVEL.getSysex() }, { &PRM_PEDAL_FX_EVH95_D_LEVEL } },
  { { PRM_SEND_RETURN_SW.getSysex() }, { &PRM_SEND_RETURN_SW } },
  { { PRM_SEND_RETURN_MODE.getSysex() }, { &PRM_SEND_RETURN_MODE } },
  { { PRM_SEND_RETURN_SEND_LEVEL.getSysex() }, { &PRM_SEND_RETURN_SEND_LEVEL } },
  { { PRM_SEND_RETURN_RETURN_LEVEL.getSysex() }, { &PRM_SEND_RETURN_RETURN_LEVEL } },
  { { PRM_NS1_SW.getSysex() }, { &PRM_NS1_SW } },
  { { PRM_NS1_THRESHOLD.getSysex() }, { &PRM_NS1_THRESHOLD } },
  { { PRM_NS1_RELEASE.getSysex() }, { &PRM_NS1_RELEASE } },
  { { PRM_MASTER_KEY.getSysex() }, { &PRM_MASTER_KEY } },
  { { PRM_CHAIN_PTN.getSysex() }, { &PRM_CHAIN_PTN } },
  { { PRM_POSITION_SEND_RETURN.getSysex() }, { &PRM_POSITION_SEND_RETURN } },
  { { PRM_POSITION_EQ.getSysex() }, { &PRM_POSITION_EQ } },
  { { PRM_POSITION_PEDAL_FX.getSysex() }, { &PRM_POSITION_PEDAL_FX } },
  { { PRM_FXBOX_ASGN_BOOSTER_G.getSysex() }, { &PRM_FXBOX_ASGN_BOOSTER_G } },
  { { PRM_FXBOX_ASGN_BOOSTER_R.getSysex() }, { &PRM_FXBOX_ASGN_BOOSTER_R } },
  { { PRM_FXBOX_ASGN_BOOSTER_Y.getSysex() }, { &PRM_FXBOX_ASGN_BOOSTER_Y } },
  { { PRM_FXBOX_ASGN_MOD_G.getSysex() }, { &PRM_FXBOX_ASGN_MOD_G } },
  { { PRM_FXBOX_ASGN_MOD_R.getSysex() }, { &PRM_FXBOX_ASGN_MOD_R } },
  { { PRM_FXBOX_ASGN_MOD_Y.getSysex() }, { &PRM_FXBOX_ASGN_MOD_Y } },
  { { PRM_FXBOX_ASGN_FX_G.getSysex() }, { &PRM_FXBOX_ASGN_FX_G } },
  { { PRM_FXBOX_ASGN_FX_R.getSysex() }, { &PRM_FXBOX_ASGN_FX_R } },
  { { PRM_FXBOX_ASGN_FX_Y.getSysex() }, { &PRM_FXBOX_ASGN_FX_Y } },
  { { PRM_FXBOX_ASGN_DELAY_G.getSysex() }, { &PRM_FXBOX_ASGN_DELAY_G } },
  { { PRM_FXBOX_ASGN_DELAY_R.getSysex() }, { &PRM_FXBOX_ASGN_DELAY_R } },
  { { PRM_FXBOX_ASGN_DELAY_Y.getSysex() }, { &PRM_FXBOX_ASGN_DELAY_Y } },
  { { PRM_FXBOX_ASGN_REVERB_G.getSysex() }, { &PRM_FXBOX_ASGN_REVERB_G } },
  { { PRM_FXBOX_ASGN_REVERB_R.getSysex() }, { &PRM_FXBOX_ASGN_REVERB_R } },
  { { PRM_FXBOX_ASGN_REVERB_Y.getSysex() }, { &PRM_FXBOX_ASGN_REVERB_Y } },
  { { PRM_FXBOX_ASGN_DELAY2_G.getSysex() }, { &PRM_FXBOX_ASGN_DELAY2_G } },
  { { PRM_FXBOX_ASGN_DELAY2_R.getSysex() }, { &PRM_FXBOX_ASGN_DELAY2_R } },
  { { PRM_FXBOX_ASGN_DELAY2_Y.getSysex() }, { &PRM_FXBOX_ASGN_DELAY2_Y } },
  { { PRM_FXBOX_DLYREV_LAYER_G.getSysex() }, { &PRM_FXBOX_DLYREV_LAYER_G } },
  { { PRM_FXBOX_DLYREV_LAYER_R.getSysex() }, { &PRM_FXBOX_DLYREV_LAYER_R } },
  { { PRM_FXBOX_DLYREV_LAYER_Y.getSysex() }, { &PRM_FXBOX_DLYREV_LAYER_Y } },
  { { PRM_PEDAL_FUNCTION_EXP_PEDAL.getSysex() }, { &PRM_PEDAL_FUNCTION_EXP_PEDAL } },
  { { PRM_PEDAL_FUNCTION_GAFC_EXP1.getSysex() }, { &PRM_PEDAL_FUNCTION_GAFC_EXP1 } },
  { { PRM_PEDAL_FUNCTION_GAFC_EXP2.getSysex() }, { &PRM_PEDAL_FUNCTION_GAFC_EXP2 } },
  { { PRM_FS_FUNCTION_GAFC_FS1.getSysex() }, { &PRM_FS_FUNCTION_GAFC_FS1 } },
  { { PRM_FS_FUNCTION_GAFC_FS2.getSysex() }, { &PRM_FS_FUNCTION_GAFC_FS2 } },
  { { PRM_CABINET_RESONANCE.getSysex() }, { &PRM_CABINET_RESONANCE } },
  { { PRM_KNOB_POS_TYPE.getSysex() }, { &PRM_KNOB_POS_TYPE } },
  { { PRM_KNOB_POS_GAIN.getSysex() }, { &PRM_KNOB_POS_GAIN } },
  { { PRM_KNOB_POS_VOLUME.getSysex() }, { &PRM_KNOB_POS_VOLUME } },
  { { PRM_KNOB_POS_BASS.getSysex() }, { &PRM_KNOB_POS_BASS } },
  { { PRM_KNOB_POS_MIDDLE.getSysex() }, { &PRM_KNOB_POS_MIDDLE } },
  { { PRM_KNOB_POS_TREBLE.getSysex() }, { &PRM_KNOB_POS_TREBLE } },
  { { PRM_KNOB_POS_PRESENCE.getSysex() }, { &PRM_KNOB_POS_PRESENCE } },
  { { PRM_KNOB_POS_BOOST.getSysex() }, { &PRM_KNOB_POS_BOOST } },
  { { PRM_KNOB_POS_MOD.getSysex() }, { &PRM_KNOB_POS_MOD } },
  { { PRM_KNOB_POS_FX.getSysex() }, { &PRM_KNOB_POS_FX } },
  { { PRM_KNOB_POS_DELAY.getSysex() }, { &PRM_KNOB_POS_DELAY } },
  { { PRM_KNOB_POS_REVERB.getSysex() }, { &PRM_KNOB_POS_REVERB } },
  { { PRM_LED_STATE_VARI.getSysex() }, { &PRM_LED_STATE_VARI } },
  { { PRM_LED_STATE_BOOST.getSysex() }, { &PRM_LED_STATE_BOOST } },
  { { PRM_LED_STATE_MOD.getSysex() }, { &PRM_LED_STATE_MOD } },
  { { PRM_LED_STATE_FX.getSysex() }, { &PRM_LED_STATE_FX } },
  { { PRM_LED_STATE_DELAY.getSysex() }, { &PRM_LED_STATE_DELAY } },
  { { PRM_LED_STATE_REVERB.getSysex() }, { &PRM_LED_STATE_REVERB } },
  { { PRM_KNOB_ASSIGN_BOOSTER.getSysex() }, { &PRM_KNOB_ASSIGN_BOOSTER } },
  { { PRM_KNOB_ASSIGN_DELAY.getSysex() }, { &PRM_KNOB_ASSIGN_DELAY } },
  { { PRM_KNOB_ASSIGN_REVERB.getSysex() }, { &PRM_KNOB_ASSIGN_REVERB } },
  { { PRM_KNOB_ASSIGN_CHORUS.getSysex() }, { &PRM_KNOB_ASSIGN_CHORUS } },
  { { PRM_KNOB_ASSIGN_FLANGER.getSysex() }, { &PRM_KNOB_ASSIGN_FLANGER } },
  { { PRM_KNOB_ASSIGN_PHASER.getSysex() }, { &PRM_KNOB_ASSIGN_PHASER } },
  { { PRM_KNOB_ASSIGN_UNI_V.getSysex() }, { &PRM_KNOB_ASSIGN_UNI_V } },
  { { PRM_KNOB_ASSIGN_TREMOLO.getSysex() }, { &PRM_KNOB_ASSIGN_TREMOLO } },
  { { PRM_KNOB_ASSIGN_VIBRATO.getSysex() }, { &PRM_KNOB_ASSIGN_VIBRATO } },
  { { PRM_KNOB_ASSIGN_ROTARY.getSysex() }, { &PRM_KNOB_ASSIGN_ROTARY } },
  { { PRM_KNOB_ASSIGN_RING_MOD.getSysex() }, { &PRM_KNOB_ASSIGN_RING_MOD } },
  { { PRM_KNOB_ASSIGN_SLOW_GEAR.getSysex() }, { &PRM_KNOB_ASSIGN_SLOW_GEAR } },
  { { PRM_KNOB_ASSIGN_SLICER.getSysex() }, { &PRM_KNOB_ASSIGN_SLICER } },
  { { PRM_KNOB_ASSIGN_COMP.getSysex() }, { &PRM_KNOB_ASSIGN_COMP } },
  { { PRM_KNOB_ASSIGN_LIMITER.getSysex() }, { &PRM_KNOB_ASSIGN_LIMITER } },
  { { PRM_KNOB_ASSIGN_T_WAH.getSysex() }, { &PRM_KNOB_ASSIGN_T_WAH } },
  { { PRM_KNOB_ASSIGN_AUTO_WAH.getSysex() }, { &PRM_KNOB_ASSIGN_AUTO_WAH } },
  { { PRM_KNOB_ASSIGN_PEDAL_WAH.getSysex() }, { &PRM_KNOB_ASSIGN_PEDAL_WAH } },
  { { PRM_KNOB_ASSIGN_GEQ.getSysex() }, { &PRM_KNOB_ASSIGN_GEQ } },
  { { PRM_KNOB_ASSIGN_PEQ.getSysex() }, { &PRM_KNOB_ASSIGN_PEQ } },
  { { PRM_KNOB_ASSIGN_GUITAR_SIM.getSysex() }, { &PRM_KNOB_ASSIGN_GUITAR_SIM } },
  { { PRM_KNOB_ASSIGN_AC_GUITAR_SIM.getSysex() }, { &PRM_KNOB_ASSIGN_AC_GUITAR_SIM } },
  { { PRM_KNOB_ASSIGN_AC_PROCESSOR.getSysex() }, { &PRM_KNOB_ASSIGN_AC_PROCESSOR } },
  { { PRM_KNOB_ASSIGN_WAVE_SYNTH.getSysex() }, { &PRM_KNOB_ASSIGN_WAVE_SYNTH } },
  { { PRM_KNOB_ASSIGN_OCTAVE.getSysex() }, { &PRM_KNOB_ASSIGN_OCTAVE } },
  { { PRM_KNOB_ASSIGN_PITCH_SHIFTER.getSysex() }, { &PRM_KNOB_ASSIGN_PITCH_SHIFTER } },
  { { PRM_KNOB_ASSIGN_HARMONIST.getSysex() }, { &PRM_KNOB_ASSIGN_HARMONIST } },
  { { PRM_KNOB_ASSIGN_HUMANIZER.getSysex() }, { &PRM_KNOB_ASSIGN_HUMANIZER } },
  { { PRM_KNOB_ASSIGN_EVH_PHASER.getSysex() }, { &PRM_KNOB_ASSIGN_EVH_PHASER } },
  { { PRM_KNOB_ASSIGN_EVH_FLANGER.getSysex() }, { &PRM_KNOB_ASSIGN_EVH_FLANGER } },
  { { PRM_KNOB_ASSIGN_EVH_WAH.getSysex() }, { &PRM_KNOB_ASSIGN_EVH_WAH } },
  { { PRM_KNOB_ASSIGN_DC30.getSysex() }, { &PRM_KNOB_ASSIGN_DC30 } },
  { { PRM_KNOB_ASSIGN_HEAVY_OCT.getSysex() }, { &PRM_KNOB_ASSIGN_HEAVY_OCT } },
  { { PRM_EXP_PEDAL_ASSIGN_BOOSTER_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_BOOSTER_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_BOOSTER_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_BOOSTER_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_DELAY_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_DELAY_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_DELAY_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_DELAY_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_REVERB_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_REVERB_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_REVERB_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_REVERB_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_CHORUS_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_CHORUS_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_CHORUS_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_CHORUS_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_FLANGER_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_FLANGER_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_FLANGER_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_FLANGER_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_PHASER_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_PHASER_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_PHASER_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_PHASER_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_UNI_V_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_UNI_V_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_UNI_V_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_UNI_V_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_TREMOLO_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_TREMOLO_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_TREMOLO_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_TREMOLO_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_VIBRATO_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_VIBRATO_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_VIBRATO_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_VIBRATO_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_ROTARY_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_ROTARY_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_ROTARY_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_ROTARY_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_RING_MOD_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_RING_MOD_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_RING_MOD_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_RING_MOD_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_SLOW_GEAR_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_SLOW_GEAR_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_SLOW_GEAR_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_SLOW_GEAR_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_SLICER_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_SLICER_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_SLICER_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_SLICER_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_COMP_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_COMP_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_COMP_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_COMP_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_LIMITER_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_LIMITER_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_LIMITER_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_LIMITER_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_T_WAH_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_T_WAH_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_T_WAH_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_T_WAH_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_AUTO_WAH_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_AUTO_WAH_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_AUTO_WAH_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_AUTO_WAH_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_PEDAL_WAH_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_PEDAL_WAH_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_PEDAL_WAH_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_PEDAL_WAH_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_GEQ_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_GEQ_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_GEQ_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_GEQ_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_PEQ_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_PEQ_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_PEQ_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_PEQ_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_GUITAR_SIM_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_GUITAR_SIM_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_GUITAR_SIM_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_GUITAR_SIM_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_AC_GUITAR_SIM_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_AC_GUITAR_SIM_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_AC_GUITAR_SIM_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_AC_GUITAR_SIM_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_AC_PROCESSOR_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_AC_PROCESSOR_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_AC_PROCESSOR_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_AC_PROCESSOR_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_WAVE_SYNTH_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_WAVE_SYNTH_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_WAVE_SYNTH_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_WAVE_SYNTH_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_OCTAVE_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_OCTAVE_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_OCTAVE_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_OCTAVE_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_PITCH_SHIFTER_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_PITCH_SHIFTER_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_PITCH_SHIFTER_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_PITCH_SHIFTER_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_HARMONIST_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_HARMONIST_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_HARMONIST_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_HARMONIST_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_HUMANIZER_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_HUMANIZER_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_HUMANIZER_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_HUMANIZER_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_EVH_PHASER_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_EVH_PHASER_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_EVH_PHASER_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_EVH_PHASER_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_EVH_FLANGER_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_EVH_FLANGER_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_EVH_FLANGER_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_EVH_FLANGER_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_EVH_WAH_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_EVH_WAH_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_EVH_WAH_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_EVH_WAH_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_DC30_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_DC30_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_DC30_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_DC30_MAX } },
  { { PRM_EXP_PEDAL_ASSIGN_HEAVY_OCT_MIN.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_HEAVY_OCT_MIN } },
  { { PRM_EXP_PEDAL_ASSIGN_HEAVY_OCT_MAX.getSysex() }, { &PRM_EXP_PEDAL_ASSIGN_HEAVY_OCT_MAX } }
};

void AllParams::startUpSync() {
  PROFILE_FUNCTION();
  for (auto& it : list)
    it.second->read();
}

void AllParams::runTimeSync() {
  PROFILE_FUNCTION();
  for (auto& it : overview)
    it->read();
}

// Parameter* AllParams::addressOf(char const* findName, uint32_t findAddress) {
//   for (uint16_t i = 0; i < arrSize(AllParams::list); i++) {
//     if (!strcmp(AllParams::list[i]->getName(); findName) && AllParams::list[i]->getSysex() == findAddress)
//       return AllParams::list[i];
//   }
//   // while (1) {
//   //   S_PRINT("Err - Could not find address for: ");
//   //   S_PRINT(findName);
//   //   S_PRINT(" ");
//   //   S_PRINTLN(findAddress);
//   // }
//   return nullptr;
// } //
