/*
** EPITECH PROJECT, 2019
** fight
** File description:
** fight.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void event_mob(global *gb, int mob)
{
    static float time = 0;

    if (gb->mob[mob].rand == 3) {
        time += gb->clock.seconds - gb->clock.save_sec;
        gb->mob[mob].rect.top = 1500;
        if (time > 0.17) {
            gb->mob[mob].rect.left += 150;
            time = 0;
        }
        sfSprite_setTextureRect(gb->mob[mob].sprite, gb->mob[mob].rect);
        if (time == 0 && collision__mob(mob, gb) == 1) {
            gb->stats.life -= gb->mob[mob].attack;
            gb->fght.take_dmg = 1;
        }
    } else
        mob_move_fght(gb, mob, gb->mob[mob].rand * 4, 1.6);
}

void click_player_fght(global *gb, int mob)
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
        if (collision_fght__mob(mob, gb) == 1 && gb->fght.time_atk <= 0) {
            gb->mob[mob].life -= gb->stats.damage;
            gb->fght.time_atk = 1;
        }
    }
    if (gb->fght.take_dmg > 0)
        gb->fght.take_dmg -= gb->clock.seconds - gb->clock.save_sec;
}

void initia_fght(global *gb)
{
    gb->sprite[HERO].pos.y = 700;
    gb->sprite[HERO].pos.x = 300;
    gb->mob[gb->fght.mob].pos.y = 700;
    gb->mob[gb->fght.mob].pos.x = 1400;
    mob_move(gb, gb->fght.mob, MOVE_LEFT, 0);
    movement_right_player_fight(gb, 0, HERO);
    gb->fght.initia = 1;
    gb->mob[gb->fght.mob].rand = 0;
}

void manage_event_fight(global *gb, int mob)
{
    static float time = 0;

    if (gb->fght.initia == 0)
        initia_fght(gb);
    time += gb->clock.seconds - gb->clock.save_sec;
    if (time >= 0.8 && gb->fght.end == 0) {
        gb->mob[mob].rect.left = 0;
        sfSprite_setTextureRect(gb->mob[mob].sprite, gb->mob[mob].rect);
        time = 0;
        gb->mob[mob].rand = rand() % 5;
        if (gb->mob[mob].rand > 3)
            gb->mob[mob].rand = 3;
    }
    if (gb->fght.time_atk > 0)
        gb->fght.time_atk -= gb->clock.seconds - gb->clock.save_sec;
    if (gb->fght.end == 0)
        event_mob(gb, mob);
    click_player_fght(gb, mob);
    end_game(gb, mob);
}

void display_fight(global *gb)
{
    sfVector2f size = {2, 2};
    int flot = gb->fght.time_atk * 100;
    int flot2 = gb->fght.take_dmg * 100;

    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[FIGHT_BACKGROUND].sprite, NULL);
    sfSprite_setScale(gb->mob[gb->fght.mob].sprite, size);
    if (flot % 13 < 6 || gb->mob[gb->fght.mob].life <= 0)
        sfRenderWindow_drawSprite(gb->disev.window,
        gb->mob[gb->fght.mob].sprite, NULL);
    sfSprite_setScale(gb->sprite[HERO].sprite, size);
    if (flot2 % 13 < 6 || gb->stats.life <= 0)
        sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    display_hud(gb);
    display_hud_mob(gb);
}