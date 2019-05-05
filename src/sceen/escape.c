/*
** EPITECH PROJECT, 2018
** escape
** File description:
** escape
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_esc(global *gb)
{
    static float volum = 100;
    static float sec_open = 0;
    sec_open += gb->clock.seconds - gb->clock.save_sec;

    sfText_setFillColor(gb->text[TXT_RETOUR].text, sfWhite);
    sfText_setFillColor(gb->text[TXT_BACK_MENU].text, sfWhite);
    sfText_setFillColor(gb->text[TXT_SAVE].text, sfWhite);
    sfText_setFillColor(gb->text[TXT_QUIT].text, sfWhite);
    if (mouse_clic_button(gb, gb->button[BUTTON_RETOUR].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_RETOUR].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            gb->selecscreen.sc = gb->selecscreen.back;
        }
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_BACK_MENU].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_BACK_MENU].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            gb->selecscreen.sc = 0;
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_SAVE].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_SAVE].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            save_into_file(gb);
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_QUIT_ESC].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_QUIT].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            sfRenderWindow_close(gb->disev.window);
    }
}

void display_esc(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[OPTION_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_BACK_MENU].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_RETOUR].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_SAVE].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_QUIT].text, NULL);
}