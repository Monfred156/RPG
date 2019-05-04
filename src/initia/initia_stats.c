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


void initia_stats(global *gb)
{
    gb->stats.life = 100;
    gb->stats.head = 0;
    gb->stats.body = 0;
    gb->stats.leg = 0;
    gb->stats.foot = 0;
    gb->stats.weapon = 0;
    gb->stats.xp = 0;
    gb->stats.gold = 0;
}