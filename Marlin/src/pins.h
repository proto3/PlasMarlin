/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef PINS_H
#define PINS_H

#if MB(GEN7_CUSTOM)
  #include "pins_GEN7_CUSTOM.h"
#elif MB(GEN7_12)
  #include "pins_GEN7_12.h"
#elif MB(GEN7_13)
  #include "pins_GEN7_13.h"
#elif MB(GEN7_14)
  #include "pins_GEN7_14.h"
#elif MB(CNCONTROLS_11)
  #include "pins_CNCONTROLS_11.h"
#elif MB(CNCONTROLS_12)
  #include "pins_CNCONTROLS_12.h"
#elif MB(CHEAPTRONIC)
  #include "pins_CHEAPTRONIC.h"
#elif MB(SETHI)
  #include "pins_SETHI.h"
#elif MB(RAMPS_OLD)
  #include "pins_RAMPS_OLD.h"
#elif MB(RAMPS_13_EFB)
  #define IS_RAMPS_EFB
  #include "pins_RAMPS_13.h"
#elif MB(RAMPS_13_EEB)
  #define IS_RAMPS_EEB
  #include "pins_RAMPS_13.h"
#elif MB(RAMPS_13_EFF)
  #define IS_RAMPS_EFF
  #include "pins_RAMPS_13.h"
#elif MB(RAMPS_13_EEF)
  #define IS_RAMPS_EEF
  #include "pins_RAMPS_13.h"
#elif MB(RAMPS_13_SF)
  #define IS_RAMPS_SF
  #include "pins_RAMPS_13.h"
#elif MB(RAMPS_14_EFB)
  #define IS_RAMPS_EFB
  #include "pins_RAMPS.h"
#elif MB(RAMPS_14_EEB)
  #define IS_RAMPS_EEB
  #include "pins_RAMPS.h"
#elif MB(RAMPS_14_EFF)
  #define IS_RAMPS_EFF
  #include "pins_RAMPS.h"
#elif MB(RAMPS_14_EEF)
  #define IS_RAMPS_EEF
  #include "pins_RAMPS.h"
#elif MB(RAMPS_14_SF)
  #define IS_RAMPS_SF
  #include "pins_RAMPS.h"
#elif MB(GEN6)
  #include "pins_GEN6.h"
#elif MB(GEN6_DELUXE)
  #include "pins_GEN6_DELUXE.h"
#elif MB(SANGUINOLOLU_11)
  #include "pins_SANGUINOLOLU_11.h"
#elif MB(SANGUINOLOLU_12)
  #include "pins_SANGUINOLOLU_12.h"
#elif MB(MELZI)
  #include "pins_MELZI.h"
#elif MB(STB_11)
  #include "pins_STB_11.h"
#elif MB(AZTEEG_X1)
  #include "pins_AZTEEG_X1.h"
#elif MB(MELZI_MAKR3D)
  #include "pins_MELZI_MAKR3D.h"
#elif MB(AZTEEG_X3)
  #include "pins_AZTEEG_X3.h"
#elif MB(AZTEEG_X3_PRO)
  #include "pins_AZTEEG_X3_PRO.h"
#elif MB(ULTIMAKER)
  #include "pins_ULTIMAKER.h"
#elif MB(ULTIMAKER_OLD)
  #include "pins_ULTIMAKER_OLD.h"
#elif MB(ULTIMAIN_2)
  #include "pins_ULTIMAIN_2.h"
#elif MB(3DRAG)
  #include "pins_3DRAG.h"
#elif MB(K8200)
  #include "pins_K8200.h"
#elif MB(K8400)
  #include "pins_K8400.h"
#elif MB(TEENSYLU)
  #include "pins_TEENSYLU.h"
#elif MB(RUMBA)
  #include "pins_RUMBA.h"
#elif MB(PRINTRBOARD)
  #include "pins_PRINTRBOARD.h"
#elif MB(PRINTRBOARD_REVF)
  #include "pins_PRINTRBOARD_REVF.h"
#elif MB(BRAINWAVE)
  #include "pins_BRAINWAVE.h"
#elif MB(BRAINWAVE_PRO)
  #include "pins_BRAINWAVE_PRO.h"
#elif MB(SAV_MKI)
  #include "pins_SAV_MKI.h"
#elif MB(TEENSY2)
  #include "pins_TEENSY2.h"
#elif MB(TEENSY36)
  #include "pins_TEENSY36.h"
#elif MB(GEN3_PLUS)
  #include "pins_GEN3_PLUS.h"
#elif MB(GEN3_MONOLITHIC)
  #include "pins_GEN3_MONOLITHIC.h"
#elif MB(MEGATRONICS)
  #include "pins_MEGATRONICS.h"
#elif MB(MINITRONICS)
  #include "pins_MINITRONICS.h"
#elif MB(MEGATRONICS_2)
  #include "pins_MEGATRONICS_2.h"
#elif MB(MEGATRONICS_3)
  #include "pins_MEGATRONICS_3.h"
#elif MB(OMCA_A)
  #include "pins_OMCA_A.h"
#elif MB(OMCA)
  #include "pins_OMCA.h"
#elif MB(RAMBO)
  #include "pins_RAMBO.h"
#elif MB(MINIRAMBO)
  #include "pins_MINIRAMBO.h"
#elif MB(ELEFU_3)
  #include "pins_ELEFU_3.h"
#elif MB(5DPRINT)
  #include "pins_5DPRINT.h"
#elif MB(LEAPFROG)
  #include "pins_LEAPFROG.h"
