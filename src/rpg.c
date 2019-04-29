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
    gb->sprite[0] = *initia_sprite(gb, "./assets/graphics/menu_background.jpg",
        (sfVector2f) {0, 0}, (sfIntRect){0, 0, 1920, 1080});

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
    }
}

void manage_screen(global *gb)
{
    switch (gb->selecscreen.sc) {
        case 0:
            display_menu(gb);
        case 5:
            display_tuto(gb);
    }
}

void call_destroy(global *gb)
{
    sfRenderWindow_destroy(gb->disev.window);
}

int game_loop()
{
    global gb;
    if (call_initia_function(&gb) == NULL)
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
