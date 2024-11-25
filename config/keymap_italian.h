/**
 * This file includes custom keycodes for the italian input language setting.
 * If you only type in english, you can delete this file and it's import.
 * If you wish to replace this file with your preferred language, use
 * the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
*/


/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ \ │   │   │   │   │   │   │   │   │   │   │ ' │ ì │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ è │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ò │ à │ ù │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │   │   │   │   │   │   │   │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define IT_BSLH GRAVE            // backslash
#define IT_SQUOT MINUS           // '
#define IT_IGRV EQUAL            // ì
// Row 2
#define IT_EGRV LBKT             // è
#define IT_PLUS SLASH            // +
// Row 3
#define IT_OGRV SEMI             // ò
#define IT_AGRV APOS             // à
#define IT_UGRV NON_US_HASH      // ù
// Row 4
#define IT_LESS NON_US_BSLH      // <
#define IT_MINUS RBKT            // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ ! │ " │ £ │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ^ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ é │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ç │ ° │ § │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define IT_PIPE LS(GRAVE)        // |
#define IT_EXCL LS(N1)           // !
#define IT_DQUOT LS(N2)          // "
#define IT_PND LS(N3)            // £
#define IT_USD LS(N4)            // $
#define IT_PERC LS(N5)           // %
#define IT_AND LS(N6)            // &
#define IT_FSLH LS(N7)           // /
#define IT_LPAR LS(N8)           // (
#define IT_RPAR LS(N9)           // )
#define IT_EQL LS(N0)            // =
#define IT_QUES LS(MINUS)        // ?
#define IT_CARET LS(EQUAL)       // ^
// Row 2
#define IT_EACU LS(LBKT)         // é
#define IT_AST LS(RBKT)          // *
// Row 3
#define IT_CCED LS(SEMI)         // ç
#define IT_DEG LS(APOS)          // °
#define IT_SECT LS(NON_US_HASH)  // §
// Row 4
#define IT_GREAT LS(NON_US_BSLH) // >
#define IT_UNDER LS(SLASH)       // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ @ │ # │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 2
#define IT_EUR RA(E)             // €
#define IT_LBKT RA(LBKT)         // [
#define IT_RBKT RA(RBKT)         // ]
// Row 3
#define IT_AT RA(SEMI)           // @
#define IT_HASH RA(APOS)         // #

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 2
#define IT_LBRC LS(RA(LBKT))     // {
#define IT_RBRC LS(RA(RBKT))     // }

/** 
 * Personalized symbols.
 * 
 * These symbols are not part of the default italian input.
 * I use a custom windows keymap to input them.
*/
#define IT_BKTK RA(MINUS)        // `
#define IT_TILDE RA(EQUAL)       // ~
#define IT_CEGR RA(LS(E))        // È

// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

//#pragma once
//#include "keymap_italian.h"
// clang-format off
/*
// Aliases
#define BR_QUOT KC_GRV  // '
#define BR_1    KC_1    // 1
#define BR_2    KC_2    // 2
#define BR_3    KC_3    // 3
#define BR_4    KC_4    // 4
#define BR_5    KC_5    // 5
#define BR_6    KC_6    // 6
#define BR_7    KC_7    // 7
#define BR_8    KC_8    // 8
#define BR_9    KC_9    // 9
#define BR_0    KC_0    // 0
#define BR_MINS KC_MINS // -
#define BR_EQL  KC_EQL  // =
#define BR_Q    KC_Q    // Q
#define BR_W    KC_W    // W
#define BR_E    KC_E    // E
#define BR_R    KC_R    // R
#define BR_T    KC_T    // T
#define BR_Y    KC_Y    // Y
#define BR_U    KC_U    // U
#define BR_I    KC_I    // I
#define BR_O    KC_O    // O
#define BR_P    KC_P    // P
#define BR_ACUT KC_LBRC // ´ (dead)
#define BR_LBRC KC_RBRC // [
#define BR_A    KC_A    // A
#define BR_S    KC_S    // S
#define BR_D    KC_D    // D
#define BR_F    KC_F    // F
#define BR_G    KC_G    // G
#define BR_H    KC_H    // H
#define BR_J    KC_J    // J
#define BR_K    KC_K    // K
#define BR_L    KC_L    // L
#define BR_CCED KC_SCLN // Ç
#define BR_TILD KC_QUOT // ~ (dead)
#define BR_RBRC KC_BSLS // ]
#define BR_BSLS KC_NUBS // (backslash)
#define BR_Z    KC_Z    // Z
#define BR_X    KC_X    // X
#define BR_C    KC_C    // C
#define BR_V    KC_V    // V
#define BR_B    KC_B    // B
#define BR_N    KC_N    // N
#define BR_M    KC_M    // M
#define BR_COMM KC_COMM // ,
#define BR_DOT  KC_DOT  // .
#define BR_SCLN KC_SLSH // ;
#define BR_SLSH KC_INT1 // /
#define BR_PDOT KC_PCMM // .
#define BR_PCMM KC_PDOT // ,
#define BR_DQUO S(BR_QUOT) // "
#define BR_EXLM S(BR_1)    // !
#define BR_AT   S(BR_2)    // @
#define BR_HASH S(BR_3)    // #
#define BR_DLR  S(BR_4)    // $
#define BR_PERC S(BR_5)    // %
#define BR_DIAE S(BR_6)    // ¨ (dead)
#define BR_AMPR S(BR_7)    // &
#define BR_ASTR S(BR_8)    // *
#define BR_LPRN S(BR_9)    // (
#define BR_RPRN S(BR_0)    // )
#define BR_UNDS S(BR_MINS) // _
#define BR_PLUS S(BR_EQL)  // +
#define BR_GRV  S(BR_ACUT) // ` (dead)
#define BR_LCBR S(BR_LBRC) // {
#define BR_CIRC S(BR_TILD) // ^ (dead)
#define BR_RCBR S(BR_RBRC) // }
#define BR_PIPE S(BR_BSLS) // |
#define BR_LABK S(BR_COMM) // <
#define BR_RABK S(BR_DOT)  // >
#define BR_COLN S(BR_SCLN) // :
#define BR_QUES S(BR_SLSH) // ?
#define BR_SUP1 ALGR(BR_1)    // ¹
#define BR_SUP2 ALGR(BR_2)    // ²
#define BR_SUP3 ALGR(BR_3)    // ³
#define BR_PND  ALGR(BR_4)    // £
#define BR_CENT ALGR(BR_5)    // ¢
#define BR_NOT  ALGR(BR_6)    // ¬
#define BR_SECT ALGR(BR_EQL)  // §
#define BR_DEG  ALGR(BR_E)    // °
#define BR_FORD ALGR(BR_LBRC) // ª
#define BR_MORD ALGR(BR_RBRC) // º
#define BR_CRUZ ALGR(BR_C)    // ₢
*/
