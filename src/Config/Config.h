#ifndef Config_h
  #define Config_h

  #include <Arduino.h>

// #define DEBUG_MODE
// #define MS3_DEBUG_MODE
// #define PROFILING
// #define SERIAL_DISPLAY_OVERRIDE

// #define AMP_NOT_CONNECTED

  #define Wire Wire1

  #define BAUD_RATE 6000000
  #define NUM_BTNS 14
  #define NUM_ENCS 5
  #define NUM_PARAMS 748  // TODO this needs to be 'final' checked before we finish to make sure it's right!!!
  #define CONTROLLER_TIMEOUT_LENGTH 800

  // Button Pins Config
  #define MUTE_PIN 3
  #define MODE_PIN 4
  #define VOL_PIN 5
  #define WAH_PIN 6
  #define RVB_PIN 7
  #define MOD_PIN 8
  #define FX_PIN 9
  #define DLY_PIN 10
  #define TAP_PIN 11
  #define CH1A_PIN 12
  #define CH1B_PIN 24
  #define CH2A_PIN 25
  #define CH2B_PIN 26
  #define BST_PIN 27

  // Encoder Pins Config
  #define RE_ONE_CLK 23
  #define RE_ONE_DT 22
  #define RE_ONE_SW 21

  #define RE_TWO_CLK 20
  #define RE_TWO_DT 19
  #define RE_TWO_SW 18

  #define RE_THREE_CLK 15
  #define RE_THREE_DT 14
  #define RE_THREE_SW 13

  #define RE_FOUR_CLK 41
  #define RE_FOUR_DT 40
  #define RE_FOUR_SW 39

  #define RE_FIVE_CLK 38
  #define RE_FIVE_DT 37
  #define RE_FIVE_SW 36

  // Led Num IDs
  #define MUTE_LED_INDEX 0
  #define MODE_LED_INDEX 1
  #define VOL_LED_INDEX 13
  #define WAH_LED_INDEX 12
  #define RVB_LED_INDEX 3
  #define MOD_LED_INDEX 2
  #define FX_LED_INDEX 7
  #define DLY_LED_INDEX 8
  #define TAP_LED_INDEX 11
  #define CH1A_LED_INDEX 4
  #define CH1B_LED_INDEX 5
  #define CH2A_LED_INDEX 6
  #define CH2B_LED_INDEX 9
  #define BST_LED_INDEX 10

  // Button IDs
  #define MUTE_BTN_INDEX 0
  #define MODE_BTN_INDEX 1
  #define VOL_BTN_INDEX 2
  #define WAH_BTN_INDEX 3
  #define RVB_BTN_INDEX 4
  #define MOD_BTN_INDEX 5
  #define FX_BTN_INDEX 6
  #define DLY_BTN_INDEX 7
  #define TAP_BTN_INDEX 8
  #define CH1A_BTN_INDEX 9
  #define CH1B_BTN_INDEX 10
  #define CH2A_BTN_INDEX 11
  #define CH2B_BTN_INDEX 12
  #define BST_BTN_INDEX 13

// Encoder IDs
  #define ENC1_INDEX 0
  #define ENC2_INDEX 1
  #define ENC3_INDEX 2
  #define ENC4_INDEX 3
  #define ENC5_INDEX 4

#endif

// /* Hardware Check
// S_PRINTLN((String) "Enc: " +
// digitalRead(23) + " " + digitalRead(22) + " " + digitalRead(21) + " | " +
// digitalRead(20) + " " + digitalRead(19) + " " + digitalRead(18) + " | " +
// digitalRead(15) + " " + digitalRead(14) + " " + digitalRead(13) + " | " +
// digitalRead(41) + " " + digitalRead(40) + " " + digitalRead(39) + " | " +
// digitalRead(38) + " " + digitalRead(37) + " " + digitalRead(36) + " | " +
// "But: " +
// digitalRead(MUTE_PIN) + " " + digitalRead(MODE_PIN) + " " + digitalRead(VOL_PIN) + " " +
// digitalRead(WAH_PIN) + " " +  digitalRead(RVB_PIN) + " " + digitalRead(MOD_PIN) + " " +
// digitalRead(FX_PIN) + " " +  digitalRead(DLY_PIN) + " " +  digitalRead(TAP_PIN) + " " +
// digitalRead(CH1A_PIN) + " " + digitalRead(CH1B_PIN) + " " + digitalRead(CH2A_PIN) + " " +
// digitalRead(CH2B_PIN) + " " + digitalRead(BST_PIN) + " "
// )
// */