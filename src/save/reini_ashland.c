/*
** EPITECH PROJECT, 2018
** lunch_game
** File description:
** lunch_game
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void reini_ashland_hitbox(global *gb)
{
    int x = 0;
    int y = 0;
    sfVector2f pos;

    pos = sfRectangleShape_getPosition(gb->hitbox[VAL_MIN_ASH].hitbox);
    x = 0 - pos.x;
    y = 290 - pos.y;
    for (int i = VAL_MIN_ASH; i <= VAL_MAX_ASH; i++) {
        gb->hitbox[i].pos.x += x;
        gb->hitbox[i].pos.y += y;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
}

void reini_ashland(global *gb)
{
    gb->sprite[ASH_BACKGROUND].pos.x = 0;
    gb->sprite[ASH_BACKGROUND].pos.y = 0;
    gb->sprite[PORTAL_BACK].pos.x = 740;
    gb->sprite[PORTAL_BACK].pos.y = 300;
    gb->teleport[EXIT_PORTAL].pos.x = 780;
    gb->teleport[EXIT_PORTAL].pos.y = 320;
    sfSprite_setPosition(gb->sprite[PORTAL_BACK].sprite,
            gb->sprite[PORTAL_BACK].pos);
    sfSprite_setPosition(gb->sprite[ASH_BACKGROUND].sprite,
            gb->sprite[ASH_BACKGROUND].pos);
    reini_ashland_hitbox(gb);
}