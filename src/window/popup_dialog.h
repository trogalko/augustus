#ifndef WINDOW_POPUP_DIALOG_H
#define WINDOW_POPUP_DIALOG_H

#include <stdint.h>

typedef enum {
    POPUP_DIALOG_CUSTOM = -2,
    POPUP_DIALOG_NONE = -1,
    POPUP_DIALOG_QUIT = 0,
    POPUP_DIALOG_OPEN_TRADE = 2,
    POPUP_DIALOG_SEND_GOODS = 4,
    POPUP_DIALOG_NOT_ENOUGH_GOODS = 6,
    POPUP_DIALOG_NO_LEGIONS_AVAILABLE = 8,
    POPUP_DIALOG_NO_LEGIONS_SELECTED = 10,
    POPUP_DIALOG_SEND_TROOPS = 12,
    POPUP_DIALOG_DELETE_FORT = 14,
    POPUP_DIALOG_DELETE_BRIDGE = 18,
    POPUP_DIALOG_EDITOR_QUIT_WITHOUT_SAVING = 20,
} popup_dialog_type;

void window_popup_dialog_show(popup_dialog_type type,
        void (*close_func)(int accepted, int checked), int has_ok_cancel_buttons);

void window_popup_dialog_show_confirmation(const uint8_t *custom_title, const uint8_t *custom_text,
    const uint8_t *checkbox_text, void (*close_func)(int accepted, int checked));

#endif // WINDOW_POPUP_DIALOG_H
