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
    int back;
};

struct s_display {
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfEvent event;
    sfVector2u size;
    int tele;
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
    int rand;
    float time;
};

struct s_smoke {
    double posx[PARTICULES+1];
    double posy[PARTICULES+1];
};

struct s_hud {
    sfRectangleShape *rect;
    sfVector2f pos;
};

struct s_inventory {
    int inv[30];
    int open;
};

struct s_trader {
    sfRectangleShape *talk;
    sfVector2f pos;
    int open;
};

struct s_stats {
    int life;
    int head;
    int body;
    int foot;
    int weapon;
    int xp;
    int gold;
    int damage;
    int sceen;
    int posx;
    int posy;
};

struct s_quest {
    sfRectangleShape *shape;
    sfVector2f size;
    sfVector2f pos;
    int quest;
    int open;
};

struct s_fight {
    int mob;
    float time_atk;
    float take_dmg;
    float save_y;
    float save_x;
    int initia;
    sfVector2f dead;
};

struct s_global {
    struct s_quest quest[4];
    struct s_teleport teleport[5];
    struct s_selectscreen selecscreen;
    struct s_display disev;
    struct s_sprite sprite[33];
    struct s_text text[9];
    struct s_sound sound[2];
    struct s_button button[41];
    struct s_hitbox hitbox[61];
    struct s_clock clock;
    struct s_movement move[7];
    struct s_mob mob[6];
    struct s_smoke smoke;
    struct s_inventory inv;
    struct s_stats stats;
    struct s_trader trader;
    struct s_fight fght;
    struct s_hud hud[2];
};
typedef struct s_global global;

#endif