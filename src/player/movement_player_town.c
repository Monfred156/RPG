/*
** EPITECH PROJECT, 2019
** movement_player
** File description:
** movement_player.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void movement_top_player_town(global *gb, float time_sec, int animation,
    int sprite)
{
    static float save_time = 0;

    mov_top_ini_town(gb, time_sec, animation, sprite);
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += animation;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.y += time_sec * 0.9;
        sfRectangleShape_setPosition(
        gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
    gb->trader.pos.y += time_sec * 0.9;
    sfRectangleShape_setPosition(gb->trader.talk, gb->trader.pos);
}

void movement_back_player_town(global *gb, float time_sec, int animation,
    int sprite)
{
    static float save_time = 0;

    mov_back_ini_town(gb, time_sec, animation, sprite);
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += animation;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.y -= time_sec * 0.9;
        sfRectangleShape_setPosition(
        gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
    gb->trader.pos.y -= time_sec * 0.9;
    sfRectangleShape_setPosition(gb->trader.talk, gb->trader.pos);
}

void movement_left_player_town(global *gb, float time_sec, int sprite)
{
    static float save_time = 0;

    mov_left_ini_town(gb, time_sec, sprite);
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += 1;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.x += time_sec;
        sfRectangleShape_setPosition(
        gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
    gb->trader.pos.x += time_sec;
    sfRectangleShape_setPosition(gb->trader.talk, gb->trader.pos);
}

void movement_right_player_town(global *gb, float time_sec, int sprite)
{
    static float save_time = 0;

    mov_right_ini_town(gb, time_sec, sprite);
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += 1;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.x -= time_sec;
        sfRectangleShape_setPosition(
        gb->hitbox[i].hitbox, gb->hitbox[i].pos);
    }
    gb->trader.pos.x -= time_sec;
    sfRectangleShape_setPosition(gb->trader.talk, gb->trader.pos);
}