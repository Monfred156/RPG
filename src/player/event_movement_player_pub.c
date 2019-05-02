/*
** EPITECH PROJECT, 2019
** event_movement
** File description:
** event_movement_player
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void find_two_direction_pub(global *gb, float time_sec, int choose, int sprite)
{
    switch (choose) {
        case MOVE_TOP_L:
            movement_top_player_pub(gb, time_sec, 0, sprite);
            movement_left_player_pub(gb, time_sec, sprite);
            break;
        case MOVE_BACK_L:
            movement_back_player_pub(gb, time_sec, 0, sprite);
            movement_left_player_pub(gb, time_sec, sprite);
            break;
        case MOVE_TOP_R:
            movement_top_player_pub(gb, time_sec, 0, sprite);
            movement_right_player_pub(gb, time_sec, sprite);
            break;
        case MOVE_BACK_R:
            movement_back_player_pub(gb, time_sec, 0, sprite);
            movement_right_player_pub(gb, time_sec, sprite);
        default:
            break;
    }
}

void find_one_direction_pub(global *gb, float time_sec, int choose, int sprite)
{
    switch (choose) {
        case MOVE_TOP:
            movement_top_player_pub(gb, time_sec, 1, sprite);
            break;
        case MOVE_BACK:
            movement_back_player_pub(gb, time_sec, 1, sprite);
            break;
        case MOVE_LEFT:
            movement_left_player_pub(gb, time_sec, sprite);
            break;
        case MOVE_RIGHT:
            movement_right_player_pub(gb, time_sec, sprite);
            break;
        default:
            find_two_direction_pub(gb, time_sec * 0.8, choose, sprite);
    }
}

int count_direction_anim_pub(global *gb, int sprite, float time_sec)
{
    int choose = 0;
    int val[2] = {36, 36};

    if (sfKeyboard_isKeyPressed(sfKeyZ) && check_hitbox_up(gb, gb->sprite[HERO]
    .sprite, time_sec, val) == 0)
        choose += MOVE_TOP;
    if (sfKeyboard_isKeyPressed(sfKeyS) && check_hitbox_down(gb,
            gb->sprite[HERO].sprite, time_sec, val) == 0)
        choose += MOVE_BACK;
    if (sfKeyboard_isKeyPressed(sfKeyQ) && check_hitbox_left(gb,
            gb->sprite[HERO].sprite, time_sec, val) == 0)
        choose += MOVE_LEFT;
    if (sfKeyboard_isKeyPressed(sfKeyD) && check_hitbox_right(gb,
            gb->sprite[HERO].sprite, time_sec, val) == 0)
        choose += MOVE_RIGHT;
    choose %= 12;
    if (choose == 3 || choose == 7 || choose == 11)
        choose -= 3;
    find_one_direction_pub(gb, time_sec, choose, sprite);
    return (choose);
}

void event_move_player_pub(global *gb, int sprite)
{
    sfIntRect rect = {0, 0, 75, 125};
    float time_sec = (gb->clock.seconds - gb->clock.save_sec) * 300;

    if (count_direction_anim_pub(gb, sprite, time_sec) == 0)
        gb->move->walk = 0;
    if (gb->move->walk >= 8)
        gb->move->walk = 1;
    rect.top = gb->move->movement * 150 + 30;
    rect.left = gb->move->walk * 150 + 35;
    sfSprite_setTextureRect(gb->sprite[HERO].sprite, rect);
}