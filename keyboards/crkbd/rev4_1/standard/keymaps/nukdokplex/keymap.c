/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌────┬───────────┬───────────┬───────────┬────────────┬────────────┬────────────┐   ┌────────────┬─────────────┬────────────┬───────────┬───────────┬───────────┬────┐
//    │ no │     q     │     w     │     e     │     r      │     t      │     no     │   │     ]      │      y      │     u      │     i     │     o     │     p     │ [  │
//    ├────┼───────────┼───────────┼───────────┼────────────┼────────────┼────────────┤   ├────────────┼─────────────┼────────────┼───────────┼───────────┼───────────┼────┤
//    │ no │ LGUI_T(a) │ LALT_T(s) │ LCTL_T(d) │ LSFT_T(f)  │     g      │     no     │   │     no     │      h      │ LSFT_T(j)  │ LCTL_T(k) │ LALT_T(l) │ LGUI_T(;) │ '  │
//    ├────┼───────────┼───────────┼───────────┼────────────┼────────────┼────────────┘   └────────────┼─────────────┼────────────┼───────────┼───────────┼───────────┼────┤
//    │ no │     z     │     x     │     c     │     v      │     b      │                             │      n      │     m      │     ,     │     .     │     /     │ no │
//    └────┴───────────┴───────────┴───────────┼────────────┼────────────┼────────────┐   ┌────────────┼─────────────┼────────────┼───────────┴───────────┴───────────┴────┘
//                                             │ LT(1, esc) │ LT(2, spc) │ LT(3, tab) │   │ LT(4, ent) │ LT(5, bspc) │ LT(6, del) │
//                                             └────────────┴────────────┴────────────┘   └────────────┴─────────────┴────────────┘
[0] = LAYOUT_split_3x6_3_ex2(
  KC_NO , KC_Q         , KC_W         , KC_E         , KC_R          , KC_T          , KC_NO         ,     KC_RBRC       , KC_Y           , KC_U          , KC_I         , KC_O         , KC_P            , KC_LBRC,
  KC_NO , LGUI_T(KC_A) , LALT_T(KC_S) , LCTL_T(KC_D) , LSFT_T(KC_F)  , KC_G          , KC_NO         ,     KC_NO         , KC_H           , LSFT_T(KC_J)  , LCTL_T(KC_K) , LALT_T(KC_L) , LGUI_T(KC_SCLN) , KC_QUOT,
  KC_NO , KC_Z         , KC_X         , KC_C         , KC_V          , KC_B          ,                                     KC_N           , KC_M          , KC_COMM      , KC_DOT       , KC_SLSH         , KC_NO  ,
                                                       LT(1, KC_ESC) , LT(2, KC_SPC) , LT(3, KC_TAB) ,     LT(4, KC_ENT) , LT(5, KC_BSPC) , LT(6, KC_DEL)
),

//    ┌────┬──────┬──────┬──────┬──────┬────┬────┐   ┌──────┬──────┬──────┬──────┬──────┬───────┬────┐
//    │ no │  no  │  no  │  no  │  no  │ no │ no │   │  no  │ copy │ undo │  no  │  no  │ paste │ no │
//    ├────┼──────┼──────┼──────┼──────┼────┼────┤   ├──────┼──────┼──────┼──────┼──────┼───────┼────┤
//    │ no │ lgui │ lalt │ lctl │ lsft │ no │ no │   │  no  │ mprv │ vold │ volu │ mnxt │  no   │ no │
//    ├────┼──────┼──────┼──────┼──────┼────┼────┘   └──────┼──────┼──────┼──────┼──────┼───────┼────┤
//    │ no │  no  │  no  │  no  │  no  │ no │               │  no  │  no  │  no  │  no  │  no   │ no │
//    └────┴──────┴──────┴──────┼──────┼────┼────┐   ┌──────┼──────┼──────┼──────┴──────┴───────┴────┘
//                              │  no  │ no │ no │   │ mstp │ mply │ mute │
//                              └──────┴────┴────┘   └──────┴──────┴──────┘
[1] = LAYOUT_split_3x6_3_ex2(
  KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO ,     KC_NO   , KC_COPY , KC_UNDO , KC_NO   , KC_NO   , KC_PSTE , KC_NO,
  KC_NO , KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT , KC_NO , KC_NO ,     KC_NO   , KC_MPRV , KC_VOLD , KC_VOLU , KC_MNXT , KC_NO   , KC_NO,
  KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO ,                       KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
                                        KC_NO   , KC_NO , KC_NO ,     KC_MSTP , KC_MPLY , KC_MUTE
),

