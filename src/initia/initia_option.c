/*
** EPITECH PROJECT, 2018
** initia
** File description:
** option.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_option(global *gb)
{
    char *send[3] = {"Quitter", "./assets/font/GODOFWAR.TTF", NULL};

    gb->sprite[OPTION_BACKGROUND] = *initia_sprite(&gb->sprite[OPTION_BACKGROUND],
            "./assets/graphics/options.jpg",
            (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    initia_text(&gb->text[TXT_QUITTER], send, (sfVector2f){500, 200}, sfWhite, 100);
    send[0] = my_strdup("Son");
    initia_text(&gb->text[TXT_SON], send, (sfVector2f){550, 500}, sfWhite, 100);
    send[0] = my_strdup("Retour");
    initia_text(&gb->text[TXT_RETOUR], send, (sfVector2f){50, 0}, sfWhite, 70);
}

void initia_button_option(global *gb)
{
    gb->button[BUTTON_QUITTER] = *initia_button(&gb->button[BUTTON_QUITTER],
            (sfVector2f) {900, 100}, (sfVector2f) {500, 200});
    gb->button[BUTTON_SON] = *initia_button(&gb->button[BUTTON_SON],
            (sfVector2f) {600, 100}, (sfVector2f) {550, 500});
}