/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_pos_particule_menu(global *gb)
{
    sfVector2f pos;

    for (int i = 0; i <= PARTICULES; i++)
    {
        gb->smoke.posx[i] = rand() / 1920 * (1920-500) % 1920;
        gb->smoke.posy[i] = -(rand() / 1920 * (1920-1) % 1920);
        pos.x = gb->smoke.posx[i];
        pos.y = gb->smoke.posy[i];
        sfSprite_setPosition(gb->sprite[RAIN_PARTICULES].sprite, pos);
    }
}

void initia_sprite_menu(global *gb)
{
    gb->sprite[MENU_BACKGROUND] = *initia_sprite(&gb->sprite[MENU_BACKGROUND],
        "./assets/graphics/menu_background.jpg",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    gb->sprite[RAIN_PARTICULES] = *initia_sprite(&gb->sprite[RAIN_PARTICULES],
        "./assets/graphics/rain_particule.png",
        (sfVector2f) {500, 1080}, (sfIntRect) {0, 0, 1920, 1080});

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

void initia_sound_menu(global *gb)
{
    gb->sound[SOUND_MENU] = *initia_sound(&gb->sound[SOUND_MENU],
        "./assets/sound/sound_menu.ogg", true);
}