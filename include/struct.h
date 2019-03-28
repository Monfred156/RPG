/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

struct s_sprite {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfRectangleShape *rect;
};

struct s_text {
    sfText *text;
    sfVector2f pos;
    sfUint8 red;
    sfUint8 green;
    sfUint8 blue;
    sfUint8 alpha;
    sfColor color;
};

struct s_sound {
    sfMusic *music;
    int sound;
};

struct s_button {
    sfRectangleShape *button;
    sfVector2f pos;
};

struct s_selectscreen {
    int sc;
};

struct s_display {
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfEvent event;
    sfVector2u size;
};

struct s_global {
    struct s_selectscreen selecscreen;
    struct s_display disev;
    struct s_sprite sprite[5];
    struct s_text text;
    struct s_sound sound;
    struct s_button button;
};

typedef struct s_global global;

#endif

