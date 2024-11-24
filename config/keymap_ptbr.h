/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ' │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ` │ [ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ç │ ~ │ ] │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │Shift│ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ ; │Shift     │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴───┴───┴───┴───┬────┬────┤
 * │Ctrl│Win │Alt │            Space                │Alt │Menu│Ctrl│
 * └────┴────┴────┴──────────────────────────────────┴────┴────┴────┘
 */





#define BR_QUOT GRAVE            // '
#define BR_1    N1               // 1
#define BR_2    N2               // 2
#define BR_3    N3               // 3
#define BR_4    N4               // 4
#define BR_5    N5               // 5
#define BR_6    N6               // 6
#define BR_7    N7               // 7
#define BR_8    N8               // 8
#define BR_9    N9               // 9
#define BR_0    N0               // 0
#define BR_MINUS MINUS           // -
#define BR_EQUAL EQUAL           // =
// Row 2
#define BR_TAB  TAB              // Tab
#define BR_Q    Q                // Q
#define BR_W    W                // W
#define BR_E    E                // E
#define BR_R    R                // R
#define BR_T    T                // T
#define BR_Y    Y                // Y
#define BR_U    U                // U
#define BR_I    I                // I
#define BR_O    O                // O
#define BR_P    P                // P
#define BR_ACCENT LBKT           // `
#define BR_LBKT RBKT             // [
// Row 3
#define BR_CAPS CAPS             // Caps Lock
#define BR_A    A                // A
#define BR_S    S                // S
#define BR_D    D                // D
#define BR_F    F                // F
#define BR_G    G                // G
#define BR_H    H                // H
#define BR_J    J                // J
#define BR_K    K                // K
#define BR_L    L                // L
#define BR_CCEDILA SEMI          // Ç
#define BR_TILDE APOS            // ~
#define BR_RBKT BSLS             // ]
// Row 4
#define BR_LSFT LSFT             // Shift
#define BR_BSLH INT1             // \
#define BR_Z    Z                // Z
#define BR_X    X                // X
#define BR_C    C                // C
#define BR_V    V                // V
#define BR_B    B                // B
#define BR_N    N                // N
#define BR_M    M                // M
#define BR_COMMA COMMA           // ,
#define BR_DOT  DOT              // .
#define BR_SEMI SLASH            // ;
// Row 5
#define BR_LCTL LCTL             // Ctrl
#define BR_LGUI LGUI             // Win (Left GUI)
#define BR_LALT LALT             // Alt (Left)
#define BR_SPACE SPC             // Space
#define BR_RALT RALT             // Alt (Right)
#define BR_MENU MENU             // Menu
#define BR_RCTL RCTL             // Ctrl (Right)

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ " │ ! │ @ │ # │ $ │ % │ ¨ │ & │ * │ ( │ ) │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │    │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │   │ < │ > │ ? │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴───┴───┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define BR_SLASH SLASH           /* / */
#define BR_DQUOT LS(GRAVE)        // "
#define BR_EXCL  LS(N1)           // !
#define BR_AT    LS(N2)           // @
#define BR_HASH  LS(N3)           // #
#define BR_USD   LS(N4)           // $
#define BR_PERC  LS(N5)           // %
#define BR_UMLT  LS(N6)           // ¨
#define BR_AND   LS(N7)           // &
#define BR_ASTR  LS(N8)           // *
#define BR_LPAR  LS(N9)           // (
#define BR_RPAR  LS(N0)           // )
#define BR_UNDER LS(MINUS)        // _
#define BR_PLUS  LS(EQUAL)        // +
// Row 2
#define BR_LCBR  LS(LBKT)         // {
#define BR_RCBR  LS(RBKT)         // }
// Row 4
#define BR_PIPE  LS(INT1)         // |
#define BR_LT    LS(COMMA)        // <
#define BR_GT    LS(DOT)          // >
#define BR_QUES  LS(SLASH)        // ?

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ª │ ¹ │ ² │ ³ │ ¢ │ ° │ ¬ │ § │ ¶ │ \ │ ~ │ ´ │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ { │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ @ │ # │ | │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴───┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define BR_FEM_ORD RA(N1)         // ª
#define BR_SUP1 RA(N2)            // ¹
#define BR_SUP2 RA(N3)            // ²
#define BR_SUP3 RA(N4)            // ³
#define BR_CENT RA(N5)            // ¢
#define BR_DEG RA(N6)             // °
#define BR_NOT  RA(N7)            // ¬
#define BR_SECT RA(N8)            // §
#define BR_PILCROW RA(N9)         // ¶
#define BR_TILDE RA(EQUAL)        // ~
#define BR_CARET LS(EQUAL)        // ^
#define BR_ACUTE RA(MINUS)        // ´
#define BR_GRAVE RA(PLUS)         // `
// Row 2
#define BR_EUR RA(E)              // €
#define BR_LCBR RA(LBKT)          // {
// Row 3
#define BR_AT RA(SEMI)            // @
#define BR_HASH RA(APOS)          // #
#define BR_PIPE RA(BSLS)          // |

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ª │ ¹ │ ² │ ³ │ ¢ │ ° │ ¬ │ § │ ¶ │ \ │ ~ │ ´ │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ [ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │   │ < │ > │ ? │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴───┴───┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 2

/**
 * Personalized symbols.
 * 
 * Esses símbolos são para layouts personalizados.
*/
#define BR_BKTK RA(MINUS)        // `

#ifndef KEYMAP_PTBR_H
#define KEYMAP_PTBR_H

// Definições únicas das teclas
#define BR_TILDE RA(EQUAL)        // ~
#define BR_ACUTE RA(MINUS)        // ´
#define BR_GRAVE RA(PLUS)         // ` 
#define BR_LCBR LS(LBKT)          // {
#define BR_RCBR LS(RBKT)          // }
#define BR_AT LS(N2)              // @
#define BR_HASH LS(N3)            // #
#define BR_PIPE LS(INT1)          // |

#endif // KEYMAP_PTBR_H
