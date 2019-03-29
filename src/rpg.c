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

struct s_sprite *initia_sprite(global *gb, char *path, sfVector2f pos,
    sfIntRect rect
)
{
    gb->sprite->texture = sfTexture_createFromFile(path, NULL);
    gb->sprite->sprite = sfSprite_create();
    sfSprite_setTexture(gb->sprite->sprite, gb->sprite->texture, sfTrue);
    gb->sprite->pos = pos;
    gb->sprite->rect = rect;
    return (gb->sprite);
}

struct s_text *initia_text(global *gb, char **string, sfVector2f
    pos, sfUint8 const *color, uint *array)
{
    gb->text->red = color[0];
    gb->text->green = color[1];
    gb->text->blue = color[2];
    gb->text->alpha = color[3];
    gb->text->color = sfColor_fromRGBA(gb->text->red, gb->text->green,
        gb->text->blue, gb->text->alpha);
    gb->text->pos = pos;

    gb->text->text = sfText_create();
    sfText_setString(gb->text->text, string[0]);
    sfFont_createFromFile(string[1]);
    sfText_setFillColor(gb->text->text, gb->text->color);
    sfText_setFont(gb->text->text, gb->text->font);
    sfText_setCharacterSize(gb->text->text, array[0]);
    sfText_setPosition(gb->text->text, gb->text->pos);
    sfText_setStyle(gb->text->text, array[1]);
}

struct s_sound *initia_sound(global *gb, char *path)
{
    gb->sound->music = sfMusic_createFromFile(path);
    return (gb->sound);
}

struct s_button *initia_button(global *gb, sfVector2f size, sfVector2f
    pos)
{
    gb->button->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(gb->button->rect, size);
    sfRectangleShape_setPosition(gb->button->rect, pos);

}

void call_initia_function(global *gb)
{
    initia_variable(gb);
    initia_window(gb);
    gb->sprite[0] = *initia_sprite(gb, "./assets/graphics/menu_background.png",
        (sfVector2f) {0, 0}, (sfIntRect){0, 0, 1920, 1080});
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
