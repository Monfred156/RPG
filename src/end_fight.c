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
    sfVector2f place = {gb->fght.save_x, gb->fght.save_y};

    sfSprite_setScale(gb->sprite[HERO].sprite, size);
    sfSprite_setPosition(gb->sprite[HERO].sprite, place);
    gb->fght.initia = 0;
    gb->selecscreen.sc = sceen;
}

void anim_end(global *gb, int sceen, sfSprite *sprite)
{
    static float time = 0;

    if (gb->mob[gb->fght.mob].rect.top < 3000) {
        gb->mob[gb->fght.mob].rect.top = 3030;
        gb->mob[gb->fght.mob].rect.left = 35;
    }
    time += gb->clock.seconds - gb->clock.save_sec;
    if (time > 0.3) {
        time = 0;
        gb->mob[gb->fght.mob].rect.left += 150;
    }
    sfSprite_setTextureRect(gb->mob[gb->fght.mob].sprite,
    gb->mob[gb->fght.mob].rect);
    if (gb->mob[gb->fght.mob].rect.left >= 900)
        come_back_fght(gb, sceen);
}

void end_game(global *gb)
{
    if (gb->fght.mob == 0) {
        if (gb->mob[gb->fght.mob].life <= 0)
            anim_end(gb, 5, gb->mob[0].sprite);
    } else
        if (gb->mob[gb->fght.mob].life <= 0)
            anim_end(gb, 8, gb->mob[0].sprite);
}