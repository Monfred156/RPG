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
    gb->disev.kill = -1;
    gb->quest[0].open = 0;
    gb->selecscreen.sc = 8;
}

void call_initia_function_next(global *gb)
{
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

void call_initia_function(global *gb)
{
    initia_screen(gb);
    initia_stats(gb);
    initia_window(gb);
    initia_time(gb);
    initia_text_stats(gb);
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
    call_initia_function_next(gb);

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