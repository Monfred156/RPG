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
    int val[2] = {VAL_MIN_TUTO, VAL_MAX_TUTO};

    gb->mob[mob].time += gb->clock.seconds - gb->clock.save_sec;
    if (mob != 0) {
        val[0] = VAL_MIN_ASH;
        val[1] = VAL_MAX_ASH;
    }
    if (check_hitbox_up(gb, gb->mob[mob].sprite, time_sec, val) == 0) {
        gb->mob[mob].pos.y -= time_sec * 0.9;
        gb->move[mob + 1].movement = ANIM_TOP;
        if (gb->mob[mob].time > 0.1) {
            gb->mob[mob].time = 0;
            gb->move[mob + 1].walk += animation;
        }
    }
}

void movement_back_mob(global *gb, float time_sec, int mob, int animation)
{
    int val[2] = {VAL_MIN_TUTO, VAL_MAX_TUTO};

    gb->mob[mob].time += gb->clock.seconds - gb->clock.save_sec;
    if (mob != 0) {
        val[0] = VAL_MIN_ASH;
        val[1] = VAL_MAX_ASH;
    }
    if (check_hitbox_down(gb, gb->mob[mob].sprite, time_sec, val) == 0) {
        gb->mob[mob].pos.y += time_sec * 0.9;
        gb->move[mob + 1].movement = ANIM_BACK;
        if (gb->mob[mob].time > 0.1) {
            gb->mob[mob].time = 0;
            gb->move[mob + 1].walk += animation;
        }
    }
}

void movement_left_mob(global *gb, float time_sec, int mob)
{
    int val[2] = {VAL_MIN_TUTO, VAL_MAX_TUTO};

    gb->mob[mob].time += gb->clock.seconds - gb->clock.save_sec;
    if (mob != 0) {
        val[0] = VAL_MIN_ASH;
        val[1] = VAL_MAX_ASH;
    }
    if (check_hitbox_left(gb, gb->mob[mob].sprite, time_sec, val) == 0) {
        gb->mob[mob].pos.x -= time_sec;
        gb->move[mob + 1].movement = ANIM_LEFT;
        if (gb->mob[mob].time > 0.1) {
            gb->mob[mob].time = 0;
            gb->move[mob + 1].walk += 1;
        }
    }
}

void movement_right_mob(global *gb, float time_sec, int mob)
{
    int val[2] = {VAL_MIN_TUTO, VAL_MAX_TUTO};

    gb->mob[mob].time += gb->clock.seconds - gb->clock.save_sec;
    if (mob != 0) {
        val[0] = VAL_MIN_ASH;
        val[1] = VAL_MAX_ASH;
    }
    if (check_hitbox_right(gb, gb->mob[mob].sprite, time_sec, val) == 0) {
        gb->mob[mob].pos.x += time_sec;
        gb->move[mob + 1].movement = ANIM_RIGHT;
        if (gb->mob[mob].time > 0.1) {
            gb->mob[mob].time = 0;
            gb->move[mob + 1].walk += 1;
        }
    }
}