#include "Strings.h"

const char* Strings::toggleNames[] = { "Off", "On" };
const char* Strings::colourNames[] = { "Green", "Red", "Yellow" };

const char* Strings::HighMidFreq[] = { "20Hz", "25Hz", "31.5Hz", "40Hz", "50Hz",
                                       "63Hz", "80Hz", "100Hz", "125Hz", "160Hz", "200Hz",
                                       "250Hz", "315Hz", "400Hz", "500Hz", "630Hz", "800Hz", "1.0kHz", "1.25kHz", "1.60kHz", "2.00kHz", "2.5kHz",
                                       "3.15kHz", "4kHz", "5kHz", "6.30kHz", "8.00kHz", "10.00kHz" };

const char* Strings::ACProTypes[] = { "Small", "Medium", "Bright", "Power" };

const char* Strings::WaveType[] = { "Saw", "Square" };

const char* Strings::Voices[] = { "1-Voice", "2-Voices" };

const char* Strings::PSMode[] = { "Fast", "Medium", "Slow", "Mono" };

const char* Strings::Harmonist[] = { "-2 Oct", "-14", "-13", "-12", "-11", "-10", "-9", "-1 Oct",
                                     "-7", "-6", "-5", "-4", "-3", "-2", "Unison", "+2", "+3", "+4", "+5", "+6",
                                     "+7", "+1 Oct", "+9", "+10", "+11", "+12", "+13", "+14", "+2 Oct", "User" };

const char* Strings::Vowels[] = { "A", "E", "I", "O", "U" };

const char* Strings::DC30Output[] = { "D+E", "D/E" };

const char* Strings::DC30Type[] = { "Chorus", "Echo" };

const char* Strings::HumanizerType[] = { "Picking", "Auto" };

const char* Strings::GitSimType[] = { "Single -> Hum", "Hum -> Single", "Hum -> Sin HTone", "Sin -> Ac Hollow", "Hum -> Ac Hollow", "Single -> Ac", "Hum -> Ac", "Piezo -> Ac" };

const char* Strings::SysEQType[] = { "Parametric EQ", "Graphic EQ 10" };
const char* Strings::AmpInOut[] = { "Amp In", "Amp Out" };
const char* Strings::PostAmpPostRev[] = { "Post-Amp", "Post-Rev" };

const char* Strings::MasterKey[] = { "Key C/Am", "Key Db/Bbm", "Key D/Bb", "Key Eb/Cm", "Key E/C#m", "Key F/Dm", "Key F#/D#m", "Key G/Em", "Key Ab/Fm", "Key A/F#m", "Key Bb/Gm", "Key B/G#m" };

const char* Strings::CompTypes[] = { "Boss Comp", "Hi-Band", "Light", "Dual-Comp",
                                     "Orange", "Fat", "Mild" };

const char* Strings::LimiterTypes[] = { "Boss Limiter", "Rack 160D", "VTG Rack U" };
const char* Strings::InOut[] = { "Input", "Output" };
const char* Strings::InputPostAmp[] = { "Input", "Post-Amp" };

const char* Strings::WahFxTypes[] = { "Pedal-Wah", "Pedal-Bend", "Wah95E" };

const char* Strings::Lim_Ratios[] = { "1:1", "1:2:1", "1:4:1", "1:6:1", "1:8:1", "2:1",
                                      "2:3:1", "2:6:1", "3:1", "3:5:1", "4:1", "5:1", "6:1", "8:1",
                                      "10:1", "12:1", "20:1", "INF:1" };

const char* Strings::TWahMode[] = { "Low Pass Filter", "Band Pass Filter" };

const char* Strings::UpDown[] = { "Up", "Down" };

const char* Strings::PedalWahTypes[] = { "Cry Wah", "VO Wah", "Fat Wah", "Light Wah", "7-String Wah", "Reso-Wah" };

const char* Strings::customBoosts[] = { "Cus Boost OD1", "Cus Boost OD2", "Cus Boost Crunch", "Cus Boost DS1",
                                        "Cus Boost DS2", "Cus Boost MT1", "Cus Boost MT2", "Cus Boost Fuzz" };
const char* Strings::SDE_Range[] = { "8.00kHz", "17.00kHz" };
const char* Strings::NormalInverse[] = { "Normal", "Inverse" };

const char* Strings::channelNames[] = { " - Panel Mode - ", "CH1A", "CH2A", "N/A", "N/A", "CH1B", "CH2B", "N/A", "N/A" };

const char* Strings::ampTypePanelNames[] = {
  "Acoustic",
  "Clean",
  "Crunch",
  "Lead",
  "Brown"
};

const char* Strings::ampTypeNames[] = {
  "Natural Clean",
  "Acoustic",
  "Combo Crunch",
  "Stack Crunch",
  "Hi-Gain Stack",
  "Power Drive",
  "Extreme Lead",
  "Core Metal",
  "Clean",
  "Clean Twin",
  "Pro-Crunch",
  "Crunch",
  "Deluxe Crunch",
  "VO Drive",
  "VO Lead",
  "Match Drive",
  "BG Lead",
  "BG Drive",
  "MS-1959 I",
  "MS-1959 I+II",
  "R-FIER Vintage",
  "R-FIER Modern",
  "T-AMP",
  "Brown",
  "Lead",
  "Custom",
  "BGNR-UB",
  "ORNG-RB",
  "Acoustic V",
  "Clean V",
  "Crunch V",
  "Lead V",
  "Brown V",
};

