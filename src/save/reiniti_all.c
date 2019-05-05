/*
** EPITECH PROJECT, 2018
** lunch_game
** File description:
** lunch_game
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void reini_pub(global *gb)
{
    int x = 0;
    int y = 0;
    sfVector2f pos;
    pos = sfRectangleShape_getPosition(gb->hitbox[VAL_MIN_PUB].hitbox);
    gb->sprite[TAVERN].pos.x = 240;
    gb->sprite[TAVERN].pos.y = -380;
    gb->teleport[EXIT_PUB].pos.x = 680;
    gb->teleport[EXIT_PUB].pos.y = 280;
    sfSprite_setPosition(gb->sprite[TAVERN].sprite, gb->sprite[TAVERN].pos);
    x = 380 - pos.x;
    y = 200 - pos.y;
    for (int i = VAL_MIN_PUB; i <= VAL_MAX_PUB; i++) {
        gb->hitbox[i].pos.x += x;
        gb->hitbox[i].pos.y += y;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
}

void reini_town(global *gb)
{
    int x = 0;
    int y = 0;
    sfVector2f pos;
    pos = sfRectangleShape_getPosition(gb->hitbox[VAL_MIN_TOWN].hitbox);
    gb->sprite[TOWN_BACKGROUND].pos.x = 600;
    gb->sprite[TOWN_BACKGROUND].pos.y = -600;
    gb->sprite[PORTAL].pos.x = 4270;
    gb->sprite[PORTAL].pos.y = 50;
    gb->teleport[OPEN_PORTAL].pos.x = 4300;
    gb->teleport[OPEN_PORTAL].pos.y = 100;
    gb->teleport[PUB].pos.x = 2720;
    gb->teleport[PUB].pos.y = 250;
    gb->trader.pos.x = 3150;
    gb->trader.pos.y = 200;
    sfSprite_setPosition(gb->sprite[TOWN_BACKGROUND].sprite, gb->sprite[TOWN_BACKGROUND].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    x = 600 - pos.x;
    y = 240 - pos.y;
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.x += x;
        gb->hitbox[i].pos.y += y;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
}

void reini_all(global *gb)
{
    int x = 0;
    int y = 0;
    sfVector2f pos;
    pos = sfRectangleShape_getPosition(gb->hitbox[VAL_MIN_ASH].hitbox);
    gb->sprite[ASH_BACKGROUND].pos.x = 0;
    gb->sprite[ASH_BACKGROUND].pos.y = 0;
    gb->teleport[EXIT_PORTAL].pos.x = 780;
    gb->teleport[EXIT_PORTAL].pos.y = 320;
    gb->sprite[PORTAL_BACK].pos.x = 740;
    gb->sprite[PORTAL_BACK].pos.y = 300;
    sfSprite_setPosition(gb->sprite[ASH_BACKGROUND].sprite, gb->sprite[ASH_BACKGROUND].pos);
    x = 0 - pos.x;
    y = 290 - pos.y;
    for (int i = VAL_MIN_ASH; i <= VAL_MAX_ASH; i++) {
        gb->hitbox[i].pos.x += x;
        gb->hitbox[i].pos.y += y;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
    reini_pub(gb);
    reini_town(gb);
}
