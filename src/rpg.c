/*
** EPITECH PROJECT, 2018
** rpg.cc
** File description:
** rpg.cc
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include "../include/my.h"

void initia_variable(global *gb)
{
    gb->selecscreen.sc = 0;
}

void initia_window(global *gb)
{
    gb->disev.video_mode.width = 1920;
    gb->disev.video_mode.height = 1080;
    gb->disev.video_mode.bitsPerPixel = 32;

    gb->disev.window = sfRenderWindow_create(gb->disev.video_mode, "RPG",
        sfDefaultStyle, NULL);
}

struct s_sprite *initia_sprite(global *gb)
{
    gb->sprite->texture = sfTexture_createFromFile(
        "/home/Monfred/Epitech_Project/MUL_my_rpg_2018/assets/graphics/menu_background.png",
        NULL);
    gb->sprite[0].sprite = sfSprite_create();
    sfSprite_setTexture(gb->sprite->sprite, gb->sprite->texture, sfTrue);
    //gb->sprite->pos = pos;
    //gb->sprite->rect = rect;
    return (gb->sprite);
}

void call_initia_function(global *gb)
{
    initia_variable(gb);
    initia_window(gb);
    gb->sprite[0] = *initia_sprite(gb);
}

void manage_event_menu(global *gb)
{
}

void display_menu(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window,gb->sprite[0].sprite, NULL);
}

void manage_event(global *gb)
{
    while (sfRenderWindow_pollEvent(gb->disev.window, &gb->disev.event)) {
        if (gb->disev.event.type == sfEvtClosed)
            sfRenderWindow_close(gb->disev.window);
    }
    switch (gb->selecscreen.sc) {
        case 0:
            manage_event_menu(gb);
    }
}

void manage_screen(global *gb)
{
    switch (gb->selecscreen.sc) {
        case 0:
            display_menu(gb);
    }
}

void call_destroy(global *gb)
{
    sfRenderWindow_destroy(gb->disev.window);
}

void game_loop()
{
    global gb;
    call_initia_function(&gb);

    while (sfRenderWindow_isOpen(gb.disev.window)) {
        sfRenderWindow_clear(gb.disev.window, sfBlack);
        manage_event(&gb);
        manage_screen(&gb);
        sfRenderWindow_display(gb.disev.window);
    }
    call_destroy(&gb);
}

int main(int ac, char **av)
{
    if (ac == 1)
        game_loop();
    else
        return 84;
}
