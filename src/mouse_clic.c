/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** menu
*/

#include "my.h"
#include "function.h"
#include "struct.h"

int mouse_clic_button(global *gb, sfRectangleShape *rect)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(gb->disev.window);
    sfFloatRect hitbox = sfRectangleShape_getGlobalBounds(rect);

    if (mouse.x > hitbox.left && mouse.x < hitbox.left + hitbox.width
        && mouse.y > hitbox.top && mouse.y < hitbox.top + hitbox.height)
        return 0;
    return 1;
}