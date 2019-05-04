/*
** EPITECH PROJECT, 2018
** town
** File description:
** town
*/

#include "function.h"

void teleport_to_place_town(global *gb)
{
    sfVector2f player = sfSprite_getPosition(gb->sprite[HERO].sprite);
    sfVector2f size = sfRectangleShape_getSize(gb->teleport[PUB].teleport);

    if (player.x + 40 > gb->teleport[PUB].pos.x && player.x + 50 < gb->teleport[PUB].pos.x + size.x &&
        player.y + 10 > gb->teleport[PUB].pos.y - 10 && player.y + 70 < gb->teleport[PUB].pos.y + size.y) {
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            check_touche_key(gb, sfKeyE);
            sleep(1);
            gb->selecscreen.sc = 7;
        }
    }
    if (player.x + 40 > gb->teleport[OPEN_PORTAL].pos.x && player.x + 50 < gb->teleport[OPEN_PORTAL].pos.x + size.x &&
        player.y + 10 > gb->teleport[OPEN_PORTAL].pos.y - 10 && player.y + 70 < gb->teleport[OPEN_PORTAL].pos.y + size.y) {
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            check_touche_key(gb, sfKeyE);
            sleep(1);
            gb->selecscreen.sc = 8;
        }
    }
}

void display_town(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TOWN_BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[PORTAL].sprite, NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    if (gb->trader.open == 1) {
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[SHOP].sprite, NULL);
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[INVENTORY].sprite, NULL);
    }
    display_inventory(gb);
}

void move_rect_portal(global *gb, int offset, int max_value, float *time)
{
    if (*time > 0.1) {
        gb->sprite[PORTAL].rect.left += offset;
        if (gb->sprite[PORTAL].rect.left >= max_value)
            gb->sprite[PORTAL].rect.left = 0;
        sfSprite_setTextureRect(gb->sprite[PORTAL].sprite,
            gb->sprite[PORTAL].rect);
        *time = 0;
    }
}

void event_trader(global *gb)
{
    if (collision_between__sprite(gb->sprite[HERO].sprite, gb->trader.talk)
    == 1 && sfKeyboard_isKeyPressed(sfKeyE))
        gb->trader.open = 1;
    if (collision_between__sprite(gb->sprite[HERO].sprite, gb->trader.talk)
         == 0) {
        gb->trader.open = 0;
    }
}

void manage_event_town(global *gb)
{
    static float anim_portail = 0;
    static float time = 0;

    anim_portail += gb->clock.seconds - gb->clock.save_sec;
    move_rect_portal(gb, 300, 900, &anim_portail);
    if (time <= 0) {
        if (gb->sprite[HERO].rect.top > 3000) {
            gb->sprite[HERO].rect.width = 150;
        }
        event_move_player_town(gb, TOWN_BACKGROUND);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            time = 0.45;
    } else {
        time -= gb->clock.seconds - gb->clock.save_sec;
        anim_attack(gb, HERO);
    }
    teleport_to_place_town(gb);
    open_inventory(gb);
    event_trader(gb);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        gb->selecscreen.sc = 2;
        gb->selecscreen.back = 6;
    }
}