//    ┌────┬──────┬──────┬──────┬──────┬────┬────┐   ┌─────┬──────┬──────┬──────┬──────┬─────────┬────┐
//    │ no │  no  │  no  │  no  │  no  │ no │ no │   │ no  │  no  │  no  │  no  │  no  │   no    │ no │
//    ├────┼──────┼──────┼──────┼──────┼────┼────┤   ├─────┼──────┼──────┼──────┼──────┼─────────┼────┤
//    │ no │ lgui │ lalt │ lctl │ lsft │ no │ no │   │ no  │ left │ down │  up  │ rght │ CW_TOGG │ no │
//    ├────┼──────┼──────┼──────┼──────┼────┼────┘   └─────┼──────┼──────┼──────┼──────┼─────────┼────┤
//    │ no │  no  │  no  │  no  │  no  │ no │              │ home │ pgdn │ pgup │ end  │   ins   │ no │
//    └────┴──────┴──────┴──────┼──────┼────┼────┐   ┌─────┼──────┼──────┼──────┴──────┴─────────┴────┘
//                              │  no  │ no │ no │   │ ent │ bspc │ del  │
//                              └──────┴────┴────┘   └─────┴──────┴──────┘
[2] = LAYOUT_split_3x6_3_ex2(
  KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO ,     KC_NO  , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
  KC_NO , KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT , KC_NO , KC_NO ,     KC_NO  , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , CW_TOGG , KC_NO,
  KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO ,                      KC_HOME , KC_PGDN , KC_PGUP , KC_END  , KC_INS  , KC_NO,
                                        KC_NO   , KC_NO , KC_NO ,     KC_ENT , KC_BSPC , KC_DEL
),

//    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┬─────────┬─────────┬────┬────┐
//    │ RM_HUED │ RM_HUEU │ RM_SATD │ RM_SATU │ RM_VALD │ RM_VALU │ RM_NEXT │   │   no    │   no    │   no    │   no    │   no    │ no │ no │
//    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤   ├─────────┼─────────┼─────────┼─────────┼─────────┼────┼────┤
//    │ RM_SPDU │  lgui   │  lalt   │  lctl   │  lsft   │   no    │ RM_TOGG │   │   no    │ MS_LEFT │ MS_DOWN │  MS_UP  │ MS_RGHT │ no │ no │
//    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┘   └─────────┼─────────┼─────────┼─────────┼─────────┼────┼────┤
//    │ RM_SPDD │   no    │   no    │   no    │   no    │   no    │                       │ MS_WHLL │ MS_WHLD │ MS_WHLU │ MS_WHLR │ no │ no │
//    └─────────┴─────────┴─────────┴─────────┼─────────┼─────────┼─────────┐   ┌─────────┼─────────┼─────────┼─────────┴─────────┴────┴────┘
//                                            │   no    │   no    │   no    │   │ MS_BTN2 │ MS_BTN1 │ MS_BTN3 │
//                                            └─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┘
[3] = LAYOUT_split_3x6_3_ex2(
  RM_HUED , RM_HUEU , RM_SATD , RM_SATU , RM_VALD , RM_VALU , RM_NEXT ,     KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO,
  RM_SPDU , KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT , KC_NO   , RM_TOGG ,     KC_NO   , MS_LEFT , MS_DOWN , MS_UP   , MS_RGHT , KC_NO , KC_NO,
  RM_SPDD , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,                         MS_WHLL , MS_WHLD , MS_WHLU , MS_WHLR , KC_NO , KC_NO,
                                          KC_NO   , KC_NO   , KC_NO   ,     MS_BTN2 , MS_BTN1 , MS_BTN3
),

