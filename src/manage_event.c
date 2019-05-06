/*
** EPITECH PROJECT, 2018
** mange_event
** File description:
** mange_event
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_next(global *gb)
{
    switch (gb->selecscreen.sc) {
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

void manage_event(global *gb)
{
    while (sfRenderWindow_pollEvent(gb->disev.window, &gb->disev.event)) {
        if (gb->disev.event.type == sfEvtClosed)
            sfRenderWindow_close(gb->disev.window);
    }
    calculate_xp(gb);
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
    default:
        manage_event_next(gb);
        break;

    }
}

void manage_screen_next(global *gb)
{
    switch (gb->selecscreen.sc) {
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
    default:
        manage_screen_next(gb);
        break;
    }
}