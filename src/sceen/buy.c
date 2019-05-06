/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

int function_buy(global *gb, int i, int weap)
{
    if (gb->inv.inv[i] == 0) {
        gb->inv.inv[i] = SWORD;
        return (15);
    }
    return (0);
}

void function_buy1(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
    gb->button[BUTTON_BUY1].rect) == 0)
        for (int i = 0; i <= 15; i++)
            i += function_buy(gb, i, SWORD);
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
    gb->button[BUTTON_BUY2].rect) == 0)
        for (int i = 0; i <= 15; i++)
            i += function_buy(gb, i, SWORD1);
}

void function_buy2(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
    gb->button[BUTTON_BUY3].rect) == 0)
        for (int i = 0; i <= 15; i++)
            i += function_buy(gb, i, AXE);
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
    gb->button[BUTTON_BUY4].rect) == 0)
        for (int i = 0; i <= 15; i++)
            i += function_buy(gb, i, LANCE);
}

void function_buy3(global *gb)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
    gb->button[BUTTON_BUY5].rect) == 0)
        for (int i = 0; i <= 15; i++)
            i += function_buy(gb, i, SWORD2);
    if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
    gb->button[BUTTON_BUY6].rect) == 0)
        for (int i = 0; i <= 15; i++)
            i += function_buy(gb, i, SHIELD);
}
