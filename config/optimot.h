#pragma once

#include "node_free.h"

/*
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│ ² │ & │ é │ " │ ' │ ( │ - │ è │ _ │ ç │ à │ ) │ = │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │^☠️│ $ │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ * │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ ! │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define FR_2UP   GRAVE  // ²
#define FR_AMPR  N1     // &
#define FR_EACU  N2     // é
#define FR_DQT   N3     // "
#define FR_SQT   N4     // '
#define FR_LPRN  N5     // (
#define FR_MINUS N6     // -
#define FR_EGRV  N7     // è
#define FR_UNDS  N8     // _
#define FR_CCED  N9     // ç
#define FR_AGRV  N0     // à
#define FR_RPRN  MINUS  // )
#define FR_EQUAL EQUAL  // =
// Row 2
#define FR_A     Q      // A
#define FR_Z     W      // Z
#define FR_E     E      // E
#define FR_R     R      // R
#define FR_T     T      // T
#define FR_Y     Y      // Y
#define FR_U     U      // U
#define FR_I     I      // I
#define FR_O     O      // O
#define FR_P     P      // P
#define FR_CARET LBKT   // ^ (dead)
#define FR_DLR   RBKT   // $
// Row 3
#define FR_Q     A      // Q
#define FR_S     S      // S
#define FR_D     D      // D
#define FR_F     F      // F
#define FR_G     G      // G
#define FR_H     H      // H
#define FR_J     J      // J
#define FR_K     K      // K
#define FR_L     L      // L
#define FR_M     SEMI   // M
#define FR_UGRV  SQT    // ù
#define FR_ASTR  NUHS   // *
// Row 4
#define FR_LT    NUBS   // <
#define FR_W     Z      // W
#define FR_X     X      // X
#define FR_C     C      // C
#define FR_V     V      // V
#define FR_B     B      // B
#define FR_N     N      // N
#define FR_COMMA M      // ,
#define FR_SEMI  COMMA  // ;
#define FR_COLON DOT    // :
#define FR_EXCL  SLASH  // !

/* Shifted symbols
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│ ³ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ + │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │   │   │   │   │   │   │   │   │   │   │¨☠️│ £ │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │   │   │   │   │   │   │   │   │   │   │ % │ µ │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │ > │   │   │   │   │   │   │ ? │ . │ / │ § │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define FR_3UP   LS(FR_2UP)   // ³
#define FR_1     LS(FR_AMPR)  // 1
#define FR_2     LS(FR_EACU)  // 2
#define FR_3     LS(FR_DQT)   // 3
#define FR_4     LS(FR_SQT)   // 4
#define FR_5     LS(FR_LPRN)  // 5
#define FR_6     LS(FR_MINUS) // 6
#define FR_7     LS(FR_EGRV)  // 7
#define FR_8     LS(FR_UNDS)  // 8
#define FR_9     LS(FR_CCED)  // 9
#define FR_0     LS(FR_AGRV)  // 0
#define FR_DEG   LS(FR_RPRN)  // °
#define FR_PLUS  LS(FR_EQUAL) // +
// Row 2
#define FR_DIAE  LS(FR_CARET) // ¨ (dead)
#define FR_PND   LS(FR_DLR)   // £
// Row 3
#define FR_PRCNT LS(FR_UGRV) // %
#define FR_MICR  LS(FR_ASTR) // µ
// Row 4
#define FR_GT    LS(FR_LT)    // >
#define FR_QMARK LS(FR_COMMA) // ?
#define FR_DOT   LS(FR_SEMI)  // .
#define FR_SLSH  LS(FR_COLON) // /
#define FR_SECT  LS(FR_EXCL)  // §

/* AltGr symbols
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│ ¹ │   │ ~ │ # │ { │ [ │ | │ ` │ \ │ ^ │ @ │ ] │ } │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │   │   │ € │   │   │   │   │   │ œ │   │~☠️│   │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │   │   │   │   │ ’ │   │   │   │   │   │'☠️│`☠️│    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │ ≤ │ « │ » │ © │   │ ↓ │   │ ¿ │   │   │ ¡ │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define FR_1UP   RA(FR_2UP)   // ¹
#define FR_TILD  RA(FR_EACU)  // ~  /!\ win dead
#define FR_HASH  RA(FR_DQT)   // #
#define FR_LCBR  RA(FR_SQT)   // {
#define FR_LBRC  RA(FR_LPRN)  // [
#define FR_PIPE  RA(FR_MINUS) // |
#define FR_GRAVE RA(FR_EGRV)  // `  /!\ win dead
#define FR_BSLS  RA(FR_UNDS)  // backslash
#define FR_AT    RA(FR_AGRV)  // @
#define FR_RBRC  RA(FR_RPRN)  // ]
#define FR_RCBR  RA(FR_EQUAL) // }
// Row 2
#define FR_EURO  RA(FR_E)     // €
#define FR_OE    RA(FR_O)     // œ
#define FR_TILDD RA(FR_CARET) // ~ (dead)
// Row 3
#define FR_APOS  RA(FR_G)     // ’
#define FR_ACUTE RA(FR_UGRV)  // ' (dead)
#define FR_GRAVD RA(FR_ASTR)  // ` (dead)
// Row 4
#define FR_LTE   RA(FR_LT)    // ≤
#define FR_QML   RA(FR_W)     // «
#define FR_QMR   RA(FR_X)     // »
#define FR_COP   RA(FR_C)     // © (mac too)
#define FR_DARR  RA(FR_B)     // ↓
#define FR_IQM   RA(FR_COMMA) // ¿
#define FR_IEM   RA(FR_EXCL)  // ¡

/* AltGr+Shifted symbols
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
│   │   │ É │   │ — │   │   │ È │ ™ │ Ç │ À │ ≠ │ ± │       │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
│     │   │   │   │   │   │   │   │   │ Œ │   │   │   │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
│      │   │   │   │   │   │   │   │   │   │   │   │   │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
│    │ ≥ │   │   │ ® │ ← │ ↑ │ → │ … │   │   │   │          │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
│    │    │    │                        │    │    │    │    │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
// Row 1
#define FR_EACU_UP LS(RA(FR_EACU))  // É
#define FR_EMDASH  LS(RA(FR_SQT))   // —
#define FR_EGRV_UP LS(RA(FR_EGRV))  // È
#define FR_TM      LS(RA(FR_UNDS))  // ™
#define FR_CCED_UP LS(RA(FR_CCED))  // Ç
#define FR_AGRV_UP LS(RA(FR_AGRV))  // À
#define FR_DIFF    LS(RA(FR_RPRN))  // ≠
#define FR_PLUMI   LS(RA(FR_EQUAL)) // ±
// Row 2
#define FR_OE_UP   LS(RA(FR_O))     // Œ
// Row 4
#define FR_GTE     LS(RA(FR_GT))    // ≥
#define FR_RGHTS   LS(RA(FR_C))     // ®
#define FR_LARR    LS(RA(FR_V))     // ←
#define FR_UARR    LS(RA(FR_B))     // ↑
#define FR_RARR    LS(RA(FR_N))     // →
#define FR_DDD     LS(RA(FR_COMMA)) // …



#define GRAVD RA(N7)  // ` (dead)
#define TILDD RA(N2)  // ~ (dead)


/* Actions */
#define CUT   LC(FR_X)
#define COPY  LC(FR_C)
#define PASTE LC(FR_V)
#define REDO  LC(FR_Y)


