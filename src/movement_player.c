/*
** EPITECH PROJECT, 2019
** movement_player
** File description:
** movement_player.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void movement_top_player(global *gb, float time_sec, int animation)
{
    static float save_time = 0;

    gb->sprite[TUTO_BACKGROUND].pos.y += time_sec * 0.9;
    gb->move.movement = MOVE_TOP;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move.walk += animation;
    }
    sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
        gb->sprite[TUTO_BACKGROUND].pos);
    for (int i = 0; gb->hitbox[i].hitbox; i++) {
        gb->hitbox[i].pos.y += time_sec * 0.9;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
            gb->hitbox[i].pos);
    }
}

void movement_back_player(global *gb, float time_sec, int animation)
{
    static float save_time = 0;

    gb->sprite[TUTO_BACKGROUND].pos.y -= time_sec * 0.9;
    gb->move.movement = MOVE_BACK;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move.walk += animation;
    }
    sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
        gb->sprite[TUTO_BACKGROUND].pos);
    for (int i = 0; gb->hitbox[i].hitbox; i++) {
        gb->hitbox[i].pos.y -= time_sec * 0.9;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
            gb->hitbox[i].pos);
    }
}

void movement_left_player(global *gb, float time_sec)
{
    static float save_time = 0;

    gb->sprite[TUTO_BACKGROUND].pos.x += time_sec;
    gb->move.movement = MOVE_LEFT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move.walk += 1;
    }
    sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
        gb->sprite[TUTO_BACKGROUND].pos);
    for (int i = 0; gb->hitbox[i].hitbox; i++) {
        gb->hitbox[i].pos.x += time_sec;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
            gb->hitbox[i].pos);
    }
}

void movement_right_player(global *gb, float time_sec)
{
    static float save_time = 0;

    gb->sprite[TUTO_BACKGROUND].pos.x -= time_sec;
    gb->move.movement = MOVE_RIGHT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move.walk += 1;
    }
    sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
        gb->sprite[TUTO_BACKGROUND].pos);
    for (int i = 0; gb->hitbox[i].hitbox; i++) {
        gb->hitbox[i].pos.x -= time_sec;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
            gb->hitbox[i].pos);
    }
}