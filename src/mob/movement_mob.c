/*
** EPITECH PROJECT, 2019
** movement_mob
** File description:
** movement_mob.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void movement_top_mob(global *gb, float time_sec, int mob, int animation)
{
    static float save_time = 0;

    gb->mob[mob].pos.y -= time_sec * 0.9;
    gb->move[mob + 1].movement = ANIM_TOP;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move[mob + 1].walk += animation;
    }
}

void movement_back_mob(global *gb, float time_sec, int mob, int animation)
{
    static float save_time = 0;

    gb->mob[mob].pos.y += time_sec * 0.9;
    gb->move[mob + 1].movement = ANIM_BACK;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move[mob + 1].walk += animation;
    }
}

void movement_left_mob(global *gb, float time_sec, int mob)
{
    static float save_time = 0;

    gb->mob[mob].pos.x -= time_sec;
    gb->move[mob + 1].movement = ANIM_LEFT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move[mob + 1].walk += 1;
    }
}

void movement_right_mob(global *gb, float time_sec, int mob)
{
    static float save_time = 0;

    gb->mob[mob].pos.x += time_sec;
    gb->move[mob + 1].movement = ANIM_RIGHT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move[mob + 1].walk += 1;
    }
}