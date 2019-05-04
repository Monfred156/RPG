/*
** EPITECH PROJECT, 2019
** movement_mob
** File description:
** movement_mob.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void two_direction_mob(global *gb, float time_sec, int choose, int mob)
{
    switch (choose) {
        case MOVE_TOP_L:
            movement_top_mob(gb, time_sec, mob, 0);
            movement_left_mob(gb, time_sec, mob);
            break;
        case MOVE_BACK_L:
            movement_back_mob(gb, time_sec, mob, 0);
            movement_left_mob(gb, time_sec, mob);
            break;
        case MOVE_TOP_R:
            movement_top_mob(gb, time_sec, mob, 0);
            movement_right_mob(gb, time_sec, mob);
            break;
        case MOVE_BACK_R:
            movement_back_mob(gb, time_sec, mob, 0);
            movement_right_mob(gb, time_sec, mob);
        default:
            break;
    }
}

void one_direction_mob(global *gb, float time_sec, int mob, int movement)
{
    switch (movement) {
        case NO_MOVE:
            gb->move[mob + 1].walk = 0;
            break;
        case MOVE_TOP:
            movement_top_mob(gb, time_sec, mob, 1);
            break;
        case MOVE_BACK:
            movement_back_mob(gb, time_sec, mob, 1);
            break;
        case MOVE_LEFT:
            movement_left_mob(gb, time_sec, mob);
            break;
        case MOVE_RIGHT:
            movement_right_mob(gb, time_sec, mob);
            break;
        default:
            two_direction_mob(gb, time_sec * 0.8, movement, mob);
    }
}

void mob_move(global *gb, int mob, int movement)
{
    float time_sec;

    time_sec = (gb->clock.seconds - gb->clock.save_sec) * 300;
    one_direction_mob(gb, time_sec, mob, movement);
    if (gb->move[mob + 1].walk >= 8)
        gb->move[mob + 1].walk = 1;
    gb->mob[mob].rect.top = gb->move[mob + 1].movement * 150;
    gb->mob[mob].rect.left = gb->move[mob + 1].walk * 150;
    sfSprite_setTextureRect(gb->mob[mob].sprite, gb->mob[mob].rect);
}