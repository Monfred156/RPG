/*
** EPITECH PROJECT, 2018
** initia_stats
** File description:
** initia_stats.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
#include "function.h"
#include "struct.h"

void initia_text_stats(global *gb)
{
    char *send[3] = {my_int_to_str(gb->stats.lvl), "./assets/font/arial.ttf",
        NULL};

    initia_text(&gb->text[TXT_LVL], send, (sfVector2f){820, 437},
        sfWhite, 20);
    send[0] = my_strdup(my_int_to_str(gb->stats.xp));
    initia_text(&gb->text[TXT_XP], send, (sfVector2f){820, 463},
        sfWhite, 20);
    send[0] = my_strdup(my_int_to_str(gb->stats.gold));
    initia_text(&gb->text[TXT_GOLD], send, (sfVector2f){820, 486},
        sfWhite, 20);
    send[0] = my_strdup(my_int_to_str(gb->stats.life));
    initia_text(&gb->text[TXT_ARMOR], send, (sfVector2f){810, 515},
        sfWhite, 20);
    send[0] = my_strdup(my_int_to_str(gb->stats.damage));
    initia_text(&gb->text[TXT_ATTACK], send, (sfVector2f){810, 547},
        sfWhite, 20);

}

void initia_stats(global *gb)
{
    gb->stats.life = 100;
    gb->stats.life_max = 100;
    gb->stats.xp = 0;
    gb->stats.gold = 10;
    gb->stats.damage = 10;
    gb->stats.sceen = 5;
    gb->stats.posx = 0;
    gb->stats.posy = 0;
    gb->stats.lvl = 1;
}