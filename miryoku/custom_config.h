#define MIRYOKU_CLIPBOARD_WIN

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &mo U_FUN,         &mo U_NAV,         &kp SPACE,         &kp LSHFT,         &mo U_NUM,         &mo U_SYM,         U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp ESC,           U_NA,              U_NA,              &kp LA(TAB),       &kp LA(LS(TAB)),   U_UND,             U_RDO,             &kp PG_DN,         &kp PG_UP,         U_NA,              \
&sk LGUI,          &sk LALT,          &sk LSHFT,         &sk LCTRL,         &kp TAB,           &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              U_CUT,             U_CPY,             &kp BSPC,          U_PST,             &kp HOME,          &kp BSPC,          U_NA,              U_NA,              &kp DEL,           \
U_NP,              U_NP,              U_NA,              &trans,            U_NA,              &kp RET,           &kp TAB,           &kp END,           U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp PRCNT,         &morph_7,          &morph_8,         &morph_9,        &kp ASTRK,         U_NA,              U_NA,              U_NA,              U_NA,              &kp LC(LA(DEL)),   \
&kp SEMI,          &morph_4,          &morph_5,         &morph_6,        &kp EQUAL,         &kp GREATER_THAN,  &sk LCTRL,         &sk LSHFT,         &sk LALT,          &sk LGUI,          \
&kp SLASH,         &morph_1,          &morph_2,         &morph_3,        &kp PLUS,          U_NA,              &kp BSPC,          U_NA,              U_NA,              &kp DEL,           \
U_NP,              U_NP,              &kp DOT,          &morph_0,        &kp MINUS,         U_NA,              &trans,            U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp EXCL,          &kp AMPS,          &kp AT,           &kp HASH,           &kp CARET,         U_NA,              U_NA,              U_NA,              U_NA,              U_BOOT,            \
&kp COLON,         &kp LBRC,          &kp LBKT,         &kp LPAR,           &kp DLLR,          U_NA,              &sk LCTRL,         &sk LSHFT,         &sk LALT,          &sk LGUI,          \
&kp GRAVE,         &kp RBRC,          &kp RBKT,         &kp RPAR,           &kp BSLH,          U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              &kp PIPE,         &kp TILDE,          &kp UNDER,         U_NA,              U_NA,              &trans,            U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&bt BT_CLR,        U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp F7,            &kp F8,            &kp F9,            &kp F12,           \ 
&kp LGUI,          &kp LALT,          &kp LSHFT,         &kp LCTRL,         U_NA,              U_NA,              &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
&u_bt_sel_4,       &u_bt_sel_3,       &u_bt_sel_2,       &u_bt_sel_1,       &u_bt_sel_0,       U_NA,              &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              &trans,            U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP



#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            U_NA,              U_NA,              U_NA,              U_NA,              U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LSHFT,         &kp LCTRL,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          U_NA,              U_NA,              U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LSHFT,         &kp LCTRL,         U_NU,              U_NU,              &kp LCTRL,         &kp LSHFT,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LSHFT,         &kp LCTRL,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
