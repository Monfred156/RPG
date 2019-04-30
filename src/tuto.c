/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

int movement_top_character(global *gb, float time_sec)
{
    static float save_time = 0;

    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        gb->sprite[TUTO_BACKGROUND].pos.y += time_sec * 0.9;
        gb->move.movement = MOVE_TOP;
        if (save_time + 0.1 < gb->clock.seconds) {
            save_time = gb->clock.seconds;
            gb->move.walk += 150;
        }
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
        for (int i = 0; gb->hitbox[i].hitbox; i++) {
            gb->hitbox[i].pos.y += time_sec * 0.9;
            sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
                gb->hitbox[i].pos);
        }
        return (1);
    }
    return (0);
}

int movement_back_character(global *gb, float time_sec)
{
    static float save_time = 0;

    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        gb->sprite[TUTO_BACKGROUND].pos.y -= time_sec * 0.9;
        gb->move.movement = MOVE_BACK;
        if (save_time + 0.1 < gb->clock.seconds) {
            save_time = gb->clock.seconds;
            gb->move.walk += 150;
        }
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
        for (int i = 0; gb->hitbox[i].hitbox; i++) {
            gb->hitbox[i].pos.y -= time_sec * 0.9;
            sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
                gb->hitbox[i].pos);
        }
        return (1);
    }
    return (0);
}

int movement_left_character(global *gb, float time_sec)
{
    static float save_time = 0;

    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        gb->sprite[TUTO_BACKGROUND].pos.x += time_sec;
        gb->move.movement = MOVE_LEFT;
        if (save_time + 0.1 < gb->clock.seconds) {
            save_time = gb->clock.seconds;
            gb->move.walk += 150;
        }
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
        for (int i = 0; gb->hitbox[i].hitbox; i++) {
            gb->hitbox[i].pos.x += time_sec;
            sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
                gb->hitbox[i].pos);
        }
        return (1);
    }
    return (0);
}

int movement_right_character(global *gb, float time_sec)
{
    static float save_time = 0;

    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        gb->sprite[TUTO_BACKGROUND].pos.x -= time_sec;
        gb->move.movement = MOVE_RIGHT;
        if (save_time + 0.1 < gb->clock.seconds) {
            save_time = gb->clock.seconds;
            gb->move.walk += 150;
        }
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
        for (int i = 0; gb->hitbox[i].hitbox; i++) {
            gb->hitbox[i].pos.x -= time_sec;
            sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
                gb->hitbox[i].pos);
        }
        return (1);
    }
    return (0);
}

void manage_event_tuto(global *gb)
{
    static float save_time;
    float time_sec;
    sfIntRect rect = {0, 1150 + gb->move.movement * 150, 150, 150};
    int save_move = 0;

    time_sec = (gb->clock.seconds - save_time) * 400;
    save_time = gb->clock.seconds;
    save_move += movement_top_character(gb, time_sec);
    if (save_move == 0)
        save_move += movement_back_character(gb, time_sec);
    save_move += movement_left_character(gb, time_sec);
    if (save_move < 3)
        save_move += movement_right_character(gb, time_sec);
    if (save_move == 0)
        gb->move.walk = 0;
    if (gb->move.walk >= 1300)
        gb->move.walk = 150;
    rect.top = 1150 + gb->move.movement * 150;
    rect.left = gb->move.walk;
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