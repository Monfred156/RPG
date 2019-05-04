/*
** EPITECH PROJECT, 2018
** initia
** File description:
** shop.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_var_town(global *gb)
{
    gb->trader.open = 0;
}

void initia_button_shop(global *gb)
{
    gb->button[BUTTON_BUY1] = *initia_button(&gb->button[BUTTON_BUY1],
            (sfVector2f) {35, 20}, (sfVector2f) {1518, 370});
    gb->button[BUTTON_BUY2] = *initia_button(&gb->button[BUTTON_BUY2],
            (sfVector2f) {35, 20}, (sfVector2f) {1518, 425});
    gb->button[BUTTON_BUY3] = *initia_button(&gb->button[BUTTON_BUY3],
            (sfVector2f) {35, 20}, (sfVector2f) {1518, 487});
    gb->button[BUTTON_BUY4] = *initia_button(&gb->button[BUTTON_BUY4],
            (sfVector2f) {35, 20}, (sfVector2f) {1518, 542});
    gb->button[BUTTON_BUY5] = *initia_button(&gb->button[BUTTON_BUY5],
            (sfVector2f) {35, 20}, (sfVector2f) {1518, 608});
    gb->button[BUTTON_BUY6] = *initia_button(&gb->button[BUTTON_BUY6],
            (sfVector2f) {35, 20}, (sfVector2f) {1518, 669});
    gb->button[BUTTON_BUY7] = *initia_button(&gb->button[BUTTON_BUY7],
            (sfVector2f) {35, 20}, (sfVector2f) {1667, 370});
    gb->button[BUTTON_BUY8] = *initia_button(&gb->button[BUTTON_BUY8],
            (sfVector2f) {35, 20}, (sfVector2f) {1667, 425});
    gb->button[BUTTON_BUY9] = *initia_button(&gb->button[BUTTON_BUY9],
            (sfVector2f) {35, 20}, (sfVector2f) {1668, 487});
    gb->button[BUTTON_BUY10] = *initia_button(&gb->button[BUTTON_BUY10],
            (sfVector2f) {35, 20}, (sfVector2f) {1668, 543});
    gb->button[BUTTON_BUY11] = *initia_button(&gb->button[BUTTON_BUY11],
            (sfVector2f) {35, 20}, (sfVector2f) {1668, 607});
    gb->button[BUTTON_BUY12] = *initia_button(&gb->button[BUTTON_BUY12],
            (sfVector2f) {35, 20}, (sfVector2f) {1668, 669});
}