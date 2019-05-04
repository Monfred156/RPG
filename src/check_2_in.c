/*
** EPITECH PROJECT, 2018
** tavern
** File description:
** tavern
*/

#include "function.h"

int collision_between__sprite(sfSprite *sprite1, sfRectangleShape *rect)
{
    sfFloatRect f_rect = sfSprite_getGlobalBounds(sprite1);
    sfFloatRect f_rect1 = sfRectangleShape_getGlobalBounds(rect);
    sfFloatRect inter;

    if (sfFloatRect_intersects(&f_rect, &f_rect1, &inter))
        return 1;
    else
        return 0;
}

int collision_between__mob(sfSprite *sprite1, sfSprite *rect)
{
    sfFloatRect f_rect = sfSprite_getGlobalBounds(sprite1);
    sfFloatRect f_rect1 = sfSprite_getGlobalBounds(rect);
    sfFloatRect inter;

    if (sfFloatRect_intersects(&f_rect, &f_rect1, &inter))
        return 1;
    else
        return 0;
}