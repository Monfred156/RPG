/*
** EPITECH PROJECT, 2019
** movement_mob
** File description:
** movement_mob.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void movement_top_mob(global *gb, float time_sec, int animation, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.y += time_sec * 0.9;
    gb->move.movement = ANIM_TOP;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move.walk += animation;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
}

void movement_back_mob(global *gb, float time_sec, int animation, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.y -= time_sec * 0.9;
    gb->move.movement = ANIM_BACK;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move.walk += animation;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
}

void movement_left_mob(global *gb, float time_sec, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.x += time_sec;
    gb->move.movement = ANIM_LEFT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move.walk += 1;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
}

void movement_right_mob(global *gb, float time_sec, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.x -= time_sec;
    gb->move.movement = ANIM_RIGHT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move.walk += 1;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
}