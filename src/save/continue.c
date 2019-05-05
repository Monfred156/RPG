/*
** EPITECH PROJECT, 2018
** lunch_game
** File description:
** lunch_game
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void tp_in_town(global *gb, int posx, int posy)
{
    gb->sprite[TOWN_BACKGROUND].pos.x += posx - 600;
    gb->sprite[TOWN_BACKGROUND].pos.y += posy + 600;
    gb->sprite[PORTAL].pos.x += posx - 600;
    gb->sprite[PORTAL].pos.y += posy + 600;
    gb->teleport[OPEN_PORTAL].pos.x += posx - 600;
    gb->teleport[OPEN_PORTAL].pos.y += posy + 600;
    gb->teleport[PUB].pos.x += posx - 600;
    gb->teleport[PUB].pos.y += posy + 600;
    gb->trader.pos.x += posx - 600;
    gb->trader.pos.y += posy + 600;
    sfSprite_setPosition(gb->sprite[TOWN_BACKGROUND].sprite,
                         gb->sprite[TOWN_BACKGROUND].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.x += posx - 600;
        gb->hitbox[i].pos.y += posy + 600;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
}

void tp_in_pub(global *gb)
{
    gb->sprite[TAVERN].pos.x += gb->stats.posx - 240;
    gb->sprite[TAVERN].pos.y += gb->stats.posy + 380;
    gb->teleport[EXIT_PUB].pos.x += gb->stats.posx - 240;
    gb->teleport[EXIT_PUB].pos.y += gb->stats.posy + 380;
    sfSprite_setPosition(gb->sprite[TAVERN].sprite, gb->sprite[TAVERN].pos);
    for (int i = VAL_MIN_PUB; i <= VAL_MAX_PUB; i++) {
        gb->hitbox[i].pos.x += gb->stats.posx - 240;
        gb->hitbox[i].pos.y += gb->stats.posy + 380;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
    tp_in_town(gb, -1310, -580);
}

void tp_in_ashland(global *gb)
{
    gb->sprite[ASH_BACKGROUND].pos.x += gb->stats.posx;
    gb->sprite[ASH_BACKGROUND].pos.y += gb->stats.posy;
    gb->teleport[EXIT_PORTAL].pos.x += gb->stats.posx;
    gb->teleport[EXIT_PORTAL].pos.y += gb->stats.posy;
    gb->sprite[PORTAL_BACK].pos.x += gb->stats.posx;
    gb->sprite[PORTAL_BACK].pos.y += gb->stats.posy;
    sfSprite_setPosition(gb->sprite[ASH_BACKGROUND].sprite,
                         gb->sprite[ASH_BACKGROUND].pos);
    for (int i = VAL_MIN_ASH; i <= VAL_MAX_ASH; i++) {
        gb->hitbox[i].pos.x += gb->stats.posx;
        gb->hitbox[i].pos.y += gb->stats.posy;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
    tp_in_town(gb, -2920, -470);
}

void pressed_continued(global *gb)
{
    reini_all(gb);
    if (get_save(gb) == -1)
        gb->selecscreen.sc = 5;
    else {
        if (gb->stats.sceen == 6)
            tp_in_town(gb, gb->stats.posx, gb->stats.posy);
        if (gb->stats.sceen == 7)
            tp_in_pub(gb);
        if (gb->stats.sceen == 8)
            tp_in_ashland(gb);
        gb->selecscreen.sc = gb->stats.sceen;
    }
}