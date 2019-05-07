/*
** EPITECH PROJECT, 2018
** escape
** File description:
** escape
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_esc_button2(global *gb)
{
    if (mouse_clic_button(gb, gb->button[BUTTON_RETOUR_ESC].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_CONTINUE].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            gb->selecscreen.sc = gb->selecscreen.back_back;
        }
    }
}

void manage_event_esc_button(global *gb)
{
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
    if (mouse_clic_button(gb, gb->button[BUTTON_OPTION_ESC].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_OPTION].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            gb->selecscreen.back = 3;
            gb->selecscreen.sc = 2;
        }
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_BACK_MENU].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_BACK_MENU].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            gb->selecscreen.sc = 0;
    }
}

void manage_event_esc(global *gb)
{
    manage_event_esc_button(gb);
    manage_event_esc_button2(gb);
}

void display_esc(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[OPTION_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawText(gb->disev.window,
    gb->text[TXT_BACK_MENU].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_CONTINUE].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_SAVE].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_OPTION].text,
        NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_QUIT].text, NULL);
    sfText_setFillColor(gb->text[TXT_CONTINUE].text, sfWhite);
    sfText_setFillColor(gb->text[TXT_SAVE].text, sfWhite);
    sfText_setFillColor(gb->text[TXT_OPTION].text, sfWhite);
    sfText_setFillColor(gb->text[TXT_BACK_MENU].text, sfWhite);
    sfText_setFillColor(gb->text[TXT_QUIT].text, sfWhite);
}