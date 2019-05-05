/*
** EPITECH PROJECT, 2018
** initia_speak
** File description:
** initia_speak
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_sprite_speak(global *gb)
{
    gb->sprite[BACK_TEXT] = *initia_sprite(&gb->sprite[BACK_TEXT],
        "./assets/graphics/bulle.jpg",
        (sfVector2f) {1000, 730}, (sfIntRect) {0, 0, 839, 297});
}

void initia_dialogue(global *gb)
{
    char *send[3] = {"Bonjour aventurier....\nVas-te chercher un equipement "
                     "plus\nadapte au combat dans le coffre la-bas.\nEt essaye de frapper"
                     " ce monstre!\nFais attention a toi mon petit..."
                     , "./assets/font/arial.ttf", NULL};

    initia_text(&gb->text[PNJ_TUTO], send, (sfVector2f){1020, 750}, sfBlack, 40);
    send[0] = my_strdup("Avant j'etais aventurier.. Mais je me suis\n pris"
                        "une fleche dans le genoux..\n\n"
                        "[+] Peux-tu tuer 2 orcs au nom d'Ulfric?");
    initia_text(&gb->text[PNJ_ULFRIC], send, (sfVector2f){1020, 750}, sfBlack, 40);
    send[0] = my_strdup("Salut <3");
    initia_text(&gb->text[PNJ_LIFE], send, (sfVector2f){1020, 750}, sfBlack, 40);
}