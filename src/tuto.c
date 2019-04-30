/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_tuto(global *gb)
{
    static float time_save;
    static int movement = 2;
    static int walk = 0;
    float time_sec;
    sfIntRect rect = {0, 1150 + movement * 150, 150, 150};
    int walk_save = walk;

    time_sec = (gb->clock.seconds - time_save) * 400;
    time_save = gb->clock.seconds;
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        gb->sprite[TUTO_BACKGROUND].pos.x -= time_sec;
        movement = MOVE_RIGHT;
        walk += 150;
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
        for (int i = 0; gb->hitbox[i].hitbox; i++) {
            gb->hitbox[i].pos.x -= time_sec;
            sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
                gb->hitbox[i].pos);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        gb->sprite[TUTO_BACKGROUND].pos.x += time_sec;
        movement = MOVE_LEFT;
        walk += 150;
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
        for (int i = 0; gb->hitbox[i].hitbox; i++) {
            gb->hitbox[i].pos.x += time_sec;
            sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
                gb->hitbox[i].pos);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        gb->sprite[TUTO_BACKGROUND].pos.y += time_sec;
        movement = MOVE_TOP;
        walk += 150;
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
        for (int i = 0; gb->hitbox[i].hitbox; i++) {
            gb->hitbox[i].pos.y += time_sec;
            sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
                gb->hitbox[i].pos);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        gb->sprite[TUTO_BACKGROUND].pos.y -= time_sec;
        movement = MOVE_BACK;
        walk += 150;
        sfSprite_setPosition(gb->sprite[TUTO_BACKGROUND].sprite,
            gb->sprite[TUTO_BACKGROUND].pos);
        for (int i = 0; gb->hitbox[i].hitbox; i++) {
            gb->hitbox[i].pos.y -= time_sec;
            sfRectangleShape_setPosition(gb->hitbox[i].hitbox,
                gb->hitbox[i].pos);
        }
    }
    if (walk == walk_save)
        walk = 0;
    if (walk >= 1300)
        walk = 150;
    rect.top = 1150 + movement * 150;
    rect.left = walk;
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