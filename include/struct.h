/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>

struct s_sprite {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
};

struct s_text {
    sfText *text;
    sfFont *font;
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
    sfRectangleShape *rect;
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

struct s_hitbox {
    sfRectangleShape *hitbox;
    sfVector2f pos;
};

struct s_clock {
    sfClock *clock;
    sfTime time;
    float seconds;
    float save_sec;
};

struct s_movement {
    int movement;
    int walk;
};

struct s_teleport {
    sfRectangleShape *teleport;
    sfVector2f pos;
};

struct s_mob {
    int life;
    int attack;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
};

struct s_stats {
    int life;
    int head;
    int body;
    int leg;
    int foot;
    int weapon;
    int xp;
};
typedef struct s_stats stats;

struct s_global {
    struct s_teleport teleport[2];
    struct s_selectscreen selecscreen;
    struct s_display disev;
    struct s_sprite sprite[7];
    struct s_text text[2];
    struct s_sound sound[0];
    struct s_button button[3];
    struct s_hitbox hitbox[37];
    struct s_clock clock;
    struct s_movement move[2];
    struct s_mob mob[1];
};
typedef struct s_global global;

#endif