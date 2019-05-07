/*
** EPITECH PROJECT, 2018
** ashland
** File description:
** ashland
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void teleport_to_place_ash(global *gb)
{
    sfVector2f player = sfSprite_getPosition(gb->sprite[HERO].sprite);
    sfVector2f size = sfRectangleShape_getSize(
            gb->teleport[EXIT_PORTAL].teleport);

    if (player.x + 40 > gb->teleport[EXIT_PORTAL].pos.x &&
    player.x + 50 < gb->teleport[EXIT_PORTAL].pos.x + size.x &&
    player.y + 10 > gb->teleport[EXIT_PORTAL].pos.y - 10 &&
    player.y + 70 < gb->teleport[EXIT_PORTAL].pos.y + size.y) {
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            check_touche_key(gb, sfKeyE);
            sleep(1);
            gb->selecscreen.sc = 6;
        }
    }
    open_inventory(gb);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        gb->selecscreen.sc = 3;
        gb->selecscreen.back = 8;
        gb->selecscreen.back_back = 8;
    }
}

void touch_enemy_ash(global *gb)
{
    for (int i = 1; i < NB_MOB; i++) {
        if (collision_between__mob(gb->sprite[HERO].sprite,
                gb->mob[i].sprite) == 1 && gb->mob[i].life > 0) {
            gb->fght.time_ash = 0;
            gb->fght.mob = i;
            gb->selecscreen.sc = 9;
        }
    }
}

void manage_event_ash(global *gb)
{
    static float anim_portail = 0;

    if (gb->sprite[HERO].rect.top < 3000)
        gb->sprite[HERO].rect.width = 150;
    anim_portail += gb->clock.seconds - gb->clock.save_sec;
    move_rect_portal_back(gb, 300, 900, &anim_portail);
    if (gb->fght.time_ash <= 0) {
        event_move_player_ash(gb, ASH_BACKGROUND);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            gb->fght.time_ash = 0.45;
    } else {
        gb->selecscreen.back = gb->selecscreen.sc;
        gb->fght.time_ash -= gb->clock.seconds - gb->clock.save_sec;
        anim_attack(gb, HERO);
        touch_enemy_ash(gb);
    }
    for (int i = 1; i < NB_MOB; i++)
        pattern_mob(gb, i);
    teleport_to_place_ash(gb);
    open_inventory(gb);
    event_inventory(gb);
}

void move_rect_portal_back(global *gb, int offset, int max_value, float *time)
{
    if (*time > 0.1) {
        gb->sprite[PORTAL_BACK].rect.left += offset;
        if (gb->sprite[PORTAL_BACK].rect.left >= max_value)
            gb->sprite[PORTAL_BACK].rect.left = 0;
        sfSprite_setTextureRect(gb->sprite[PORTAL_BACK].sprite,
                gb->sprite[PORTAL_BACK].rect);
        *time = 0;
    }
}

void display_ash(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[ASH_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[PORTAL_BACK].sprite, NULL);
    for (int i = 1; i < NB_MOB; i++) {
        if (gb->mob[i].life > 0)
            sfRenderWindow_drawSprite(gb->disev.window,
                    gb->mob[i].sprite, NULL);
        else
            sfSprite_setPosition(gb->mob[i].sprite, gb->fght.dead);
    }
    sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[HERO].sprite, NULL);
    if (gb->inv.open == 1)
        display_inventory(gb);
    display_hud(gb);
}