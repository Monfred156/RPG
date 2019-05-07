/*
** EPITECH PROJECT, 2018
** lunch_game
** File description:
** lunch_game
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void delete_save_confirm(global *gb)
{
    if (mouse_clic_button(gb, gb->button[BUTTON_SAVE_CONFIRM_Y].rect) == 0 &&
    gb->sv.save != 0 && sfMouse_isButtonPressed(sfMouseLeft)) {
        reini_all(gb);
        gb->selecscreen.sc = 5;
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_SAVE_CONFIRM_N].rect) == 0 &&
    gb->sv.save != 0 && sfMouse_isButtonPressed(sfMouseLeft))
        gb->sv.save = 0;
}

void launch_intercat(global *gb, int nb)
{
    if (mouse_clic_button(gb, gb->button[BUTTON_RETOUR].rect) == 0 &&
    gb->sv.save == 0) {
        sfText_setFillColor(gb->text[2].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            gb->selecscreen.sc = 0;
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_NEW_GAME].rect) == 0 &&
    gb->sv.save == 0) {
        sfText_setFillColor(gb->text[0].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            gb->sv.save = 1;
    }
    if (mouse_clic_button(gb, gb->button[BUTTON_CONTINUE].rect) == 0 &&
    gb->sv.save == 0) {
        sfText_setFillColor(gb->text[1].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            pressed_continued(gb);
    }
    delete_save_confirm(gb);
}

void display_launch(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
    gb->sprite[LUNCH].sprite, NULL);
    sfRenderWindow_drawText(gb->disev.window,
    gb->text[TXT_NEW_GAME].text, NULL);
    sfRenderWindow_drawText(gb->disev.window,
    gb->text[TXT_RETOUR].text, NULL);
    sfRenderWindow_drawText(gb->disev.window,
    gb->text[TXT_CONTINUER].text, NULL);
    if (gb->sv.save != 0)
        sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[SAVE_CONFIRM].sprite, NULL);
}

void manage_event_launch(global *gb)
{
    for (int i = 0; i < 3; i++)
        sfText_setFillColor(gb->text[i].text, sfWhite);
    launch_intercat(gb, 0);
    launch_intercat(gb, 1);
    launch_intercat(gb, 2);
}