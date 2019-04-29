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
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb, gb->button[0]
    .rect) == 0) {
        gb->selecscreen.sc = 5; ///BOUTON JOUER -> TUTO
    }
}

void display_menu(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[0].sprite, NULL);
    sfRenderWindow_drawRectangleShape(gb->disev.window, gb->button[0].rect,
        NULL);

}