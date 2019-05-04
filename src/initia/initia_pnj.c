/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_pnj(global *gb)
{
    gb->mob[0] = *initia_sprite_mob(&gb->mob[0],
        "./assets/graphics/orck.png", (sfVector2f) {1800, 900},
        (sfIntRect) {0, 0, 150, 150});
        gb->move[1].movement = 0;
        gb->move[1].walk = 0;
        gb->mob[0].rand = 0;
        gb->mob[0].time = 0;
        gb->mob[0].life = 10;
        gb->mob[0].attack = 1;
    for (int i = 1; i < NB_MOB; i++) {
        gb->mob[i] = *initia_sprite_mob(&gb->mob[i],
        "./assets/graphics/orck.png", (sfVector2f) {600 + (100 * i), 900},
        (sfIntRect) {0, 0, 150, 150});
        gb->move[i + 1].movement = 0;
        gb->move[i + 1].walk = 0;
        gb->mob[i].rand = 0;
        gb->mob[i].time = 0;
        gb->mob[i].life = 10;
        gb->mob[i].attack = 1;
    }
}