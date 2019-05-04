/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** menu
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void manage_event_menu(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_PLAY].rect) == 0) {
        gb->selecscreen.sc = 1; ///BOUTON JOUER -> SAVE
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_OPTION].rect) == 0) {
        gb->selecscreen.sc = 2; ///BOUTON OPTION -> OPTION
        gb->selecscreen.back = 0;
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_QUIT].rect) == 0) {
        sfRenderWindow_close(gb->disev.window); ///QUITTER
    }
}

void move_sprite(global *gb)
{
    static float sec_anim = 0;

    sec_anim += gb->clock.seconds - gb->clock.save_sec;
    if (sec_anim >= 0.00005) {
        for (int i = 0; i <= PARTICULES; i++) {
            gb->smoke.posx[i] += 10;
            gb->smoke.posy[i] += 20;
            if (gb->smoke.posx[i] >= 2100) {
                gb->smoke.posx[i] = rand() / 1920 * (1920 - 500) % 1920;
            }
            if (gb->smoke.posy[i] >= 1300) {
                gb->smoke.posy[i] = -(rand() / 1920 * (1920 - 1) % 1920);
            }
        }
        sec_anim = 0;
    }
}

void handle_all_particules(global *gb)
{
    sfVector2f pos;
    sfVector2f scale;

    for (int i = 0; i <= PARTICULES; i++) {
        pos.x = gb->smoke.posx[i];
        pos.y = gb->smoke.posy[i];
        sfSprite_setPosition(gb->sprite[RAIN_PARTICULES].sprite, pos);
        scale.x = rand() % 2;
        scale.y = rand() % 2;
        sfSprite_setScale(gb->sprite[RAIN_PARTICULES].sprite, scale);
        sfRenderWindow_drawSprite(gb->disev.window,
            gb->sprite[RAIN_PARTICULES].sprite, NULL);
    }
    move_sprite(gb);
}

void display_menu(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,
        gb->sprite[MENU_BACKGROUND].sprite, NULL);
    handle_all_particules(gb);
}