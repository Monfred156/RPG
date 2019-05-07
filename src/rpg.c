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
    gb->selecscreen.sc = 0;
    gb->selecscreen.back_back = 0;
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