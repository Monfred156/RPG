/*
** EPITECH PROJECT, 2018
** lunch_game
** File description:
** lunch_game
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void reini_sprite_tuto(global *gb)
{
    gb->sprite[HERO].pos.x = 800;
    gb->sprite[HERO].pos.y = 400;
    gb->sprite[TUTO_BACKGROUND].pos.x = 550;
    gb->sprite[TUTO_BACKGROUND].pos.y = 200;
    gb->sprite[PNJ_MAJ].pos.x = 1000;
    gb->sprite[PNJ_MAJ].pos.y = 400;
    sfSprite_setPosition(gb->sprite[PNJ_MAJ].sprite, gb->sprite[PNJ_MAJ].pos);
    sfSprite_setPosition(gb->sprite[HERO].sprite, gb->sprite[HERO].pos);
    sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
}

void reini_tuto(global *gb)
{
    gb->mob[0].pos.x = 1800;
    gb->mob[0].pos.y = 900;
    gb->mob[0].life = 100;
    gb->quest[0].pos.x = 930;
    gb->quest[0].pos.y = 380;
    gb->teleport[CHEST].pos.x = 1960;
    gb->teleport[CHEST].pos.y = 300;
    gb->teleport[OPEN_PORTAL].pos.x = 4300;
    gb->teleport[OPEN_PORTAL].pos.y = 100;
    gb->teleport[PUB].pos.x = 2720;
    gb->teleport[PUB].pos.y = 250;
    gb->trader.pos.x = 3150;
    gb->trader.pos.y = 200;
    reini_sprite_tuto(gb);
}

void reini_pub(global *gb)
{
    gb->sprite[TAVERN].pos.x = 240;
    gb->sprite[TAVERN].pos.y = -380;
    gb->teleport[EXIT_PUB].pos.x = 680;
    gb->teleport[EXIT_PUB].pos.y = 280;
    gb->sprite[PNJ_PUB].pos.x = 1150;
    gb->sprite[PNJ_PUB].pos.y = -260;
    sfSprite_setPosition(gb->sprite[PNJ_PUB].sprite, gb->sprite[PNJ_PUB].pos);
    gb->quest[3].pos.x = 1100;
    gb->quest[3].pos.y = -300;
    sfSprite_setPosition(gb->sprite[TAVERN].sprite, gb->sprite[TAVERN].pos);
    gb->sprite[ASH_BACKGROUND].pos.x = 0;
    gb->sprite[ASH_BACKGROUND].pos.y = 0;
    gb->teleport[EXIT_PORTAL].pos.x = 780;
    gb->teleport[EXIT_PORTAL].pos.y = 320;
    gb->sprite[PORTAL_BACK].pos.x = 740;
    gb->sprite[PORTAL_BACK].pos.y = 300;
    sfSprite_setPosition(gb->sprite[ASH_BACKGROUND].sprite,
            gb->sprite[ASH_BACKGROUND].pos);
}

void reini_town(global *gb)
{
    gb->sprite[TOWN_BACKGROUND].pos.x = 600;
    gb->sprite[TOWN_BACKGROUND].pos.y = -600;
    gb->sprite[PORTAL].pos.x = 4270;
    gb->sprite[PORTAL].pos.y = 50;
    gb->sprite[PNJ_RED].pos.x = 3900;
    gb->sprite[PNJ_RED].pos.y = 300;
    gb->quest[1].pos.x = 3880;
    gb->quest[1].pos.y = 300;
    sfSprite_setPosition(gb->sprite[PNJ_RED].sprite, gb->sprite[PNJ_RED].pos);
    sfSprite_setPosition(gb->sprite[TOWN_BACKGROUND].sprite,
            gb->sprite[TOWN_BACKGROUND].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
}

void reini_all(global *gb)
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
    reini_pub(gb);
    reini_town(gb);
    reini_tuto(gb);
    reini_every_hitbox(gb);
    reini_every_hitbox2(gb);
}
