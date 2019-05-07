/*
** EPITECH PROJECT, 2018
** continue
** File description:
** .c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void tp_in_tuto(global *gb)
{
    gb->sprite[TUTO_BACKGROUND].pos.x += gb->stats.posx - 550;
    gb->sprite[TUTO_BACKGROUND].pos.y += gb->stats.posy - 200;
    gb->sprite[PNJ_MAJ].pos.x += gb->stats.posx - 550;
    gb->sprite[PNJ_MAJ].pos.y += gb->stats.posy - 200;
    gb->quest[0].pos.x += gb->stats.posx - 550;
    gb->quest[0].pos.y += gb->stats.posy - 200;
    gb->mob[0].pos.x += gb->stats.posx - 550;
    gb->mob[0].pos.y += gb->stats.posy - 200;
    sfSprite_setPosition(gb->mob[0].sprite, gb->mob[0].pos);
    sfSprite_setPosition(gb->sprite[PNJ_MAJ].sprite, gb->sprite[PNJ_MAJ].pos);
    sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
    gb->teleport[CHEST].pos.x += gb->stats.posx - 550;
    gb->teleport[CHEST].pos.y += gb->stats.posy - 200;
    for (int i = VAL_MIN_TUTO; i <= VAL_MAX_TUTO; i++) {
        gb->hitbox[i].pos.x += gb->stats.posx - 550;
        gb->hitbox[i].pos.y += gb->stats.posy - 200;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
}

void tp_in_pub(global *gb)
{
    gb->sprite[TAVERN].pos.x += gb->stats.posx - 240;
    gb->sprite[TAVERN].pos.y += gb->stats.posy + 380;
    gb->sprite[PNJ_PUB].pos.x += gb->stats.posx - 240;
    gb->sprite[PNJ_PUB].pos.y += gb->stats.posy + 380;
    sfSprite_setPosition(gb->sprite[PNJ_PUB].sprite, gb->sprite[PNJ_PUB].pos);
    gb->quest[3].pos.x += gb->stats.posx - 240;
    gb->quest[3].pos.y += gb->stats.posy + 380;
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
        if (gb->stats.sceen == 5)
            tp_in_tuto(gb);
        if (gb->stats.sceen == 6)
            tp_in_town(gb, gb->stats.posx, gb->stats.posy);
        if (gb->stats.sceen == 7)
            tp_in_pub(gb);
        if (gb->stats.sceen == 8)
            tp_in_ashland(gb);
        gb->selecscreen.sc = gb->stats.sceen;
    }
}