/*
** EPITECH PROJECT, 2019
** movement_player
** File description:
** movement_player.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void movement_left_player_fight(global *gb, float time_sec, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.x -= time_sec;
    gb->move->movement = ANIM_LEFT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += 1;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
}

void movement_right_player_fight(global *gb, float time_sec, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.x += time_sec;
    gb->move->movement = ANIM_RIGHT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += 1;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
}