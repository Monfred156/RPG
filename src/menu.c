/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** menu
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_menu(global *gb)
{
}

void display_menu(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
    gb->sprite[menu_background].sprite, NULL);
    
}