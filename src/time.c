/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_time(global *gb)
{
    gb->clock.clock = sfClock_create();
    gb->clock.seconds = 0;
}

