/*
** EPITECH PROJECT, 2018
** ashland
** File description:
** ashland
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_ash(global *gb)
{
    static float time = 0;

    if (time <= 0) {
        if (gb->sprite[HERO].rect.top > 3000) {
            gb->sprite[HERO].rect.width = 150;
        }
        event_move_player_ash(gb, ASH_BACKGROUND);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            time = 0.45;
    } else {
        time -= gb->clock.seconds - gb->clock.save_sec;
        anim_attack(gb, HERO);
    }
    for (int i = 1; i < NB_MOB; i++)
        pattern_mob(gb, i);
    open_inventory(gb);
}

void display_ash(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[ASH_BACKGROUND].sprite, NULL);
    display_inventory(gb);
    for (int i = 1; i < NB_MOB; i++)
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->mob[i].sprite, NULL);
    for (int i = VAL_MIN_ASH; i <= VAL_MAX_ASH; i++) {
        sfRenderWindow_drawRectangleShape(gb->disev.window,
                gb->hitbox[i].hitbox, NULL);
    }
    sfRenderWindow_drawSprite(gb->disev.window,
    gb->sprite[HERO].sprite, NULL);
}