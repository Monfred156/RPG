/*
** EPITECH PROJECT, 2019
** fight
** File description:
** fight.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void touch_enemy_fght(global *gb)
{
    if (collision_between__mob(gb->sprite[HERO].sprite,
    gb->mob[gb->fght.mob].sprite) == 1)
        gb->mob[gb->fght.mob].life -= gb->stats.damage;
}

void click_player_fght(global *gb)
{
    static float time = 0;

    if (time <= 0) {
        if (gb->sprite[HERO].rect.top > 3000)
            gb->sprite[HERO].rect.width = 150;
        event_move_player_fight(gb, HERO);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            time = 0.45;
    } else {
        time -= gb->clock.seconds - gb->clock.save_sec;
        anim_attack(gb, HERO);
        if (collision_between__mob(gb->sprite[HERO].sprite,
        gb->mob[gb->fght.mob].sprite) == 1 && gb->fght.time_atk <= 0) {
            gb->mob[gb->fght.mob].life -= gb->stats.damage;
            gb->fght.time_atk = 1;
        }
    }
}

void initia_fght(global *gb)
{
    gb->fght.save_y = gb->sprite[HERO].pos.y;
    gb->fght.save_x = gb->sprite[HERO].pos.x;
    gb->sprite[HERO].pos.y = 700;
    gb->sprite[HERO].pos.x = 300;
    gb->mob[gb->fght.mob].pos.y = 750;
    gb->mob[gb->fght.mob].pos.x = 1400;
    mob_move(gb, gb->fght.mob, MOVE_LEFT, 0);
    movement_right_player_fight(gb, 0, HERO);
    gb->fght.initia = 1;
}

void manage_event_fight(global *gb)
{
    if (gb->fght.initia == 0)
        initia_fght(gb);
    click_player_fght(gb);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        gb->selecscreen.sc = 2;
        gb->selecscreen.back = 9;
    }
    if (gb->fght.time_atk > 0)
        gb->fght.time_atk -= gb->clock.seconds - gb->clock.save_sec;
    end_game(gb);
}

void display_fight(global *gb)
{
    sfVector2f size = {2, 2};
    int flot = gb->fght.time_atk * 100;

    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[FIGHT_BACKGROUND].sprite, NULL);
    sfSprite_setScale(gb->mob[gb->fght.mob].sprite, size);
    if (flot % 13 < 6 || gb->mob[gb->fght.mob].life <= 0)
        sfRenderWindow_drawSprite(gb->disev.window,
        gb->mob[gb->fght.mob].sprite, NULL);
    sfSprite_setScale(gb->sprite[HERO].sprite, size);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
}