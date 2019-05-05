/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

int check_hitbox_up(global *gb, sfSprite *sprite, float time_sec, int
*limit_value)
{
    sfFloatRect hero = sfSprite_getGlobalBounds(sprite);
    hero.top -= time_sec * 0.9;

    for (int i = limit_value[0]; i <= limit_value[1]; i++) {
        sfFloatRect hitbox = sfRectangleShape_getGlobalBounds(gb->hitbox[i]
            .hitbox);
        if (hero.top >= hitbox.top && hero.top <= hitbox.top + hitbox.height
        && hero.left + hero.width >= hitbox.left && hero.left <= hitbox.left
        + hitbox.width)
            return 1;
    }
    return 0;
}

int check_hitbox_right(global *gb, sfSprite *sprite, float time_sec, int
*limit_value)
{
    sfFloatRect hero = sfSprite_getGlobalBounds(sprite);
    hero.left += time_sec * 0.9;

    for (int i = limit_value[0]; i <= limit_value[1]; i++) {
        sfFloatRect hitbox = sfRectangleShape_getGlobalBounds(gb->hitbox[i]
                .hitbox);
        if (hero.left + hero.width >= hitbox.left && hero.left + hero.width <=
        hitbox.left + hitbox.width
            && hero.top + hero.height >= hitbox.top && hero.top <= hitbox.top +
            hitbox.height)
            return 1;
    }
    return 0;
}

int check_hitbox_down(global *gb, sfSprite *sprite, float time_sec, int
*limit_value)
{
    sfFloatRect hero = sfSprite_getGlobalBounds(sprite);
    hero.top += time_sec * 0.9;

    for (int i = limit_value[0]; i <= limit_value[1]; i++) {
        sfFloatRect hitbox = sfRectangleShape_getGlobalBounds(gb->hitbox[i]
                .hitbox);
        if (hero.top + hero.height >= hitbox.top && hero.top + hero.height <=
        hitbox.top + hitbox.height
            && hero.left + hero.width >= hitbox.left && hero.left <= hitbox.left
            + hitbox.width)
            return 1;
    }
    return 0;
}

int check_hitbox_left(global *gb, sfSprite *sprite, float time_sec, int
*limit_value)
{
    sfFloatRect hero = sfSprite_getGlobalBounds(sprite);
    hero.left -= time_sec * 0.9;

    for (int i = limit_value[0]; i <= limit_value[1]; i++) {
        sfFloatRect hitbox = sfRectangleShape_getGlobalBounds(gb->hitbox[i]
                .hitbox);
        if (hero.left >= hitbox.left && hero.left <= hitbox.left + hitbox.width
            && hero.top + hero.height >= hitbox.top && hero.top <= hitbox.top +
            hitbox.height)
            return 1;
    }
    return 0;
}
