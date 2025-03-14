#pragma once

/*
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│ ² │ & │ é │ " │ ' │ ( │ § │ è │ ! │ ç │ à │ ) │ - │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │^☠️ │ $ │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ µ │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ = │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define BE_2UP   GRAVE  // ²
#define BE_AMPR  N1     // &
#define BE_EACU  N2     // é
#define BE_DQT   N3     // "
#define BE_SQT   N4     // '
#define BE_LPRN  N5     // (
#define BE_SECT  N6     // §
#define BE_EGRV  N7     // è
#define BE_EXCL  N8     // !
#define BE_CCED  N9     // ç
#define BE_AGRV  N0     // à
#define BE_RPRN  MINUS  // )
#define BE_MINUS EQUAL  // -
// Row 2
#define BE_A     Q      // A
#define BE_Z     W      // Z
#define BE_E     E      // E
#define BE_R     R      // R
#define BE_T     T      // T
#define BE_Y     Y      // Y
#define BE_U     U      // U
#define BE_I     I      // I
#define BE_O     O      // O
#define BE_P     P      // P
#define BE_CARET LBKT   // ^ (dead)
#define BE_DLR   RBKT   // $
// Row 3
#define BE_Q     A      // Q
#define BE_S     S      // S
#define BE_D     D      // D
#define BE_F     F      // F
#define BE_G     G      // G
#define BE_H     H      // H
#define BE_J     J      // J
#define BE_K     K      // K
#define BE_L     L      // L
#define BE_M     SEMI   // M
#define BE_UGRV  SQT    // ù
#define BE_MICR  NUHS   // µ
// Row 4
#define BE_LT    NUBS   // <
#define BE_W     Z      // W
#define BE_X     X      // X
#define BE_C     C      // C
#define BE_V     V      // V
#define BE_B     B      // B
#define BE_N     N      // N
#define BE_COMMA M      // ,
#define BE_SEMI  COMMA  // ;
#define BE_COLON DOT    // :
#define BE_EQUAL SLASH  // =

/* Shifted symbols
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│ ³ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ _ │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │   │   │   │   │   │   │   │   │   │   │¨☠️│ * │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │   │   │   │   │   │   │   │   │   │   │ % │ £ │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │ > │   │   │   │   │   │   │ ? │ . │ / │ + │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define BE_3UP   LS(BE_2UP)   // ³
#define BE_1     LS(BE_AMPR)  // 1
#define BE_2     LS(BE_EACU)  // 2
#define BE_3     LS(BE_DQT)   // 3
#define BE_4     LS(BE_SQT)   // 4
#define BE_5     LS(BE_LPRN)  // 5
#define BE_6     LS(BE_MINUS) // 6
#define BE_7     LS(BE_EGRV)  // 7
#define BE_8     LS(BE_EXCL)  // 8
#define BE_9     LS(BE_CCED)  // 9
#define BE_0     LS(BE_AGRV)  // 0
#define BE_DEG   LS(BE_RPRN)  // °
#define BE_UNDS  LS(BE_MINUS) // _

// Row 2
#define BE_DIAE  LS(BE_CARET) // ¨ (dead)
#define BE_ASTR  LS(BE_DLR)   // *

// Row 3
#define BE_PRCNT LS(BE_UGRV)  // %
#define BE_PND   LS(BE_MICR)  // £
// Row 4
#define BE_GT    LS(BE_LT)    // >
#define BE_QMARK LS(BE_COMMA) // ?
#define BE_DOT   LS(BE_SEMI)  // .
#define BE_SLSH  LS(BE_COLON) // /
#define BE_PLUS  LS(BE_EQUAL) // +

/* AltGr symbols
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│   │ | │ @ │ # │ { │ [ │ ^ │   │   │ { │ } │   │   │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │   │   │ € │   │   │   │   │   │   │   │ [ │ ] │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │   │   │   │   │   │   │   │   │   │   │´☠️ │`☠️ │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │ \ │   │   │   │   │   │   │   │   │   │ ~ │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
// #define BE_1UP   RA(BE_2UP)    // ¹
#define BE_PIPE  RA(BE_AMPR)      // |
#define BE_AT    RA(BE_EACU)      // @
#define BE_HASH  RA(BE_DQT)       // #
#define BE_LCBR  RA(BE_SQT)       // {
// #define BE_LBRC  RA(BE_LPRN)   // [
// #define BE_TILD  RA(BE_EQUAL)  // ~
// #define BE_GRAVE RA(BE_EGRV)   // `  /!\ win dead

// #define BE_RBRC  RA(BE_RPRN)   // ]
#define BE_RCBR  RA(BE_AGRV)      // }
// Row 2
#define BE_EURO  RA(BE_E)         // €
#define BE_LBRC  RA(BE_CARET)     // [
#define BE_RBRC  RA(BE_DLR)       // ]
// Row 3
#define BE_GRAVG RA(BE_UGRV)      // ´ (dead)
#define BE_GRAVD RA(BE_MICR)      // ` (dead)
// Row 4
#define BE_BSLS  RA(BE_LT)        // "\"
#define BE_TILD  RA(BE_EQUAL)     // ~ (dead)

/* Actions */
#define WIN_CUT     LC(BE_X)
#define WIN_COPY    LC(BE_C)
#define WIN_PASTE   LC(BE_V)
#define WIN_UNDO    LC(BE_Z)
#define WIN_REDO    LC(BE_Y)
#define WIN_SAVE    LC(BE_S)
#define WIN_RELOAD  LC(LS(BE_R))

/* Alternate Alphas & Symbols */
#define MACRO_ALT_CODE(name, d1, d2, d3) \
ZMK_MACRO(name, \
  bindings \
    = <&macro_release &kp RSHFT> \
    , <&macro_press &kp LALT> \
    , <&macro_tap &kp KP_N0 &kp KP_N##d1 &kp KP_N##d2 &kp KP_N##d3> \
    , <&macro_release &kp LALT> \
    ; \
)
MACRO_ALT_CODE(win_agrv_up, 1, 9, 2) // À
MACRO_ALT_CODE(win_cced_up, 1, 9, 9) // Ç
MACRO_ALT_CODE(win_eacu_up, 2, 0, 1) // É
MACRO_ALT_CODE(win_egrv_up, 2, 0, 0) // È
MACRO_ALT_CODE(win_ugrv_up, 2, 1, 7) // Ù
MACRO_ALT_CODE(win_1up,     1, 8, 5) // ¹
MACRO_ALT_CODE(win_3up,     1, 7, 9) // ³