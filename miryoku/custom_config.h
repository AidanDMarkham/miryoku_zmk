// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_BASE \
&kp Q,              &kp W,              &kp F,              &kp P,              &kp B,              &kp J,              &kp L,              &kp U,              &kp Y,              &kp QUOT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,              &kp M,              U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
LT(U_BUTTON,&kp Z), ALGR_T(&kp X),      &kp C,              &kp D,              &kp V,              &kp K,              &kp H,              &kp COMM,           ALGR_T(&kp DOT),    LT(U_BUTTON,&kp SLSH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,              &kp W,              &kp F,              &kp P,              &kp B,              &kp J,              &kp L,              &kp U,              &kp Y,              &kp QUOT,           \
&kp A,              &kp R,              &kp S,              &kp T,              &kp G,              &kp M,              &kp N,              &kp E,              &kp I,              &kp O,              \
&kp Z,              &kp X,              &kp C,              &kp D,              &kp V,              &kp K,              &kp H,              &kp COMM,           &kp DOT,            &kp SLSH,           \
U_NP,              U_NP,              &kp ESC,            &kp SPC,            &kp TAB,            &kp ENT,            &kp BSPC,           &kp DEL,            U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,           &kp LALT,           &kp LSFT,           &kp LCTL,           U_NU,              U_NU,              &kp LCTL,           &kp LSFT,           &kp LALT,           &kp LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              &kp BTN3,           &kp BTN1,           &kp BTN2,           &kp BTN2,           &kp BTN1,           &kp BTN3,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,           &kp LALT,           &kp LSFT,           &kp LCTL,           U_NA,              CW_TOGG,           &kp LEFT,           &kp DOWN,           &kp UP,             &kp RGHT,           \
U_NA,              &kp ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              &kp INS,            &kp HOME,           &kp PGDN,           &kp PGUP,           &kp END,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp ENT,            &kp BSPC,           &kp DEL,            U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,           &kp LALT,           &kp LSFT,           &kp LCTL,           U_NA,              U_NU,              &kp MS_L,           &kp MS_D,           &kp MS_U,           &kp MS_R,           \
U_NA,              &kp ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,              U_NU,              &kp WH_L,           &kp WH_D,           &kp WH_U,           &kp WH_R,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp BTN2,           &kp BTN1,           &kp BTN3,           U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           \
&kp LGUI,           &kp LALT,           &kp LSFT,           &kp LCTL,           U_NA,              U_NU,              &kp MPRV,           &kp VOLD,           &kp VOLU,           &kp MNXT,           \
U_NA,              &kp ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              OU_AUTO,           U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MSTP,           &kp MPLY,           &kp MUTE,           U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBRC,           &kp 7,              &kp 8,              &kp 9,              &kp RBRC,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
&kp SCLN,           &kp 4,              &kp 5,              &kp 6,              &kp EQL,            U_NA,              &kp LCTL,           &kp LSFT,           &kp LALT,           &kp LGUI,           \
&kp GRV,            &kp 1,              &kp 2,              &kp 3,              &kp BSLS,           U_NA,              TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    &kp ALGR,           U_NA,              \
U_NP,              U_NP,              &kp DOT,            &kp 0,              &kp MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp LCBR,           &kp AMPR,           &kp ASTR,           &kp LPRN,           &kp RCBR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
&kp COLN,           &kp DLR,            &kp PERC,           &kp CIRC,           &kp PLUS,           U_NA,              &kp LCTL,           &kp LSFT,           &kp LALT,           &kp LGUI,           \
&kp TILD,           &kp EXLM,           &kp AT,             &kp HASH,           &kp PIPE,           U_NA,              TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  &kp ALGR,           U_NA,              \
U_NP,              U_NP,              &kp LPRN,           &kp RPRN,           &kp UNDS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kp F12,            &kp F7,             &kp F8,             &kp F9,             &kp PSCR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
&kp F11,            &kp F4,             &kp F5,             &kp F6,             &kp SCRL,           U_NA,              &kp LCTL,           &kp LSFT,           &kp LALT,           &kp LGUI,           \
&kp F10,            &kp F1,             &kp F2,             &kp F3,             &kp PAUS,           U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  &kp ALGR,           U_NA,              \
U_NP,              U_NP,              &kp APP,            &kp SPC,            &kp TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP
