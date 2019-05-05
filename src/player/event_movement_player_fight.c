/*
** EPITECH PROJECT, 2019
** event_movement
** File description:
** event_movement_player
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void find_one_direction_fight(global *gb, float time_sec, int choose, int sprite)
{
    switch (choose) {
        case MOVE_LEFT:
            movement_left_player_fight(gb, time_sec, sprite);
            break;
        case MOVE_RIGHT:
            movement_right_player_fight(gb, time_sec, sprite);
            break;
        default:
            break;
    }
}

int count_direction_anim_fight(global *gb, int sprite, float time_sec)
{
    int choose = 0;

    if (sfKeyboard_isKeyPressed(sfKeyQ) && gb->sprite[HERO].pos.x > -90)
        choose += MOVE_LEFT;
    if (sfKeyboard_isKeyPressed(sfKeyD) && gb->sprite[HERO].pos.x < 1680)
        choose += MOVE_RIGHT;
    choose %= 12;
    find_one_direction_fight(gb, time_sec, choose, sprite);
    return (choose);
}

void event_move_player_fight(global *gb, int sprite)
{
    float time_sec = (gb->clock.seconds - gb->clock.save_sec) * 500;

    if (count_direction_anim_fight(gb, sprite, time_sec) == 0)
        gb->move->walk = 0;
    if (gb->move->walk >= 8)
        gb->move->walk = 1;
    gb->sprite[HERO].rect.top = gb->move->movement * 150;
    gb->sprite[HERO].rect.left = gb->move->walk * 150;
    sfSprite_setTextureRect(gb->sprite[HERO].sprite, gb->sprite[HERO].rect);
}