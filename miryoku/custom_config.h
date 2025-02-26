// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_BASE \
&kpQ,              &kpW,              &kpF,              &kpP,              &kpB,              &kpJ,              &kpL,              &kpU,              &kpY,              &kpQUOT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kpG,              &kpM,              U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
LT(U_BUTTON,&kpZ), ALGR_T(&kpX),      &kpC,              &kpD,              &kpV,              &kpK,              &kpH,              &kpCOMM,           ALGR_T(&kpDOT),    LT(U_BUTTON,&kpSLSH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kpQ,              &kpW,              &kpF,              &kpP,              &kpB,              &kpJ,              &kpL,              &kpU,              &kpY,              &kpQUOT,           \
&kpA,              &kpR,              &kpS,              &kpT,              &kpG,              &kpM,              &kpN,              &kpE,              &kpI,              &kpO,              \
&kpZ,              &kpX,              &kpC,              &kpD,              &kpV,              &kpK,              &kpH,              &kpCOMM,           &kpDOT,            &kpSLSH,           \
U_NP,              U_NP,              &kpESC,            &kpSPC,            &kpTAB,            &kpENT,            &kpBSPC,           &kpDEL,            U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kpLGUI,           &kpLALT,           &kpLSFT,           &kpLCTL,           U_NU,              U_NU,              &kpLCTL,           &kpLSFT,           &kpLALT,           &kpLGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              &kpBTN3,           &kpBTN1,           &kpBTN2,           &kpBTN2,           &kpBTN1,           &kpBTN3,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kpLGUI,           &kpLALT,           &kpLSFT,           &kpLCTL,           U_NA,              CW_TOGG,           &kpLEFT,           &kpDOWN,           &kpUP,             &kpRGHT,           \
U_NA,              &kpALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              &kpINS,            &kpHOME,           &kpPGDN,           &kpPGUP,           &kpEND,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kpENT,            &kpBSPC,           &kpDEL,            U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kpLGUI,           &kpLALT,           &kpLSFT,           &kpLCTL,           U_NA,              U_NU,              &kpMS_L,           &kpMS_D,           &kpMS_U,           &kpMS_R,           \
U_NA,              &kpALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,              U_NU,              &kpWH_L,           &kpWH_D,           &kpWH_U,           &kpWH_R,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kpBTN2,           &kpBTN1,           &kpBTN3,           U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           \
&kpLGUI,           &kpLALT,           &kpLSFT,           &kpLCTL,           U_NA,              U_NU,              &kpMPRV,           &kpVOLD,           &kpVOLU,           &kpMNXT,           \
U_NA,              &kpALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              OU_AUTO,           U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kpMSTP,           &kpMPLY,           &kpMUTE,           U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kpLBRC,           &kp7,              &kp8,              &kp9,              &kpRBRC,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
&kpSCLN,           &kp4,              &kp5,              &kp6,              &kpEQL,            U_NA,              &kpLCTL,           &kpLSFT,           &kpLALT,           &kpLGUI,           \
&kpGRV,            &kp1,              &kp2,              &kp3,              &kpBSLS,           U_NA,              TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    &kpALGR,           U_NA,              \
U_NP,              U_NP,              &kpDOT,            &kp0,              &kpMINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kpLCBR,           &kpAMPR,           &kpASTR,           &kpLPRN,           &kpRCBR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
&kpCOLN,           &kpDLR,            &kpPERC,           &kpCIRC,           &kpPLUS,           U_NA,              &kpLCTL,           &kpLSFT,           &kpLALT,           &kpLGUI,           \
&kpTILD,           &kpEXLM,           &kpAT,             &kpHASH,           &kpPIPE,           U_NA,              TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  &kpALGR,           U_NA,              \
U_NP,              U_NP,              &kpLPRN,           &kpRPRN,           &kpUNDS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kpF12,            &kpF7,             &kpF8,             &kpF9,             &kpPSCR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
&kpF11,            &kpF4,             &kpF5,             &kpF6,             &kpSCRL,           U_NA,              &kpLCTL,           &kpLSFT,           &kpLALT,           &kpLGUI,           \
&kpF10,            &kpF1,             &kpF2,             &kpF3,             &kpPAUS,           U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  &kpALGR,           U_NA,              \
U_NP,              U_NP,              &kpAPP,            &kpSPC,            &kpTAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP
