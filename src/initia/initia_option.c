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
    char *send[3] = {"Retourner au menu", "./assets/font/GODOFWAR.TTF", NULL};

    gb->sprite[OPTION_BACKGROUND] = *initia_sprite(&gb->sprite[OPTION_BACKGROUND],
            "./assets/graphics/options.jpg",
            (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    initia_text(&gb->text[TXT_BACK_MENU], send, (sfVector2f){200, 300}, sfWhite, 100);
    send[0] = my_strdup("Son");
    initia_text(&gb->text[TXT_SON], send, (sfVector2f){550, 500}, sfWhite, 100);
    send[0] = my_strdup("Retour");
    initia_text(&gb->text[TXT_RETOUR], send, (sfVector2f){50, 0}, sfWhite, 70);
}

void initia_button_option(global *gb)
{
    gb->button[BUTTON_BACK_MENU] = *initia_button(&gb->button[BUTTON_BACK_MENU],
            (sfVector2f) {1050, 100}, (sfVector2f) {200, 300});
    gb->button[BUTTON_SON] = *initia_button(&gb->button[BUTTON_SON],
            (sfVector2f) {230, 100}, (sfVector2f) {550, 500});
}