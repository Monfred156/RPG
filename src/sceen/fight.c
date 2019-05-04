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
    gb->mob[gb->num.mob].sprite) == 1)
        gb->mob[gb->num.mob].life -= gb->stats.dommage;
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
        touch_enemy_fght(gb);
    }
}

void manage_event_fight(global *gb)
{
    static int nb = 0;

    if (nb == 0) {
        gb->sprite[HERO].pos.y = 700;
        gb->sprite[HERO].pos.x = 300;
        gb->mob[gb->num.mob].pos.y = 700;
        gb->mob[gb->num.mob].pos.x = 1400;
        mob_move(gb, gb->num.mob, MOVE_LEFT, 0);
        movement_right_player_fight(gb, 0, HERO);
    }
    nb = 1;
    click_player_fght(gb);
}

void display_fight(global *gb)
{
    sfVector2f size = {2, 2};

    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[FIGHT_BACKGROUND].sprite, NULL);
    sfSprite_setScale(gb->mob[gb->num.mob].sprite, size);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->mob[gb->num.mob].sprite, NULL);
    sfSprite_setScale(gb->sprite[HERO].sprite, size);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
}