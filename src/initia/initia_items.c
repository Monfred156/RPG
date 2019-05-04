/*
** EPITECH PROJECT, 2018
** tavern
** File description:
** tavern
*/

#include "function.h"

void initia_items2(global *gb)
{
    gb->sprite[LEGS] = *initia_sprite(&gb->sprite[LEGS],
        "./assets/graphics/items/legs.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[LEGS2] = *initia_sprite(&gb->sprite[LEGS2],
        "./assets/graphics/items/legs_2.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[SHIELD] = *initia_sprite(&gb->sprite[SHIELD],
        "./assets/graphics/items/shield.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[SWORD] = *initia_sprite(&gb->sprite[SWORD],
        "./assets/graphics/items/sword.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[SWORD1] = *initia_sprite(&gb->sprite[SWORD1],
        "./assets/graphics/items/sword2.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[SWORD2] = *initia_sprite(&gb->sprite[SWORD2],
        "./assets/graphics/items/sword3.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
}

void initia_items(global *gb)
{
    gb->sprite[AXE] = *initia_sprite(&gb->sprite[AXE],
        "./assets/graphics/items/axe.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[ARMOR] = *initia_sprite(&gb->sprite[ARMOR],
        "./assets/graphics/items/chest.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[ARMOR2] = *initia_sprite(&gb->sprite[ARMOR2],
        "./assets/graphics/items/chest_2.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[HEAD] = *initia_sprite(&gb->sprite[HEAD],
        "./assets/graphics/items/head.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[HEAD2] = *initia_sprite(&gb->sprite[HEAD2],
        "./assets/graphics/items/head_2.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    gb->sprite[LANCE] = *initia_sprite(&gb->sprite[LANCE],
        "./assets/graphics/items/lance.png",
        (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 40, 39});
    initia_items2(gb);
}

