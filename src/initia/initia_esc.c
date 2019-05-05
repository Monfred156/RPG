/*
** EPITECH PROJECT, 2018
** initia_esc
** File description:
** initia_esc
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_esc(global *gb)
{
    char *send[3] = {"Retourner au menu", "./assets/font/GODOFWAR.TTF", NULL};
}

void initia_button_esc(global *gb)
{
    gb->button[BUTTON_QUIT_ESC] = *initia_button(&gb->button[BUTTON_QUIT_ESC],
        (sfVector2f) {1050, 100}, (sfVector2f) {200, 200});
}