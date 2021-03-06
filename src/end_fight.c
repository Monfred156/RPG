/*
** EPITECH PROJECT, 2019
** end_fight
** File description:
** end_fight.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void come_back_fght(global *gb, int sceen)
{
    sfVector2f size = {1, 1};
    sfVector2f place = {800, 400};

    gb->fght.end = 0;
    sfSprite_setScale(gb->sprite[HERO].sprite, size);
    sfSprite_setScale(gb->mob[gb->fght.mob].sprite, size);
    sfSprite_setPosition(gb->sprite[HERO].sprite, place);
    if (gb->stats.life <= 0)
        gb->stats.life = 10;
    else {
        if (gb->disev.kill >= 0)
            gb->disev.kill++;
        gb->stats.gold += 5;
        gb->stats.xp += 5;
    }
    gb->fght.initia = 0;
    if (sceen == 7 && gb->selecscreen.back == 5)
        tp_in_town(gb, -1300, -500);
    if (sceen == 7 && gb->selecscreen.back == 8) {
        tp_in_town(gb, 2200, -750);
        reini_ashland(gb);
    }
    gb->selecscreen.sc = sceen;
}

void anim_end(global *gb, int sceen, sfIntRect *rect, sfSprite *sprite)
{
    static float time = 0;

    gb->fght.end = 1;
    if (rect->top != 3000) {
        rect->width = 150;
        rect->top = 3000;
        rect->left = 0;
    }
    time += gb->clock.seconds - gb->clock.save_sec;
    if (time > 0.3) {
        time = 0;
        rect->left += 150;
    }
    sfSprite_setTextureRect(sprite, *rect);
    if (rect->left >= 900)
        come_back_fght(gb, sceen);
}

void end_game(global *gb, int mob)
{
    int nb = 5;

    if (mob != 0)
        nb = 8;
    if (gb->stats.life <= 0)
        anim_end(gb, 7, &gb->sprite[HERO].rect, gb->sprite[HERO].sprite);
    if (gb->mob[mob].life <= 0)
            anim_end(gb, nb, &gb->mob[mob].rect, gb->mob[mob].sprite);
}

void one_direction_mob_fght(global *gb, float time_sec, int mob, int movement)
{
    if (movement == NO_MOVE)
        gb->move[mob + 1].walk = 0;
    if (movement == MOVE_LEFT && gb->mob[mob].pos.x > -65)
        movement_left_mob(gb, time_sec, mob);
    if (movement == MOVE_RIGHT && gb->mob[mob].pos.x < 1700)
        movement_right_mob(gb, time_sec, mob);
}

void mob_move_fght(global *gb, int mob, int movement, float speed)
{
    float time_sec;

    time_sec = (gb->clock.seconds - gb->clock.save_sec) * 200 * speed;
    one_direction_mob_fght(gb, time_sec, mob, movement);
    if (gb->move[mob + 1].walk >= 8)
        gb->move[mob + 1].walk = 1;
    gb->mob[mob].rect.top = gb->move[mob + 1].movement * 150;
    gb->mob[mob].rect.left = gb->move[mob + 1].walk * 150;
    sfSprite_setTextureRect(gb->mob[mob].sprite, gb->mob[mob].rect);
    sfSprite_setPosition(gb->mob[mob].sprite, gb->mob[mob].pos);
}