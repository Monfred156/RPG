/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_variable(global *gb)
{
    gb->selecscreen.sc = 0;
}

void *call_initia_function(global *gb)
{
    initia_variable(gb);
    initia_window(gb);
    initia_time(gb);
    initia_sprite_menu(gb);
    initia_button_menu(gb);
    initia_sprite_tuto(gb);
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
    }
}

void manage_screen(global *gb)
{
    switch (gb->selecscreen.sc) {
        case 0:
            display_menu(gb);
            break;
        case 5:
            display_tuto(gb);
            break;
    }
}

void call_destroy(global *gb)
{
    sfRenderWindow_destroy(gb->disev.window);
}

int game_loop()
{
    global gb;
    call_initia_function(&gb);
    if (check_assets(&gb) == 84)
        return 84;

    while (sfRenderWindow_isOpen(gb.disev.window)) {
        sfRenderWindow_clear(gb.disev.window, sfBlack);
        manage_event(&gb);
        manage_screen(&gb);
        sfRenderWindow_display(gb.disev.window);
    }
    call_destroy(&gb);
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 1)
        return(game_loop());
    else
        return 84;
}
