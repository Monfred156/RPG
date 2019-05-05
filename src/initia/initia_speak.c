/*
** EPITECH PROJECT, 2018
** initia_speak
** File description:
** initia_speak
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_speak(global *gb, int sprite)
{
    gb->sprite[] = *initia_sprite(&gb->sprite[MENU_BACKGROUND],
        "./assets/graphics/menu_background.jpg",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
}

void dialogue_pnj(global *gb, int sprite)
{
    sprite -= 26;

    sfRenderWindow_drawText(gb->disev.window, gb->text[PNJ_TUTO].text, NULL);
}

void initia_dialogue(global *gb)
{
    char *send[3] = {"Bonjour aventurier!\nVas-te chercher un equipement "
                     "plus adapte de le coffre la-bas.\nEt entraine toi sur"
                     " ce monstre!", "./assets/font/arial.ttf", NULL};

    initia_text(&gb->text[PNJ_TUTO], send, (sfVector2f){1300, 800}, sfBlack, 30);
}