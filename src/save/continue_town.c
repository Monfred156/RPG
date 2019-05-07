/*
** EPITECH PROJECT, 2018
** continue
** File description:
** town.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void tp_in_town_sprite(global *gb, int posx, int posy)
{
    gb->sprite[TOWN_BACKGROUND].pos.x += posx - 600;
    gb->sprite[TOWN_BACKGROUND].pos.y += posy + 600;
    gb->sprite[PORTAL].pos.x += posx - 600;
    gb->sprite[PORTAL].pos.y += posy + 600;
    gb->sprite[PNJ_RED].pos.x += posx - 600;
    gb->sprite[PNJ_RED].pos.y += posy + 600;
    sfSprite_setPosition(gb->sprite[PNJ_RED].sprite, gb->sprite[PNJ_RED].pos);
    sfSprite_setPosition(gb->sprite[TOWN_BACKGROUND].sprite,
            gb->sprite[TOWN_BACKGROUND].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
}

void tp_in_town(global *gb, int posx, int posy)
{
    gb->teleport[OPEN_PORTAL].pos.x += posx - 600;
    gb->teleport[OPEN_PORTAL].pos.y += posy + 600;
    gb->teleport[PUB].pos.x += posx - 600;
    gb->teleport[PUB].pos.y += posy + 600;
    gb->trader.pos.x += posx - 600;
    gb->trader.pos.y += posy + 600;
    gb->quest[1].pos.x += posx - 600;
    gb->quest[1].pos.y += posy + 600;
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.x += posx - 600;
        gb->hitbox[i].pos.y += posy + 600;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
    tp_in_town_sprite(gb, posx, posy);
}