//    ┌────┬───┬───┬───┬───┬───┬────┐   ┌────┬────┬──────┬──────┬──────┬──────┬────┐
//    │ no │ { │ & │ * │ ( │ } │ no │   │ no │ no │  no  │  no  │  no  │  no  │ no │
//    ├────┼───┼───┼───┼───┼───┼────┤   ├────┼────┼──────┼──────┼──────┼──────┼────┤
//    │ no │ : │ $ │ % │ ^ │ + │ no │   │ no │ no │ lsft │ lctl │ lalt │ lgui │ no │
//    ├────┼───┼───┼───┼───┼───┼────┘   └────┼────┼──────┼──────┼──────┼──────┼────┤
//    │ no │ ~ │ ! │ @ │ # │ | │             │ no │  no  │  no  │  no  │  no  │ no │
//    └────┴───┴───┴───┼───┼───┼────┐   ┌────┼────┼──────┼──────┴──────┴──────┴────┘
//                     │ ( │ ) │ -  │   │ no │ no │  no  │
//                     └───┴───┴────┘   └────┴────┴──────┘
[4] = LAYOUT_split_3x6_3_ex2(
  KC_NO , KC_LCBR , KC_AMPR , KC_ASTR , KC_LPRN , KC_RCBR , KC_NO   ,     KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
  KC_NO , KC_COLN , KC_DLR  , KC_PERC , KC_CIRC , KC_PLUS , KC_NO   ,     KC_NO , KC_NO , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI , KC_NO,
  KC_NO , KC_TILD , KC_EXLM , KC_AT   , KC_HASH , KC_PIPE ,                       KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
                                        KC_LPRN , KC_RPRN , KC_MINS ,     KC_NO , KC_NO , KC_NO
),

//    ┌────┬───┬───┬───┬──────┬───┬──────┐   ┌────┬────┬──────┬──────┬──────┬──────┬────┐
//    │ no │ [ │ 7 │ 8 │  9   │ ] │  no  │   │ no │ no │  no  │  no  │  no  │  no  │ no │
//    ├────┼───┼───┼───┼──────┼───┼──────┤   ├────┼────┼──────┼──────┼──────┼──────┼────┤
//    │ no │ ; │ 4 │ 5 │  6   │ = │  no  │   │ no │ no │ lsft │ lctl │ lalt │ lgui │ no │
//    ├────┼───┼───┼───┼──────┼───┼──────┘   └────┼────┼──────┼──────┼──────┼──────┼────┤
//    │ no │ ` │ 1 │ 2 │  3   │ \ │               │ no │  no  │  no  │  no  │  no  │ no │
//    └────┴───┴───┴───┼──────┼───┼──────┐   ┌────┼────┼──────┼──────┴──────┴──────┴────┘
//                     │ kp_. │ 0 │ kp_- │   │ no │ no │  no  │
//                     └──────┴───┴──────┘   └────┴────┴──────┘
[5] = LAYOUT_split_3x6_3_ex2(
  KC_NO , KC_LBRC , KC_7 , KC_8 , KC_9    , KC_RBRC , KC_NO   ,     KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
  KC_NO , KC_SCLN , KC_4 , KC_5 , KC_6    , KC_EQL  , KC_NO   ,     KC_NO , KC_NO , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI , KC_NO,
  KC_NO , KC_GRV  , KC_1 , KC_2 , KC_3    , KC_BSLS ,                       KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
                                  KC_PDOT , KC_0    , KC_PMNS ,     KC_NO , KC_NO , KC_NO
),

//    ┌────┬─────┬────┬────┬─────┬──────┬───────┐   ┌────┬────┬──────┬──────┬──────┬──────┬────┐
//    │ no │ f12 │ f7 │ f8 │ f9  │ pscr │ TO(7) │   │ no │ no │  no  │  no  │  no  │  no  │ no │
//    ├────┼─────┼────┼────┼─────┼──────┼───────┤   ├────┼────┼──────┼──────┼──────┼──────┼────┤
//    │ no │ f11 │ f4 │ f5 │ f6  │ sCRL │  no   │   │ no │ no │ lsft │ lctl │ lalt │ lgui │ no │
//    ├────┼─────┼────┼────┼─────┼──────┼───────┘   └────┼────┼──────┼──────┼──────┼──────┼────┤
//    │ no │ f10 │ f1 │ f2 │ f3  │ paus │                │ no │  no  │  no  │  no  │  no  │ no │
//    └────┴─────┴────┴────┼─────┼──────┼───────┐   ┌────┼────┼──────┼──────┴──────┴──────┴────┘
//                         │ app │ spc  │  tab  │   │ no │ no │  no  │
//                         └─────┴──────┴───────┘   └────┴────┴──────┘
[6] = LAYOUT_split_3x6_3_ex2(
  KC_NO , KC_F12 , KC_F7 , KC_F8 , KC_F9  , KC_PSCR , TO(7)  ,     KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
  KC_NO , KC_F11 , KC_F4 , KC_F5 , KC_F6  , KC_SCRL , KC_NO  ,     KC_NO , KC_NO , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI , KC_NO,
  KC_NO , KC_F10 , KC_F1 , KC_F2 , KC_F3  , KC_PAUS ,                      KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO,
                                   KC_APP , KC_SPC  , KC_TAB ,     KC_NO , KC_NO , KC_NO
),

