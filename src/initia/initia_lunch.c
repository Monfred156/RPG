/*
** EPITECH PROJECT, 2018
** initia_lunch
** File description:
** initia_lunch
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_launch(global *gb)
{
    char *send[3] = {"Nouvelle partie", "./assets/font/GODOFWAR.TTF", NULL};

    gb->sprite[LUNCH] = *initia_sprite(&gb->sprite[LUNCH],
        "./assets/graphics/lunch.jpg",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    initia_text(&gb->text[0], send, (sfVector2f){500, 200}, sfWhite, 100);
    send[0] = my_strdup("Continuer");
    initia_text(&gb->text[1], send, (sfVector2f){550, 500}, sfWhite, 100);
}