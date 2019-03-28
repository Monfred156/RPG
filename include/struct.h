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
};

typedef struct s_global global;

#endif

