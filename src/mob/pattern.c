/*
** EPITECH PROJECT, 2019
** pattern
** File description:
** pattern
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void pattern_mob(global *gb, int mob)
{
    static int random = 1;
    static float time = 0;

    time += gb->clock.seconds - gb->clock.save_sec;
    if (time >= 1) {
        time = 0;
        gb->mob[mob].rand = rand() % 10;
        if (random == 0)
            gb->mob[mob].rand = 0;
        random = rand() % 2;
    }
    mob_move(gb, mob, gb->mob[mob].rand, 1);
}