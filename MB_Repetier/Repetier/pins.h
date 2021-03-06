#ifndef PINS_H
#define PINS_H


#define ARCH_AVR 1
#define ARCH_ARM 2

#define CURRENT_CONTROL_MANUAL  1  // mechanical poti, default if not defined
#define CURRENT_CONTROL_DIGIPOT 2  // Use a digipot like RAMBO does


#if MOTHERBOARD == 35
#define KNOWN_BOARD 1
#endif

#define ORIG_X_STEP_PIN           54
#define ORIG_X_DIR_PIN            55
#define ORIG_X_ENABLE_PIN         38
#define ORIG_X_MIN_PIN            3
#define ORIG_X_MAX_PIN            2

#define ORIG_Y_STEP_PIN           60
#define ORIG_Y_DIR_PIN            61
#define ORIG_Y_ENABLE_PIN         56
#define ORIG_Y_MIN_PIN            14
#define ORIG_Y_MAX_PIN            15

#define ORIG_Z_STEP_PIN           46
#define ORIG_Z_DIR_PIN            48
#define ORIG_Z_ENABLE_PIN         62
#define ORIG_Z_MIN_PIN            18
#define ORIG_Z_MAX_PIN            19

#define ORIG_E0_STEP_PIN          26
#define ORIG_E0_DIR_PIN           28
#define ORIG_E0_ENABLE_PIN        24

#define ORIG_E1_STEP_PIN          36
#define ORIG_E1_DIR_PIN           34
#define ORIG_E1_ENABLE_PIN        30

#define ORIG_FAN_PIN              5
#define ORIG_FAN2_PIN             6

#define HEATER_BED_PIN            8
#define HEATER_0_PIN              10  
#define HEATER_1_PIN              9

#define TEMP_BED_PIN              14   
#define TEMP_0_PIN                13   
#define TEMP_1_PIN                15
#define TEMP_2_PIN                12 
#define THERMOCOUPLE_0_PIN        4  
#define THERMOCOUPLE_1_PIN        5  

#define SDPOWER                   -1
#define SDSS                      53
#define ORIG_SDCARDDETECT         49

#define LED_PIN                   -1
#define ORIG_PS_ON_PIN            12

#define E0_PINS ORIG_E0_STEP_PIN,ORIG_E0_DIR_PIN,ORIG_E0_ENABLE_PIN,
#define E1_PINS ORIG_E1_STEP_PIN,ORIG_E1_DIR_PIN,ORIG_E1_ENABLE_PIN,


#define SCK_PIN                   52
#define MISO_PIN                  50
#define MOSI_PIN                  51


#define SDSUPPORT                 true
#define SDCARDDETECTINVERTED      false
#define ORIG_SDCARDDETECT         49
#define SDSS                      53
#define LIGHT_PIN                 11


#define BEEPER_PIN                33 
#define BEEPER_TYPE               1

#endif





#ifndef CPU_ARCH  // Set default architecture
#define CPU_ARCH ARCH_AVR
#endif

#ifndef SDSSORIG
#define SDSSORIG -1
#endif

#ifndef STEPPER_CURRENT_CONTROL // Set default stepper current control if not set yet.
#define STEPPER_CURRENT_CONTROL  CURRENT_CONTROL_MANUAL
#endif

#ifndef FAN_BOARD_PIN
#define FAN_BOARD_PIN -1
#endif

#ifndef E2_PINS
#define E2_PINS
#endif

#if NUM_EXTRUDER==1
#undef E1_PINS
#define E1_PINS
#endif

#if NUM_EXTRUDER < 3
#undef E2_PINS
#define E2_PINS
#endif

#ifndef HEATER_PINS_INVERTED
#define HEATER_PINS_INVERTED 0
#endif

// Original pin assignmats to be used in configuration tool
#define X_STEP_PIN ORIG_X_STEP_PIN
#define X_DIR_PIN ORIG_X_DIR_PIN
#define X_ENABLE_PIN ORIG_X_ENABLE_PIN
#define X_MIN_PIN ORIG_X_MIN_PIN
#define X_MAX_PIN ORIG_X_MAX_PIN

#define Y_STEP_PIN ORIG_Y_STEP_PIN
#define Y_DIR_PIN ORIG_Y_DIR_PIN
#define Y_ENABLE_PIN ORIG_Y_ENABLE_PIN
#define Y_MIN_PIN ORIG_Y_MIN_PIN
#define Y_MAX_PIN ORIG_Y_MAX_PIN

#define Z_STEP_PIN ORIG_Z_STEP_PIN
#define Z_DIR_PIN ORIG_Z_DIR_PIN
#define Z_ENABLE_PIN ORIG_Z_ENABLE_PIN
#define Z_MIN_PIN ORIG_Z_MIN_PIN
#define Z_MAX_PIN ORIG_Z_MAX_PIN

#define E0_STEP_PIN ORIG_E0_STEP_PIN
#define E0_DIR_PIN ORIG_E0_DIR_PIN
#define E0_ENABLE_PIN ORIG_E0_ENABLE_PIN

#define E1_STEP_PIN ORIG_E1_STEP_PIN
#define E1_DIR_PIN ORIG_E1_DIR_PIN
#define E1_ENABLE_PIN ORIG_E1_ENABLE_PIN

#define E2_STEP_PIN ORIG_E2_STEP_PIN
#define E2_DIR_PIN ORIG_E2_DIR_PIN
#define E2_ENABLE_PIN ORIG_E2_ENABLE_PIN

#define E3_STEP_PIN ORIG_E3_STEP_PIN
#define E3_DIR_PIN ORIG_E3_DIR_PIN
#define E3_ENABLE_PIN ORIG_E3_ENABLE_PIN

#define E4_STEP_PIN ORIG_E4_STEP_PIN
#define E4_DIR_PIN ORIG_E4_DIR_PIN
#define E4_ENABLE_PIN ORIG_E4_ENABLE_PIN

#define E5_STEP_PIN ORIG_E5_STEP_PIN
#define E5_DIR_PIN ORIG_E5_DIR_PIN
#define E5_ENABLE_PIN ORIG_E5_ENABLE_PIN

#define FAN_PIN ORIG_FAN_PIN
#ifdef ORIG_FAN2_PIN
#define FAN2_PIN ORIG_FAN2_PIN
#endif

#define PS_ON_PIN ORIG_PS_ON_PIN

#ifndef ORIG_SDCARDDETECT
#define ORIG_SDCARDDETECT -1
#endif
#define SDCARDDETECT ORIG_SDCARDDETECT

#define SENSITIVE_PINS {0, 1, ORIG_X_STEP_PIN, ORIG_X_DIR_PIN, ORIG_X_ENABLE_PIN, ORIG_X_MIN_PIN, ORIG_X_MAX_PIN, \
        ORIG_Y_STEP_PIN, ORIG_Y_DIR_PIN, ORIG_Y_ENABLE_PIN, ORIG_Y_MIN_PIN, ORIG_Y_MAX_PIN, ORIG_Z_STEP_PIN,\
        ORIG_Z_DIR_PIN, ORIG_Z_ENABLE_PIN, ORIG_Z_MIN_PIN, ORIG_Z_MAX_PIN, LED_PIN, ORIG_PS_ON_PIN, \
        HEATER_0_PIN, HEATER_1_PIN, ORIG_FAN_PIN, E0_PINS E1_PINS E2_PINS TEMP_0_PIN, TEMP_1_PIN,SDSS }

