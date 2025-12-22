#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
//    ┌───┬───────┬───────┬───────┬───────┬──────────┐           ┌──────────┬──────────┬───────┬───────┬───────┬───┐
//    │   │       │       │       │       │          │           │          │          │       │       │       │   │
//    ├───┼───────┼───────┼───────┼───────┼──────────┤           ├──────────┼──────────┼───────┼───────┼───────┼───┤
//    │   │   q   │   w   │   e   │   r   │    t     │           │    y     │    u     │   i   │   o   │   p   │   │
//    ├───┼───────┼───────┼───────┼───────┼──────────┤           ├──────────┼──────────┼───────┼───────┼───────┼───┤
//    │   │ ◆ (a) │ ⎇ (s) │ ⇧ (d) │ ⎈ (f) │    g     │           │    h     │  ⎈ (j)   │ ⇧ (k) │ ⎇ (l) │ ◆ (') │   │
//    ├───┼───────┼───────┼───────┼───────┼──────────┼───┐   ┌───┼──────────┼──────────┼───────┼───────┼───────┼───┤
//    │   │   z   │   x   │   c   │   v   │    b     │   │   │   │    n     │    m     │   ,   │   .   │   /   │   │
//    └───┴───────┴───────┼───────┼───────┼──────────┼───┤   ├───┼──────────┼──────────┼───────┼───────┴───────┴───┘
//                        │       │   ⎋   │ LT(1, ␣) │ ⇥ │   │ ⏎ │ LT(2, ⌫) │ LT(3, ⌦) │       │
//                        └───────┴───────┴──────────┴───┘   └───┴──────────┴──────────┴───────┘
  KC_NO , KC_NO        , KC_NO        , KC_NO        , KC_NO        , KC_NO         ,                       KC_NO          , KC_NO         , KC_NO        , KC_NO        , KC_NO           , KC_NO,
  KC_NO , KC_Q         , KC_W         , KC_E         , KC_R         , KC_T          ,                       KC_Y           , KC_U          , KC_I         , KC_O         , KC_P            , KC_NO,
  KC_NO , LGUI_T(KC_A) , LALT_T(KC_S) , LSFT_T(KC_D) , LCTL_T(KC_F) , KC_G          ,                       KC_H           , RCTL_T(KC_J)  , RSFT_T(KC_K) , RALT_T(KC_L) , RGUI_T(KC_QUOT) , KC_NO,
  KC_NO , KC_Z         , KC_X         , KC_C         , KC_V         , KC_B          , KC_NO  ,     KC_NO  , KC_N           , KC_M          , KC_COMM      , KC_DOT       , KC_SLSH         , KC_NO,
                                        KC_NO        , KC_ESC       , LT(1, KC_SPC) , KC_TAB ,     KC_ENT , LT(2, KC_BSPC) , LT(3, KC_DEL) , KC_NO
),

[1] = LAYOUT(
//    ┌───┬───┬───┬───┬───┬───┐           ┌─────┬──────┬──────┬──────┬─────┬───┐
//    │   │   │   │   │   │   │           │     │      │      │      │     │   │
//    ├───┼───┼───┼───┼───┼───┤           ├─────┼──────┼──────┼──────┼─────┼───┤
//    │   │   │   │   │   │   │           │    │     │     │     │    │   │
//    ├───┼───┼───┼───┼───┼───┤           ├─────┼──────┼──────┼──────┼─────┼───┤
//    │   │ ◆ │ ⎇ │ ⇧ │ ⎈ │   │           │    │  ←   │  ↓   │  ↑   │  →  │   │
//    ├───┼───┼───┼───┼───┼───┼───┐   ┌───┼─────┼──────┼──────┼──────┼─────┼───┤
//    │   │   │   │   │   │   │   │   │   │ Ins │ Home │ Pg ↓ │ Pg ↑ │ End │   │
//    └───┴───┴───┼───┼───┼───┼───┤   ├───┼─────┼──────┼──────┼──────┴─────┴───┘
//                │   │ ⎋ │   │ ⇥ │   │ ⏎ │  ⌫  │  ⌦   │      │
//                └───┴───┴───┴───┘   └───┴─────┴──────┴──────┘
  KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO ,                       KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
  KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO ,                       KC_MUTE , KC_MPRV , KC_VOLD , KC_VOLU , KC_MNXT , KC_NO,
  KC_NO , KC_RGUI , KC_RALT , KC_RSFT , KC_RCTL , KC_NO ,                       KC_MPLY , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_NO,
  KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO  ,     KC_NO  , KC_INS  , KC_HOME , KC_PGDN , KC_PGUP , KC_END  , KC_NO,
                              KC_NO   , KC_ESC  , KC_NO , KC_TAB ,     KC_ENT , KC_BSPC , KC_DEL  , KC_NO
),

