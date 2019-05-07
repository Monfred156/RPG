/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void dialogue_pnj_tuto(global *gb, int sprite, int quest)
{
    if (collision_between__sprite(gb->sprite[HERO].sprite,
        gb->quest[quest].shape)
        == 1 && sfKeyboard_isKeyPressed(sfKeyE))
        gb->quest[0].open = 1;
    if (collision_between__sprite(gb->sprite[HERO].sprite,
        gb->quest[quest].shape)
        == 0)
        gb->quest[0].open = 0;
    if (gb->quest->open == 1) {
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[BACK_TEXT].sprite, NULL);
        sfRenderWindow_drawText(gb->disev.window, gb->text[sprite].text,
            NULL);
    }
}

void teleport_to_place_tuto(global *gb)
{
    sfVector2f player = sfSprite_getPosition(gb->sprite[HERO].sprite);
    sfVector2f size = sfRectangleShape_getSize(gb->teleport[CHEST].teleport);

    if (player.x + 40 > gb->teleport[CHEST].pos.x &&
        player.x + 50 < gb->teleport[CHEST].pos.x + size.x &&
        player.y + 10 > gb->teleport[CHEST].pos.y - 10 &&
        player.y + 70 < gb->teleport[CHEST].pos.y + size.y) {
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            check_touche_key(gb, sfKeyE);
            gb->selecscreen.sc = 6;
            check_touche_key(gb, sfKeyE);
            sleep(1);
        }
    }
}

void click_player(global *gb)
{
    if (gb->sprite[HERO].rect.top < 3000)
        gb->sprite[HERO].rect.width = 150;
    if (gb->fght.time_tuto <= 0) {
        event_move_player_tuto(gb, TUTO_BACKGROUND);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            gb->fght.time_tuto = 0.45;
    } else {
        gb->fght.time_tuto -= gb->clock.seconds - gb->clock.save_sec;
        anim_attack(gb, HERO);
        if (collision_between__mob(gb->sprite[HERO].sprite,
            gb->mob[0].sprite) == 1 && gb->mob[0].life > 0) {
            gb->fght.time_tuto = 0;
            gb->fght.mob = 0;
            gb->selecscreen.sc = 9;
        }
    }
}

void manage_event_tuto(global *gb)
{
    click_player(gb);
    pnj_rando_rect(gb, PNJ_MAJ, 32, 128);
    pattern_mob(gb, 0);
    teleport_to_place_tuto(gb);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        gb->selecscreen.sc = 3;
        gb->selecscreen.back = 5;
        gb->selecscreen.back_back = 5;
    }
    open_inventory(gb);
}

void display_tuto(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[TUTO_BACKGROUND].sprite, NULL);
    if (gb->mob[0].life > 0)
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->mob[0].sprite, NULL);
    else
        sfSprite_setPosition(gb->mob[0].sprite, gb->fght.dead);
    sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[PNJ_MAJ].sprite,
        NULL);
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[HERO].sprite, NULL);
    dialogue_pnj_tuto(gb, PNJ_TUTO, 0);
    if (gb->inv.open == 1)
        display_inventory(gb);
    display_hud(gb);
}