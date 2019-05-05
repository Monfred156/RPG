/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_screen(global *gb)
{
    gb->quest[0].open = 0;
    gb->selecscreen.sc = 0;
}

void call_initia_function(global *gb)
{
    initia_screen(gb);
    initia_stats(gb);
    initia_window(gb);
    initia_time(gb);
    initia_inventory(gb);
    initia_button_inventory(gb);
    initia_sprite_menu(gb);
    initia_button_menu(gb);
    initia_sound_menu(gb);
    initia_pos_particule_menu(gb);
    initia_sprite_launch(gb);
    initia_button_launch(gb);
    initia_var_tuto(gb);
    initia_sprite_tuto(gb);
    initia_hitbox_tuto(gb);
    initia_button_tuto(gb);
    initia_var_town(gb);
    initia_button_town(gb);
    initia_hitbox_town(gb);
    initia_sprite_town(gb);
    initia_sprite_pub(gb);
    initia_sprite_option(gb);
    initia_button_option(gb);
    initia_button_pub(gb);
    initia_sprite_ash(gb);
    initia_hitbox_ash(gb);
    initia_hitbox_pub(gb);
    initia_pnj(gb);
    initia_fight(gb);
    initia_items(gb);
    initia_button_ash(gb);
    initia_button_shop(gb);
    initia_dialogue(gb);
    initia_sprite_speak(gb);
    initia_sprite_esc(gb);
}

void manage_event(global *gb)
{
    while (sfRenderWindow_pollEvent(gb->disev.window, &gb->disev.event)) {
        if (gb->disev.event.type == sfEvtClosed)
            sfRenderWindow_close(gb->disev.window);
    }
    switch (gb->selecscreen.sc) {
        case 0:
            manage_event_menu(gb);
            break;
        case 1:
            manage_event_launch(gb);
            break;
        case 2:
            manage_event_option(gb);
            break;
        case 3:
            manage_event_esc(gb);
            break;
        case 5:
            manage_event_tuto(gb);
            break;
        case 6:
            manage_event_town(gb);
            break;
        case 7:
            manage_event_pub(gb);
            break;
        case 8:
            manage_event_ash(gb);
            break;
        case 9:
            manage_event_fight(gb, gb->fght.mob);
            break;
    }
}

void manage_screen(global *gb)
{
    switch (gb->selecscreen.sc) {
        case 0:
            display_menu(gb);
            break;
        case 1:
            display_launch(gb);
            break;
        case 2:
            display_option(gb);
            break;
        case 3:
            display_esc(gb);
            break;
        case 5:
            display_tuto(gb);
            break;
        case 6:
            display_town(gb);
            break;
        case 7:
            display_pub(gb);
            break;
        case 8:
            display_ash(gb);
            break;
        case 9:
            display_fight(gb);
            break;
    }
}

void call_destroy(global *gb)
{
    sfMusic_destroy(gb->sound[0].music);
    sfRenderWindow_destroy(gb->disev.window);
}

int game_loop(void)
{
    global gb;

    call_initia_function(&gb);
    if (check_assets(&gb) == 84)
        return 84;
    sfMusic_play(gb.sound[0].music);
    while (sfRenderWindow_isOpen(gb.disev.window)) {
        gb.clock.time = sfClock_getElapsedTime(gb.clock.clock);
        gb.clock.seconds = gb.clock.time.microseconds / 1000000.0;
        sfRenderWindow_clear(gb.disev.window, sfBlack);
        manage_event(&gb);
        manage_screen(&gb);
        sfRenderWindow_display(gb.disev.window);
        gb.clock.save_sec = gb.clock.seconds;
    }
    call_destroy(&gb);
    return 0;
}

int main(int ac, char **av)
{
    srand(time(NULL));

    if (ac == 1)
        return(game_loop());
    else
        return 84;
}