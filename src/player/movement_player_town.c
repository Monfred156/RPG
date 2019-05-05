/*
** EPITECH PROJECT, 2019
** movement_player
** File description:
** movement_player.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void movement_top_player_town(global *gb, float time_sec, int animation, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.y += time_sec * 0.9;
    gb->sprite[PNJ_RED].pos.y += time_sec * 0.9;
    gb->sprite[PORTAL].pos.y += time_sec * 0.9;
    gb->teleport[OPEN_PORTAL].pos.y += time_sec * 0.9;
    gb->teleport[PUB].pos.y += time_sec * 0.9;
    gb->quest[1].pos.y += time_sec * 0.9;
    gb->move->movement = ANIM_TOP;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += animation;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[sprite].sprite,
        gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.y += time_sec * 0.9;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
            gb->hitbox[i].pos);
    }
    gb->trader.pos.y += time_sec * 0.9;
    sfRectangleShape_setPosition(gb->trader.talk, gb->trader.pos);
}

void movement_back_player_town(global *gb, float time_sec, int animation, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.y -= time_sec * 0.9;
    gb->sprite[PNJ_RED].pos.y -= time_sec * 0.9;
    gb->sprite[PORTAL].pos.y -= time_sec * 0.9;
    gb->teleport[PUB].pos.y -= time_sec * 0.9;
    gb->teleport[OPEN_PORTAL].pos.y -= time_sec * 0.9;
    gb->quest[1].pos.y -= time_sec * 0.9;
    gb->move->movement = ANIM_BACK;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += animation;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[sprite].sprite,
        gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.y -= time_sec * 0.9;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
            gb->hitbox[i].pos);
    }
    gb->trader.pos.y -= time_sec * 0.9;
    sfRectangleShape_setPosition(gb->trader.talk, gb->trader.pos);
}

void movement_left_player_town(global *gb, float time_sec, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.x += time_sec;
    gb->sprite[PNJ_RED].pos.x += time_sec;
    gb->sprite[PORTAL].pos.x += time_sec;
    gb->teleport[PUB].pos.x += time_sec;
    gb->teleport[OPEN_PORTAL].pos.x += time_sec;
    gb->quest[1].pos.x += time_sec;
    gb->move->movement = ANIM_LEFT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += 1;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[sprite].sprite,
        gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.x += time_sec;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
            gb->hitbox[i].pos);
    }
    gb->trader.pos.x += time_sec;
    sfRectangleShape_setPosition(gb->trader.talk, gb->trader.pos);
}

void movement_right_player_town(global *gb, float time_sec, int sprite)
{
    static float save_time = 0;

    gb->sprite[sprite].pos.x -= time_sec;
    gb->sprite[PNJ_RED].pos.x -= time_sec;
    gb->sprite[PORTAL].pos.x -= time_sec;
    gb->teleport[PUB].pos.x -= time_sec;
    gb->teleport[OPEN_PORTAL].pos.x -= time_sec;
    gb->quest[1].pos.x -= time_sec;
    gb->move->movement = ANIM_RIGHT;
    if (save_time + 0.1 < gb->clock.seconds) {
        save_time = gb->clock.seconds;
        gb->move->walk += 1;
    }
    sfSprite_setPosition(gb->sprite[sprite].sprite, gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[sprite].sprite,
        gb->sprite[sprite].pos);
    sfSprite_setPosition(gb->sprite[PORTAL].sprite, gb->sprite[PORTAL].pos);
    for (int i = VAL_MIN_TOWN; i <= VAL_MAX_TOWN; i++) {
        gb->hitbox[i].pos.x -= time_sec;
        sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
            gb->hitbox[i].pos);
    }
    gb->trader.pos.x -= time_sec;
    sfRectangleShape_setPosition(gb->trader.talk, gb->trader.pos);
}