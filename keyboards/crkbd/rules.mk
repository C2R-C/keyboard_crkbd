# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = yes       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
LTO_ENABLE = yes

# if firmware size over limit, try this option
# LTO_ENABLE = yes

DEFAULT_FOLDER = crkbd/rev1

RGBLIGHT_SUPPORTED = yes
RGB_MATRIX_SUPPORTED = yes

LDFLAGS += -L$(QMK_DIR)/tmk_core/protocol/lufa/libusb_class/ -L$(QMK_DIR)/tmk_core/common/ -L$(QMK_DIR)/tmk_core/protocol/lufa/ -L$(QMK_DIR)/tmk_core/keyboard/ -lkeyboard -lcommon -llufa -Wl,-Map=$(BUILD_DIR)/$(KEYBOARD).map -Wl,--gc-sections

LDFLAGS += -L$(ROOT)/lib
