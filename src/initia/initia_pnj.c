/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_mob(global *gb)
{
    gb->mob[0] = *initia_sprite_mob(&gb->mob[0],
    "./assets/graphics/orck.png", (sfVector2f) {1800, 900},
    (sfIntRect) {0, 0, 150, 150});
    for (int i = 1; i < NB_MOB; i++) {
        gb->mob[i] = *initia_sprite_mob(&gb->mob[i],
            "./assets/graphics/orck.png", (sfVector2f) {600 + (100 * i), 900},
            (sfIntRect) {0, 0, 150, 150});
    }
    for (int i = 0; i < NB_MOB; i++) {
        gb->move[i + 1].movement = 0;
        gb->move[i + 1].walk = 0;
        gb->mob[i].rand = 0;
        gb->mob[i].time = 0;
        gb->mob[i].life = 10;
        gb->mob[i].attack = 10;
    }
}

void initia_pnj(global *gb)
{
    initia_mob(gb);
    gb->sprite[PNJ_BEND] = *initia_sprite(&gb->sprite[PNJ_BEND],
        "./assets/graphics/PNJ/pnj_A.png", (sfVector2f){1000, 400},
        (sfIntRect){0, 0, 32, 50});
     gb->quest[0] =*initia_quest(&gb->quest[0], (sfVector2f){130, 130},
         (sfVector2f){930, 380}, 0);
    gb->sprite[PNJ_RED] = *initia_sprite(&gb->sprite[PNJ_RED],
        "./assets/graphics/PNJ/pnj_D.png", (sfVector2f){3900, 300},
        (sfIntRect){0, 0, 32, 50});
    gb->quest[1] =*initia_quest(&gb->quest[1], (sfVector2f){130, 130},
        (sfVector2f){3880, 300}, 0);
    gb->sprite[PNJ_GIRL] = *initia_sprite(&gb->sprite[PNJ_GIRL],
        "./assets/graphics/PNJ/pnj_C.png", (sfVector2f){0, 0},
        (sfIntRect){0, 0, 32, 50});
    gb->quest[2] =*initia_quest(&gb->quest[2], (sfVector2f){130, 130},
        (sfVector2f){930, 380}, 0);
    gb->sprite[PNJ_SOLD] = *initia_sprite(&gb->sprite[PNJ_SOLD],
        "./assets/graphics/PNJ/pnj_B.png", (sfVector2f){0, 0},
        (sfIntRect){0, 0, 32, 50});
    gb->sprite[PNJ_PUB] = *initia_sprite(&gb->sprite[PNJ_PUB],
        "./assets/graphics/PNJ/pnj_E.png", (sfVector2f){1150, -260},
        (sfIntRect){0, 0, 32, 50});
    gb->quest[3] =*initia_quest(&gb->quest[3], (sfVector2f){150, 260},
        (sfVector2f){1100, -300}, 0);
    gb->sprite[PNJ_MAJ] = *initia_sprite(&gb->sprite[PNJ_MAJ],
        "./assets/graphics/PNJ/pnj_F.png", (sfVector2f){1000, 400},
        (sfIntRect){0, 0, 32, 50});
    for (int i = PNJ_BEND; i <= PNJ_MAJ; i++)
        sfSprite_setScale(gb->sprite[i].sprite, (sfVector2f){2.3, 2.3});
}