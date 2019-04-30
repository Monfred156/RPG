/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_menu(global *gb)
{
    gb->sprite[MENU_BACKGROUND] = *initia_sprite(&gb->sprite[MENU_BACKGROUND],
        "./assets/graphics/menu_background.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
}

void initia_button_menu(global *gb)
{
    gb->button[BUTTON_PLAY] = *initia_button(&gb->button[BUTTON_PLAY],
        (sfVector2f) {450, 150}, (sfVector2f) {1420, 500});
    gb->button[BUTTON_OPTION] = *initia_button(&gb->button[BUTTON_OPTION],
        (sfVector2f) {460, 150}, (sfVector2f) {1380, 670});
    gb->button[BUTTON_QUIT] = *initia_button(&gb->button[BUTTON_QUIT],
        (sfVector2f) {520, 150}, (sfVector2f) {1310, 840});
}