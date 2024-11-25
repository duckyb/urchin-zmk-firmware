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


#pragma once 
#include "keycodes.h"

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




#define BR_QUOT KC_GRV  // '
#define BR_MINS KC_MINS // -
#define BR_EQL  KC_EQL  // =
#define BR_ACUT KC_LBRC // ´ (dead)
#define BR_LBRC KC_RBRC // [
#define BR_CCED KC_SCLN // Ç
#define BR_TILD KC_QUOT // ~ (dead)
#define BR_RBRC KC_BSLS // ]
#define BR_BSLS KC_NUBS // (backslash)
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

