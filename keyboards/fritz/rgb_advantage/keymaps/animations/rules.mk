ANIMATIONS_DIR = keyboards/$(KEYBOARD)/keymaps/animations

SRC += $(ANIMATIONS_DIR)/animation-utils.c
SRC += $(ANIMATIONS_DIR)/crab.c
SRC += $(ANIMATIONS_DIR)/demon.c
SRC += $(ANIMATIONS_DIR)/music-bars.c

VPATH += $(ANIMATIONS_DIR)
