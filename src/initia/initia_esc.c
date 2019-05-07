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
    gb->button[BUTTON_RETOUR_ESC] = *initia_button(
        &gb->button[BUTTON_RETOUR_ESC], (sfVector2f) {580, 100}, (sfVector2f)
        {280, 50});
    gb->button[BUTTON_SAVE] = *initia_button(&gb->button[BUTTON_SAVE],
        (sfVector2f) {700, 100}, (sfVector2f) {280, 200});
    gb->button[BUTTON_OPTION_ESC] = *initia_button(
        &gb->button[BUTTON_OPTION_ESC],
        (sfVector2f) {560, 100}, (sfVector2f) {280, 350});
    gb->button[BUTTON_BACK_MENU] = *initia_button(&gb->button[BUTTON_BACK_MENU],
        (sfVector2f) {1050, 100}, (sfVector2f) {280, 500});
    gb->button[BUTTON_QUIT_ESC] = *initia_button(&gb->button[BUTTON_QUIT_ESC],
        (sfVector2f) {1280, 200}, (sfVector2f) {280, 650});
}

void initia_text_esc(global *gb)
{
    char *send[3] = {"Continuer", "./assets/font/GODOFWAR.TTF", NULL};
    initia_text(&gb->text[TXT_CONTINUE], send, (sfVector2f)
        {280, 50}, sfWhite, 100);
    send[0] = my_strdup("Sauvegarder");
    initia_text(&gb->text[TXT_SAVE], send, (sfVector2f)
        {280, 200}, sfWhite, 100);
    send[0] = my_strdup("Options");
    initia_text(&gb->text[TXT_OPTION], send, (sfVector2f)
        {280, 350}, sfWhite, 100);
    send[0] = my_strdup("Retourner au menu");
    initia_text(&gb->text[TXT_BACK_MENU], send, (sfVector2f)
        {280, 500}, sfWhite, 100);
    send[0] = my_strdup("Quitter vers le Bureau");
    initia_text(&gb->text[TXT_QUIT], send, (sfVector2f)
        {280, 650}, sfWhite, 100);
}