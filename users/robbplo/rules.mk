# Copyright 2019 Manna Harbour
# https://github.com/manna-harbour/miryoku

MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = no
AUTO_SHIFT_ENABLE = no
TAP_DANCE_ENABLE = no
CAPS_WORD_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

INTROSPECTION_KEYMAP_C = robbplo.c # keymaps

include users/robbplo/custom_rules.mk

include users/robbplo/post_rules.mk