//    ┌──────┬───┬───┬───┬──────┬──────┬─────┐   ┌─────┬───────┬───────┬───┬───┬───┬───┐
//    │ esc  │ q │ w │ e │  r   │  t   │ f5  │   │ f12 │   y   │   u   │ i │ o │ p │ [ │
//    ├──────┼───┼───┼───┼──────┼──────┼─────┤   ├─────┼───────┼───────┼───┼───┼───┼───┤
//    │ tab  │ a │ s │ d │  f   │  g   │ f9  │   │ no  │   h   │   j   │ k │ l │ ; │ ' │
//    ├──────┼───┼───┼───┼──────┼──────┼─────┘   └─────┼───────┼───────┼───┼───┼───┼───┤
//    │ lsft │ z │ x │ c │  v   │  b   │               │   n   │   m   │ , │ . │ / │ ] │
//    └──────┴───┴───┴───┼──────┼──────┼─────┐   ┌─────┼───────┼───────┼───┴───┴───┴───┘
//                       │ lctl │ lalt │ spc │   │ no  │ TO(8) │ TO(0) │
//                       └──────┴──────┴─────┘   └─────┴───────┴───────┘
[7] = LAYOUT_split_3x6_3_ex2(
  KC_ESC  , KC_Q , KC_W , KC_E , KC_R    , KC_T    , KC_F5  ,     KC_F12 , KC_Y  , KC_U  , KC_I    , KC_O   , KC_P    , KC_LBRC,
  KC_TAB  , KC_A , KC_S , KC_D , KC_F    , KC_G    , KC_F9  ,     KC_NO  , KC_H  , KC_J  , KC_K    , KC_L   , KC_SCLN , KC_QUOT,
  KC_LSFT , KC_Z , KC_X , KC_C , KC_V    , KC_B    ,                       KC_N  , KC_M  , KC_COMM , KC_DOT , KC_SLSH , KC_RBRC,
                                 KC_LCTL , KC_LALT , KC_SPC ,     KC_NO  , TO(8) , TO(0)
),

//    ┌──────┬───┬───┬───┬──────┬──────┬─────┐   ┌────┬───────┬───────┬───┬──────┬──────┬──────┐
//    │ esc  │ q │ w │ e │  r   │  t   │ f5  │   │ no │   y   │   u   │ i │  o   │  p   │  [   │
//    ├──────┼───┼───┼───┼──────┼──────┼─────┤   ├────┼───────┼───────┼───┼──────┼──────┼──────┤
//    │ tab  │ a │ s │ d │  f   │  g   │ f9  │   │ no │   h   │   j   │ k │  l   │  up  │  '   │
//    ├──────┼───┼───┼───┼──────┼──────┼─────┘   └────┼───────┼───────┼───┼──────┼──────┼──────┤
//    │ lsft │ z │ x │ c │  v   │  b   │              │   n   │   m   │ , │ left │ down │ rght │
//    └──────┴───┴───┴───┼──────┼──────┼─────┐   ┌────┼───────┼───────┼───┴──────┴──────┴──────┘
//                       │ lctl │ lalt │ spc │   │ no │ TO(7) │ TO(0) │
//                       └──────┴──────┴─────┘   └────┴───────┴───────┘
[8] = LAYOUT_split_3x6_3_ex2(
  KC_ESC  , KC_Q , KC_W , KC_E , KC_R    , KC_T    , KC_F5  ,     KC_NO , KC_Y  , KC_U  , KC_I    , KC_O    , KC_P    , KC_LBRC,
  KC_TAB  , KC_A , KC_S , KC_D , KC_F    , KC_G    , KC_F9  ,     KC_NO , KC_H  , KC_J  , KC_K    , KC_L    , KC_UP   , KC_QUOT,
  KC_LSFT , KC_Z , KC_X , KC_C , KC_V    , KC_B    ,                      KC_N  , KC_M  , KC_COMM , KC_LEFT , KC_DOWN , KC_RGHT,
                                 KC_LCTL , KC_LALT , KC_SPC ,     KC_NO , TO(7) , TO(0)
)
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


