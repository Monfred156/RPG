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

int collision_fght__mob(int mob, global *gb)
{
    int rect1[2];
    int rect2[2];

    rect1[0] = gb->sprite[HERO].pos.x;
    rect1[1] = rect1[0] + 160;
    rect2[0] = gb->mob[mob].pos.x + 95;
    rect2[1] = rect2[0] + 88;
    if (gb->sprite[HERO].rect.top == 3600) {
        rect1[0] += 170;
        rect1[1] += 170;
    }
    if (rect1[0] < rect2[0] && rect1[1] > rect2[0])
        return (1);
    if (rect1[0] < rect2[1] && rect1[1] > rect2[1])
        return (1);
    return (0);
}

int collision__mob(int mob, global *gb)
{
    int rect1[2];
    int rect2[2];

    rect1[0] = gb->sprite[HERO].pos.x + 120;
    rect1[1] = rect1[0] + 100;
    rect2[0] = gb->mob[mob].pos.x;
    rect2[1] = rect2[0] + 300;
    if (rect1[0] < rect2[0] && rect1[1] > rect2[0] &&
    gb->mob[mob].rect.left == 600)
        return (1);
    if (rect1[0] < rect2[1] && rect1[1] > rect2[1] &&
    gb->mob[mob].rect.left == 600)
        return (1);
    if (rect1[0] > rect2[0] && rect1[1] < rect2[1] &&
    gb->mob[mob].rect.left == 600)
        return (1);
    return (0);
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