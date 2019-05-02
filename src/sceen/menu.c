/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** menu
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_menu(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_PLAY].rect) == 0) {
        gb->selecscreen.sc = 1; ///BOUTON JOUER -> SAVE
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_OPTION].rect) == 0) {
        gb->selecscreen.sc = 2; ///BOUTON OPTION -> OPTION
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_QUIT].rect) == 0) {
        sfRenderWindow_close(gb->disev.window); ///QUITTER
    }

}

void display_menu(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[MENU_BACKGROUND].sprite, NULL);
    /*sfRenderWindow_drawRectangleShape(gb->disev.window, gb->button[2].rect,
        NULL);*/
}