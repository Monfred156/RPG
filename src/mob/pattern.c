/*
** EPITECH PROJECT, 2019
** pattern
** File description:
** pattern
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void pattern_mob(global *gb)
{
    static int random = 0;
    static float time = 0;

    time += gb->clock.seconds - gb->clock.save_sec;
    if (time > 1) {
        time = 0;
        random = rand() % 16;
    }
    mob_move(gb, 0, random);
}