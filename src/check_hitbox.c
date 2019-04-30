/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

int check_hitbox_up(global *gb, sfSprite *sprite)
{
    sfFloatRect hero = sfSprite_getGlobalBounds(sprite);

    for (int i = 0; gb->hitbox[i].hitbox; i++) {
        sfFloatRect hitbox = sfRectangleShape_getGlobalBounds(gb->hitbox[i]
            .hitbox);
        if (hero.top >= hitbox.top && hero.top <= hitbox.top + hitbox.height
        && hero.left + hero.width >= hitbox.left && hero.left <= hitbox.left
        + hitbox.width)
            return 1;
    }
    return 0;
}
