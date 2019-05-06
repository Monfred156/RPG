/*
** EPITECH PROJECT, 2018
** lunch_game
** File description:
** lunch_game
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void reini_every_hitbox(global *gb)
{
    int x = 0;
    int y = 0;
    sfVector2f pos;

    pos = sfRectangleShape_getPosition(gb->hitbox[VAL_MIN_TUTO].hitbox);
    x = 510 - pos.x;
    y = 200 - pos.y;
    for (int i = VAL_MIN_TUTO; i <= VAL_MAX_TUTO; i++) {
        gb->hitbox[i].pos.x += x;
        gb->hitbox[i].pos.y += y;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
    pos = sfRectangleShape_getPosition(gb->hitbox[VAL_MIN_PUB].hitbox);
    x = 380 - pos.x;
    y = 200 - pos.y;
    for (int i = VAL_MIN_PUB; i <= VAL_MAX_PUB; i++) {
        gb->hitbox[i].pos.x += x;
        gb->hitbox[i].pos.y += y;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
}

void reini_every_hitbox2(global *gb)
{
    int x = 0;
    int y = 0;
    sfVector2f pos;

    pos = sfRectangleShape_getPosition(gb->hitbox[VAL_MIN_TOWN].hitbox);
    x = 600 - pos.x;
    y = 240 - pos.y;
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.x += x;
        gb->hitbox[i].pos.y += y;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
}