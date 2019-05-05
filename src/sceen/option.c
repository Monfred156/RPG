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
    static float volum = 100;
    static float sec_open = 0;
    sec_open += gb->clock.seconds - gb->clock.save_sec;

    for (int i = 0; i < 5; i++)
        sfText_setFillColor(gb->text[i].text, sfWhite);
    sfText_setFillColor(gb->text[TXT_SAVE].text, sfWhite);
    if (mouse_clic_button(gb, gb->button[BUTTON_RETOUR].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_RETOUR].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            gb->selecscreen.sc = gb->selecscreen.back;
        }
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_SON].rect) == 0) {
        sfText_setFillColor(gb->text[TXT_SON].text, sfRed);
        if (sec_open >= 1) {
            if (sfMouse_isButtonPressed(sfMouseLeft) && (volum == 0)) {
                sfMusic_setVolume(gb->sound[0].music, volum = 100.f);
            } else if (sfMouse_isButtonPressed(sfMouseLeft) && (volum == 100))
                sfMusic_setVolume(gb->sound[0].music, volum = 0.f);
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
}

void display_option(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[OPTION_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_BACK_MENU].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_SON].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_RETOUR].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_SAVE].text, NULL);
}