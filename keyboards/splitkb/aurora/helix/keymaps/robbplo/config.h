#pragma once

// some weird cherry switch support
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#define SPLIT_TRANSPORT_MIRROR // Fix for split keyboards

#undef TAPPING_TERM
#define TAPPING_TERM 200
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// Bilateral combinations patch, courtesy of sunaku
// https://sunaku.github.io/home-row-mods.html
#define BILATERAL_COMBINATIONS
#define BILATERAL_COMBINATIONS_LIMIT_CHORD_TO_N_KEYS 4 /* GUI, Alt, Ctrl, Shift */
#define BILATERAL_COMBINATIONS_ALLOW_CROSSOVER_AFTER 40 /* ms */
#define BILATERAL_COMBINATIONS_ALLOW_SAMESIDED_AFTER 500 /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_TIMEOUT 80  /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_MODMASK (~MOD_MASK_SHIFT)

#define MIRYOKU_CLIPBOARD_WIN // Control based clipboard shortcuts

#define XXX KC_NO
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,           K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,           K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,           K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,           K35, K36, K37, N38, N39 \
) \
LAYOUT( \
XXX, XXX, XXX, XXX, XXX, XXX,           XXX, XXX, XXX, XXX, XXX, XXX, \
XXX, K00, K01, K02, K03, K04,           K05, K06, K07, K08, K09, XXX, \
XXX, K10, K11, K12, K13, K14,           K15, K16, K17, K18, K19, XXX, \
XXX, K20, K21, K22, K23, K24, XXX, XXX, K25, K26, K27, K28, K29, XXX, \
XXX, XXX, XXX, XXX, K32, K33, K34, K35, K36, K37, XXX, XXX, XXX, XXX \
)



