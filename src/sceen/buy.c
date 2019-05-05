/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void function_buy1(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY1].rect) == 0) {
        for (int i = 0; i <= 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = SWORD;
                break;
            }
        }
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY2].rect) == 0) {
        for (int i = 0; i <= 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = SWORD1;
                break;
            }
        }
    }
}

void function_buy2(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY3].rect) == 0) {
        for (int i = 0; i <= 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = AXE;
                break;
            }
        }
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY4].rect) == 0) {
        for (int i = 0; i <= 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = LANCE;
                break;
            }
        }
    }
}

void function_buy3(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY5].rect) == 0) {
        for (int i = 0; i <= 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = SWORD2;
                break;
            }
        }
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY6].rect) == 0) {
        for (int i = 0; i <= 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = SHIELD;
                break;
            }
        }
    }
}
