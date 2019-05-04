/*
** EPITECH PROJECT, 2018
** tavern
** File description:
** tavern
*/

#include "function.h"

void initia_inventory(global *gb)
{
    for (int i = 0; i<= 30; i++)
        gb->inv.inv[i] = 0;
}

void initia_button_inventory(global *gb)
{
    gb->button[BUTTON_INV1] = *initia_button(&gb->button[BUTTON_INV1],
        (sfVector2f) {40, 40}, (sfVector2f) {1098, 354});
    gb->button[BUTTON_INV2] = *initia_button(&gb->button[BUTTON_INV2],
        (sfVector2f) {40, 40}, (sfVector2f) {1146, 354});
    gb->button[BUTTON_INV3] = *initia_button(&gb->button[BUTTON_INV3],
        (sfVector2f) {40, 40}, (sfVector2f) {1194, 354});
    gb->button[BUTTON_INV4] = *initia_button(&gb->button[BUTTON_INV4],
        (sfVector2f) {40, 40}, (sfVector2f) {1242, 354});
    gb->button[BUTTON_INV5] = *initia_button(&gb->button[BUTTON_INV5],
        (sfVector2f) {40, 40}, (sfVector2f) {1290, 354});

    gb->button[BUTTON_INV6] = *initia_button(&gb->button[BUTTON_INV6],
        (sfVector2f) {40, 40}, (sfVector2f) {1098, 402});
    gb->button[BUTTON_INV7] = *initia_button(&gb->button[BUTTON_INV7],
        (sfVector2f) {40, 40}, (sfVector2f) {1146, 402});
    gb->button[BUTTON_INV8] = *initia_button(&gb->button[BUTTON_INV8],
        (sfVector2f) {40, 40}, (sfVector2f) {1194, 402});
    gb->button[BUTTON_INV9] = *initia_button(&gb->button[BUTTON_INV9],
        (sfVector2f) {40, 40}, (sfVector2f) {1242, 402});
    gb->button[BUTTON_INV10] = *initia_button(&gb->button[BUTTON_INV10],
        (sfVector2f) {40, 40}, (sfVector2f) {1290, 402});

    gb->button[BUTTON_INV11] = *initia_button(&gb->button[BUTTON_INV11],
        (sfVector2f) {40, 40}, (sfVector2f) {1098, 450});
    gb->button[BUTTON_INV12] = *initia_button(&gb->button[BUTTON_INV12],
        (sfVector2f) {40, 40}, (sfVector2f) {1146, 450});
    gb->button[BUTTON_INV13] = *initia_button(&gb->button[BUTTON_INV13],
        (sfVector2f) {40, 40}, (sfVector2f) {1194, 450});
    gb->button[BUTTON_INV14] = *initia_button(&gb->button[BUTTON_INV14],
        (sfVector2f) {40, 40}, (sfVector2f) {1242, 450});
    gb->button[BUTTON_INV15] = *initia_button(&gb->button[BUTTON_INV15],
        (sfVector2f) {40, 40}, (sfVector2f) {1290, 450});
}


