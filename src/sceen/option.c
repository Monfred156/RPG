/*
** EPITECH PROJECT, 2018
** option
** File description:
** .c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_option(global *gb)
{
    for (int i = 0; i < 5; i++)
        sfText_setFillColor(gb->text[i].text, sfWhite);
    if (mouse_clic_button(gb, gb->button[BUTTON_RETOUR].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_RETOUR].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            gb->selecscreen.sc = gb->selecscreen.back;
        }
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_SON].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_SON].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
        }
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_BACK_MENU].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_BACK_MENU].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            gb->selecscreen.sc = 0;
    }
}

void display_option(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[OPTION_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_BACK_MENU].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_SON].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_RETOUR].text, NULL);
}