/* Alternate Alphas & Symbols */
#define MACRO_ALT_CODE(name, d1, d2, d3) \
MACRO(name, \
  bindings \
    = <&macro_press &kp LALT> \
    , <&macro_tap &kp KP_N0 &kp KP_N##d1 &kp KP_N##d2 &kp KP_N##d3> \
    , <&macro_release &kp LALT> \
    ; \
)
MACRO_ALT_CODE(agrv_up, 1, 9, 2) // À
MACRO_ALT_CODE(cced_up, 1, 9, 9) // Ç
MACRO_ALT_CODE(eacu_up, 2, 0, 1) // É
MACRO_ALT_CODE(egrv_up, 2, 0, 0) // È
MACRO_ALT_CODE(oe_lo,   1, 5, 6) // œ
MACRO_ALT_CODE(oe_up,   1, 4, 0) // Œ
MACRO_ALT_CODE(grave,   0, 9, 6) // `
MACRO_ALT_CODE(tild,    1, 2, 6) // ~
MACRO_ALT_CODE(qml,     1, 7, 1) // «
MACRO_ALT_CODE(qmr,     1, 8, 7) // »
MACRO_ALT_CODE(apos,    1, 4, 6) // ’
MACRO_ALT_CODE(emdash,  1, 5, 1) // —
MACRO_ALT_CODE(ddd,     1, 3, 3) // …
MACRO_ALT_CODE(iqm,     1, 9, 1) // ¿
MACRO_ALT_CODE(iem,     1, 6, 1) // ¡
MACRO_ALT_CODE(1up,     1, 8, 5) // ¹
MACRO_ALT_CODE(3up,     1, 7, 9) // ³