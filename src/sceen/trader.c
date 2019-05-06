/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void function_buy4(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY7].rect) == 0) {
        for (int i = 0; i < 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = HEAD2;
                break;
            }
        }
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY8].rect) == 0) {
        for (int i = 0; i < 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = ARMOR2;
                break;
            }
        }
    }
}

void function_buy5(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY9].rect) == 0) {
        for (int i = 0; i < 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = LEGS2;
                break;
            }
        }
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY10].rect) == 0) {
        for (int i = 0; i < 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = HEAD;
                break;
            }
        }
    }
}

void function_buy6(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY11].rect) == 0) {
        for (int i = 0; i < 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = ARMOR;
                break;
            }
        }
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
        gb->button[BUTTON_BUY12].rect) == 0) {
        for (int i = 0; i < 15; i++) {
            if (gb->inv.inv[i] == 0) {
                gb->inv.inv[i] = LEGS;
                break;
            }
        }
    }
}

void manage_buy(global *gb, float *sec_buy)
{
    if (*sec_buy >= 0.1) {
        function_buy1(gb);
        function_buy2(gb);
        function_buy3(gb);
        function_buy4(gb);
        function_buy5(gb);
        function_buy6(gb);
        *sec_buy = 0;
    }
}

void event_trader(global *gb)
{
    static float sec_buy = 0;

    sec_buy += gb->clock.seconds - gb->clock.save_sec;
    if (collision_between__sprite(gb->sprite[HERO].sprite, gb->trader.talk)
        == 1 && sfKeyboard_isKeyPressed(sfKeyE)) {
        gb->trader.open = 1;
        gb->inv.open = 1;
    } if (collision_between__sprite(gb->sprite[HERO].sprite, gb->trader.talk)
        == 0) {
        gb->trader.open = 0;
    }
    if (gb->trader.open == 1) {
        manage_buy(gb, &sec_buy);
    }
}