#elif MB(BAM_DICE)
  #include "pins_RAMPS.h"
#elif MB(BAM_DICE_DUE)
  #include "pins_BAM_DICE_DUE.h"
#elif MB(FELIX2)
  #include "pins_FELIX2.h"
#elif MB(MKS_BASE)
  #include "pins_MKS_BASE.h"
#elif MB(RIGIDBOARD)
  #include "pins_RIGIDBOARD.h"
#elif MB(RIGIDBOARD_V2)
  #include "pins_RIGIDBOARD_V2.h"
#elif MB(MEGACONTROLLER)
  #include "pins_MEGACONTROLLER.h"
#elif MB(BQ_ZUM_MEGA_3D)
  #include "pins_BQ_ZUM_MEGA_3D.h"
#elif MB(99)
  #include "pins_99.h"
#elif MB(AJ4P)
  #include "pins_AJ4P.h"
#elif MB(MKS_13)
  #include "pins_MKS_13.h"
#elif MB(SAINSMART_2IN1)
  #include "pins_SAINSMART_2IN1.h"
#else
  #error "Unknown MOTHERBOARD value set in Configuration.h"
#endif

// Define certain undefined pins
#ifndef X_MS1_PIN
  #define X_MS1_PIN -1
#endif
#ifndef X_MS2_PIN
  #define X_MS2_PIN -1
#endif
#ifndef Y_MS1_PIN
  #define Y_MS1_PIN -1
#endif
#ifndef Y_MS2_PIN
  #define Y_MS2_PIN -1
#endif
#ifndef Z_MS1_PIN
  #define Z_MS1_PIN -1
#endif
#ifndef Z_MS2_PIN
  #define Z_MS2_PIN -1
#endif

#ifndef SD_DETECT_PIN
  #define SD_DETECT_PIN -1
#endif
#ifndef SDPOWER
  #define SDPOWER -1
#endif
#ifndef SDSS
  #define SDSS -1
#endif
#ifndef LED_PIN
  #define LED_PIN -1
#endif
#ifndef PS_ON_PIN
  #define PS_ON_PIN -1
#endif
#ifndef KILL_PIN
  #define KILL_PIN -1
#endif
#ifndef SUICIDE_PIN
  #define SUICIDE_PIN -1
#endif

// Marlin needs to account for pins that equal -1
#define marlinAnalogInputToDigitalPin(p) ((p) == -1 ? -1 : (p) + 0xA0)

//
// Assign endstop pins for boards with only 3 connectors
//
#ifdef X_STOP_PIN
  #if X_HOME_DIR < 0
    #define X_MIN_PIN X_STOP_PIN
    #define X_MAX_PIN -1
  #else
    #define X_MIN_PIN -1
    #define X_MAX_PIN X_STOP_PIN
  #endif
#endif

#ifdef Y_STOP_PIN
  #if Y_HOME_DIR < 0
    #define Y_MIN_PIN Y_STOP_PIN
    #define Y_MAX_PIN -1
  #else
    #define Y_MIN_PIN -1
    #define Y_MAX_PIN Y_STOP_PIN
  #endif
#endif

#ifdef Z_STOP_PIN
  #if Z_HOME_DIR < 0
    #define Z_MIN_PIN Z_STOP_PIN
    #define Z_MAX_PIN -1
  #else
    #define Z_MIN_PIN -1
    #define Z_MAX_PIN Z_STOP_PIN
  #endif
#endif

//
// Disable unused endstop / probe pins
//
#if ENABLED(DISABLE_Z_MIN_PROBE_ENDSTOP) || DISABLED(Z_MIN_PROBE_ENDSTOP) // Allow code to compile regardless of Z_MIN_PROBE_ENDSTOP setting.
  #undef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN    -1
#endif

#if DISABLED(USE_XMAX_PLUG)
  #undef X_MAX_PIN
  #define X_MAX_PIN          -1
#endif

#if DISABLED(USE_YMAX_PLUG)
  #undef Y_MAX_PIN
  #define Y_MAX_PIN          -1
#endif

#if DISABLED(USE_ZMAX_PLUG)
  #undef Z_MAX_PIN
  #define Z_MAX_PIN          -1
#endif

#if DISABLED(USE_XMIN_PLUG)
  #undef X_MIN_PIN
  #define X_MIN_PIN          -1
#endif

#if DISABLED(USE_YMIN_PLUG)
  #undef Y_MIN_PIN
  #define Y_MIN_PIN          -1
#endif

#if DISABLED(USE_ZMIN_PLUG)
  #undef Z_MIN_PIN
  #define Z_MIN_PIN          -1
#endif

//
// Dual X-carriage, Dual Y, Dual Z support
//

#define _X2_PINS
#define _Y2_PINS
#define _Z2_PINS

#define SENSITIVE_PINS { 0, 1, \
    X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, \
    Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, \
    Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, Z_MIN_PROBE_PIN, \
    PS_ON_PIN, _X2_PINS _Y2_PINS _Z2_PINS \
    X_MS1_PIN, X_MS2_PIN, Y_MS1_PIN, Y_MS2_PIN, Z_MS1_PIN, Z_MS2_PIN \
  }

#define HAS_DIGIPOTSS (PIN_EXISTS(DIGIPOTSS))

#ifndef SCK_PIN
  #define SCK_PIN  SCK
#endif
#ifndef MISO_PIN
  #define MISO_PIN MISO
#endif
#ifndef MOSI_PIN
  #define MOSI_PIN MOSI
#endif
#ifndef SS_PIN
  #define SS_PIN   SS
#endif

#endif //__PINS_H
