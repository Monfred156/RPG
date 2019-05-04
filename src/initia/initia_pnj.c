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
    for (int i = 0; i < NB_MOB; i++) {
        gb->mob[i] = *initia_sprite_mob(&gb->mob[i],
        "./assets/graphics/orck.png", (sfVector2f) {800, 400},
        (sfIntRect) {0, 0, 150, 150});
        gb->move[i + 1].movement = 0;
        gb->move[i + 1].walk = 0;
        gb->mob[i].rand = 0;
        gb->mob[i].time = 0;
        gb->mob[i].life = 10;
        gb->mob[i].attack = 1;
    }
}