const char* Strings::Normal_Intelligent[] = { "Normal", "Intelligent" };

const char* Strings::PRM_FX_CHORUS_XOVER_NAMES[] = { "100Hz", "125Hz", "160Hz", "200Hz",
                                                     "250Hz", "315Hz", "400Hz", "500Hz", "630Hz", "800Hz",
                                                     "1.0kHz", "1.25kHz", "1.60kHz", "2.00kHz", "2.5kHz",
                                                     "3.15kHz", "4kHz" };

const char* Strings::PRM_REVERB_HIGHCUT_NAMES[] = { "630Hz", "800Hz", "1.0kHz", "1.25kHz", "1.60kHz", "2.00kHz", "2.5kHz",
                                                    "3.15kHz", "4kHz", "5kHz", "6.30kHz", "8.00kHz", "10.00kHz",
                                                    "12.50kHz", "Flat" };

const char* Strings::PRM_REVERB_LOWCUT_NAMES[] = { "Flat", "20Hz", "25Hz", "31.5Hz", "40Hz", "50Hz",
                                                   "63Hz", "80Hz", "100Hz", "125Hz", "160Hz", "200Hz",
                                                   "250Hz", "315Hz", "400Hz", "500Hz", "630Hz", "800Hz" };

const char* Strings::PRM_FLANGER_LOWCUT_NAMES[] = { "Flat", "50Hz", "110Hz", "165Hz", "200Hz", "280Hz",
                                                    "340Hz", "400Hz", "500Hz", "630Hz", "800Hz" };

const char* Strings::PRM_FX_PHASER_TYPE_NAMES[] = { "4-Stage", "8-Stage", "12-Stage", "Bi-Phase" };

const char* Strings::cabTypeNames[] = { "Vintage", "Modern", "Deep" };

// const char* Strings::boostTypeNames[] = { "Clean Boost", "Treble Boost", "Mid Boost", "Crunch OD", "Blues Drive", "Overdrive", "Natural OD", "Warm OD", "Turbo OD",
//                                           "Tubescreamer", "Distortion", "Fat DS", "Dist+", "Guv", "RAT", "Metal Zone", "Metal DS", "60's Fuzz", "Muff Fuzz", "Octa-Fuzz",
//                                           "N/A", "Custom Boost" };//
const char* Strings::boostTypeNames[] = {

  "Mid Boost",
  "Clean Boost",
  "Treble Boost",
  "Crunch OD",  // 03
  "Natural OD",  // 04
  "Warm OD",
  "Fat DS",
  "N/A",
  "Metal DS",
  "Octa-Fuzz",
  "Blues Drive",  // 0A
  "Overdrive",  // 0B
  "Tubescreamer",
  "Turbo OD",
  "Distortion",
  "RAT",
  "Guv",
  "Dist+",
  "Metal Zone",
  "60's Fuzz",
  "Muff Fuzz",
  "Metal Core",
  "HM-2"
};

const char* Strings::fxTypeNames[] = { "T-Wah", "Auto-Wah", "Pedal Wah", "Compressor", "Limiter", "N/A", "Graphic EQ", "Parametric EQ", "N/A",
                                       "Guitar Sim", "Slow Gear", "N/A", "Wave Synth", "N/A", "Octave", "Pitch Shifter", "Harmonizer", "N/A", "Ac Processor",
                                       "Phaser", "Flanger", "Tremolo", "Rotary", "Uni-Vibe", "N/A", "Slicer", "Vibrato", "Ring-Mod",
                                       "Humanizer", "Chorus", "N/A", "Ac Guitar Sim", "N/A", "N/A", "N/A", "Phaser P90E", "Flanger 117E", "Wah 95E", "DC30", "Heavy Octave" };

const char* Strings::delayTypeNames[] = { "Digital", "Pan", "Stereo", "Dual-Series", "Dual-Parallel", "Dual-LR", "Reverse", "Analog", "Tape Echo", "Modulate", "SDE3000" };

const char* Strings::reverbTypeNames[] = { "Ambience", "Room", "Hall2", "Hall", "Plate", "Spring", "Modulate" };

const char* Strings::lineOutMode[] = { "Record", "Live", "Blend" };

const char* Strings::seriesParallel[] = { "Series", "Parallel" };

const char* Strings::highPassFilterTypes[] = { "Flat", "-6dB/oct", "-12dB/oct", "-18dB/oct", "-24dB/oct" };

const char* Strings::EQ_Q[] = { "0.5", "1", "2", "4", "8", "16" };

const char* Strings::chainOrders[] = {
  "IN-BAMFD1D2R-OUT",
  "IN-BMAFD1D2R-OUT",
  "IN-BMFAD1D2R-OUT",
  "IN-BMFD1AD2R-OUT",
};