[2] = LAYOUT(
//    ┌───┬───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┬───┐
//    │   │   │   │   │   │   │           │   │   │   │   │   │   │
//    ├───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┤
//    │   │ [ │ 7 │ 8 │ 9 │ ] │           │   │   │   │   │   │   │
//    ├───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┤
//    │   │ ; │ 4 │ 5 │ 6 │ = │           │   │ ⎈ │ ⇧ │ ⎇ │ ◆ │   │
//    ├───┼───┼───┼───┼───┼───┼───┐   ┌───┼───┼───┼───┼───┼───┼───┤
//    │   │ ` │ 1 │ 2 │ 3 │ \ │   │   │   │   │   │   │   │   │   │
//    └───┴───┴───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┴───┴───┘
//                │   │   │ 0 │ - │   │   │   │   │   │
//                └───┴───┴───┴───┘   └───┴───┴───┴───┘
  KC_NO , KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO   ,                       KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
  KC_NO , KC_LBRC , KC_7  , KC_8  , KC_9  , KC_RBRC ,                       KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
  KC_NO , KC_SCLN , KC_4  , KC_5  , KC_6  , KC_EQL  ,                       KC_NO , KC_RCTL , KC_RSFT , KC_RALT , KC_RGUI , KC_NO,
  KC_NO , KC_GRV  , KC_1  , KC_2  , KC_3  , KC_BSLS , KC_NO   ,     KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
                            KC_NO , KC_NO , KC_0    , KC_MINS ,     KC_NO , KC_NO , KC_NO   , KC_NO
),

[3] = LAYOUT(
//    ┌───┬─────┬────┬────┬───────┬───┐           ┌───┬───┬───┬───┬───┬───┐
//    │   │     │    │    │       │   │           │   │   │   │   │   │   │
//    ├───┼─────┼────┼────┼───────┼───┤           ├───┼───┼───┼───┼───┼───┤
//    │   │ f12 │ f7 │ f8 │  f9   │ ⎘ │           │   │   │   │   │   │   │
//    ├───┼─────┼────┼────┼───────┼───┤           ├───┼───┼───┼───┼───┼───┤
//    │   │ f11 │ f4 │ f5 │  f6   │ ⤓ │           │   │ ⎈ │ ⇧ │ ⎇ │ ◆ │   │
//    ├───┼─────┼────┼────┼───────┼───┼───┐   ┌───┼───┼───┼───┼───┼───┼───┤
//    │   │ f10 │ f1 │ f2 │  f3   │ ‖ │   │   │   │   │   │   │   │   │   │
//    └───┴─────┴────┼────┼───────┼───┼───┤   ├───┼───┼───┼───┼───┴───┴───┘
//                   │    │ DF(4) │ ␣ │ ⇥ │   │   │   │   │   │
//                   └────┴───────┴───┴───┘   └───┴───┴───┴───┘
  KC_NO , KC_NO  , KC_NO , KC_NO , KC_NO , KC_NO   ,                      KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
  KC_NO , KC_F12 , KC_F7 , KC_F8 , KC_F9 , KC_PSCR ,                      KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
  KC_NO , KC_F11 , KC_F4 , KC_F5 , KC_F6 , KC_SCRL ,                      KC_NO , KC_RCTL , KC_RSFT , KC_RALT , KC_RGUI , KC_NO,
  KC_NO , KC_F10 , KC_F1 , KC_F2 , KC_F3 , KC_PAUS , KC_NO  ,     KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
                           KC_NO , DF(4) , KC_SPC  , KC_TAB ,     KC_NO , KC_NO , KC_NO   , KC_NO
),

[4] = LAYOUT(
//    ┌───┬───┬───┬───┬───┬───┐           ┌───┬───────┬───┬───┬───┬───┐
//    │   │   │   │   │   │   │           │   │       │   │   │   │   │
//    ├───┼───┼───┼───┼───┼───┤           ├───┼───────┼───┼───┼───┼───┤
//    │ ⇧ │ q │ w │ e │ r │ t │           │ y │   u   │ i │ o │ p │ ⇧ │
//    ├───┼───┼───┼───┼───┼───┤           ├───┼───────┼───┼───┼───┼───┤
//    │ ⎈ │ a │ s │ d │ f │ g │           │ h │   j   │ k │ l │ ' │ ⎈ │
//    ├───┼───┼───┼───┼───┼───┼───┐   ┌───┼───┼───────┼───┼───┼───┼───┤
//    │ ⎇ │ z │ x │ c │ v │ b │   │   │   │ n │   m   │ , │ . │ / │ ⎇ │
//    └───┴───┴───┼───┼───┼───┼───┤   ├───┼───┼───────┼───┼───┴───┴───┘
//                │   │ ⎋ │ ␣ │ ⇥ │   │ ⏎ │ ⌫ │ DF(0) │   │
//                └───┴───┴───┴───┘   └───┴───┴───────┴───┘
  KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO  ,                       KC_NO   , KC_NO , KC_NO   , KC_NO  , KC_NO   , KC_NO  ,
  KC_LSFT , KC_Q  , KC_W  , KC_E  , KC_R   , KC_T   ,                       KC_Y    , KC_U  , KC_I    , KC_O   , KC_P    , KC_RSFT,
  KC_LCTL , KC_A  , KC_S  , KC_D  , KC_F   , KC_G   ,                       KC_H    , KC_J  , KC_K    , KC_L   , KC_QUOT , KC_RCTL,
  KC_LALT , KC_Z  , KC_X  , KC_C  , KC_V   , KC_B   , KC_NO  ,     KC_NO  , KC_N    , KC_M  , KC_COMM , KC_DOT , KC_SLSH , KC_RALT,
                            KC_NO , KC_ESC , KC_SPC , KC_TAB ,     KC_ENT , KC_BSPC , DF(0) , KC_NO
)
};
