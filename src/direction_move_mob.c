/*
** EPITECH PROJECT, 2019
** movement_mob
** File description:
** movement_mob.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void two_direction_mob(global *gb, float time_sec, int choose, int sprite)
{
    switch (choose) {
        case MOVE_TOP_L:
            movement_top_mob(gb, time_sec, 0, sprite);
            movement_left_mob(gb, time_sec, sprite);
            break;
        case MOVE_BACK_L:
            movement_back_mob(gb, time_sec, 0, sprite);
            movement_left_mob(gb, time_sec, sprite);
            break;
        case MOVE_TOP_R:
            movement_top_mob(gb, time_sec, 0, sprite);
            movement_right_mob(gb, time_sec, sprite);
            break;
        case MOVE_BACK_R:
            movement_back_mob(gb, time_sec, 0, sprite);
            movement_right_mob(gb, time_sec, sprite);
        default:
            break;
    }
}

void one_direction_mob(global *gb, float time_sec, int mob, int movement)
{
    switch (movement) {
        case NO_MOVE:
            gb->move.walk = 0;
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
            two_direction_mob(gb, time_sec * 0.8, mob, movement);
    }
}

void mob_move_top(global *gb, int mob, int movement)
{
    sfIntRect rect = {0, 0, 75, 125};
    float time_sec;

    time_sec = (gb->clock.seconds - gb->clock.save_sec) * 300;
    one_direction_mob(gb, time_sec, mob, movement);
    if (gb->move.walk >= 8)
        gb->move.walk = 1;
    rect.top = gb->move.movement * 150 + 30;
    rect.left = gb->move.walk * 150 + 35;
    sfSprite_setTextureRect(gb->sprite[mob].sprite, rect);
}