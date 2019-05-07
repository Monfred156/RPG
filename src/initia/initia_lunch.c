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
    "./assets/graphics/launch.jpg",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    gb->sprite[SAVE_CONFIRM] = *initia_sprite(&gb->sprite[SAVE_CONFIRM],
    "./assets/graphics/save_message.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    initia_text(&gb->text[TXT_NEW_GAME], send, (sfVector2f) {500, 200},
    sfWhite, 100);
    send[0] = my_strdup("Continuer");
    initia_text(&gb->text[TXT_CONTINUER], send, (sfVector2f) {550, 500},
    sfWhite, 100);
    send[0] = my_strdup("Retour");
    initia_text(&gb->text[TXT_RETOUR], send, (sfVector2f) {50, 0}, sfWhite, 70);
    gb->sv.save = 0;
}

void initia_button_launch(global *gb)
{
    gb->button[BUTTON_RETOUR] = *initia_button(&gb->button[BUTTON_RETOUR],
        (sfVector2f) {300, 100}, (sfVector2f) {50, 0});
    gb->button[BUTTON_NEW_GAME] = *initia_button(&gb->button[BUTTON_NEW_GAME],
        (sfVector2f) {900, 100}, (sfVector2f) {500, 200});
    gb->button[BUTTON_CONTINUE] = *initia_button(&gb->button[BUTTON_CONTINUE],
        (sfVector2f) {600, 100}, (sfVector2f) {550, 500});
    gb->button[BUTTON_SAVE_CONFIRM_Y] = *initia_button(&gb->button[BUTTON_SAVE_CONFIRM_Y],
        (sfVector2f) {300, 95}, (sfVector2f) {630, 671});
    gb->button[BUTTON_SAVE_CONFIRM_N] = *initia_button(&gb->button[BUTTON_SAVE_CONFIRM_N],
        (sfVector2f) {300, 95}, (sfVector2f) {995, 671});
}