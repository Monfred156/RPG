/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void find_two_direction(global *gb, float time_sec, int choose)
{
    switch (choose) {
        case 5:
            movement_top_player(gb, time_sec, 0);
            movement_left_player(gb, time_sec);
            break;
        case 6:
            movement_back_player(gb, time_sec, 0);
            movement_left_player(gb, time_sec);
            break;
        case 9:
            movement_top_player(gb, time_sec, 0);
            movement_right_player(gb, time_sec);
            break;
        case 10:
            movement_back_player(gb, time_sec, 0);
            movement_right_player(gb, time_sec);
        default:
            break;
    }
}

void find_one_direction(global *gb, float time_sec, int choose)
{
    switch (choose) {
        case 1:
            movement_top_player(gb, time_sec, 1);
            break;
        case 2:
            movement_back_player(gb, time_sec, 1);
            break;
        case 4:
            movement_left_player(gb, time_sec);
            break;
        case 8:
            movement_right_player(gb, time_sec);
            break;
        default:
            find_two_direction(gb, time_sec * 0.8, choose);
    }
}

int count_direction_anim(global *gb, float time_sec)
{
    int choose = 0;

    if (sfKeyboard_isKeyPressed(sfKeyZ) && check_hitbox_up(gb, gb->sprite[HERO]
    .sprite) == 0)
        choose += 1;
    if (sfKeyboard_isKeyPressed(sfKeyS))
        choose += 2;
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        choose += 4;
    if (sfKeyboard_isKeyPressed(sfKeyD))
        choose += 8;
    choose %= 12;
    if (choose == 3 || choose == 7 || choose == 11)
        choose -= 3;
    find_one_direction(gb, time_sec, choose);
    return (choose);
}

void manage_event_tuto(global *gb)
{
    static float save_time = 0;
    float time_sec;
    sfIntRect rect = {0, 0, 75, 125};

    time_sec = (gb->clock.seconds - save_time) * 300;
    save_time = gb->clock.seconds;
    if (count_direction_anim(gb, time_sec) == 0)
        gb->move.walk = 0;
    if (gb->move.walk >= 8)
        gb->move.walk = 1;
    rect.top = gb->move.movement * 150 + 30;
    rect.left = gb->move.walk * 150 + 35;
    sfSprite_setTextureRect(gb->sprite[HERO].sprite, rect);
}

void display_tuto(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TUTO_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    for (int i = 0; gb->hitbox[i].hitbox; i++) {
        sfRenderWindow_drawRectangleShape(gb->disev.window,
            gb->hitbox[i].hitbox, NULL);
    }

}