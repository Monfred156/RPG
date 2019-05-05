/*
** EPITECH PROJECT, 2018
** mov_player_ini_town
** File description:
** mov_player_ini_town
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void mov_top_ini_town(global *gb, float time_sec, int animation, int sprite)
{
    gb->sprite[sprite].pos.y += time_sec * 0.9;
    gb->sprite[PNJ_RED].pos.y += time_sec * 0.9;
    gb->sprite[PORTAL].pos.y += time_sec * 0.9;
    gb->teleport[OPEN_PORTAL].pos.y += time_sec * 0.9;
    gb->teleport[PUB].pos.y += time_sec * 0.9;
    gb->quest[1].pos.y += time_sec * 0.9;
    gb->move->movement = ANIM_TOP;
}

void mov_back_ini_town(global *gb, float time_sec, int animation, int sprite)
{
    gb->sprite[sprite].pos.y -= time_sec * 0.9;
    gb->sprite[PNJ_RED].pos.y -= time_sec * 0.9;
    gb->sprite[PORTAL].pos.y -= time_sec * 0.9;
    gb->teleport[PUB].pos.y -= time_sec * 0.9;
    gb->teleport[OPEN_PORTAL].pos.y -= time_sec * 0.9;
    gb->quest[1].pos.y -= time_sec * 0.9;
    gb->move->movement = ANIM_BACK;
}

void mov_left_ini_town(global *gb, float time_sec, int sprite)
{
    gb->sprite[sprite].pos.x += time_sec;
    gb->sprite[PNJ_RED].pos.x += time_sec;
    gb->sprite[PORTAL].pos.x += time_sec;
    gb->teleport[PUB].pos.x += time_sec;
    gb->teleport[OPEN_PORTAL].pos.x += time_sec;
    gb->quest[1].pos.x += time_sec;
    gb->move->movement = ANIM_LEFT;
}

void mov_right_ini_town(global *gb, float time_sec, int sprite)
{
    gb->sprite[sprite].pos.x -= time_sec;
    gb->sprite[PNJ_RED].pos.x -= time_sec;
    gb->sprite[PORTAL].pos.x -= time_sec;
    gb->teleport[PUB].pos.x -= time_sec;
    gb->teleport[OPEN_PORTAL].pos.x -= time_sec;
    gb->quest[1].pos.x -= time_sec;
    gb->move->movement = ANIM_RIGHT;
}