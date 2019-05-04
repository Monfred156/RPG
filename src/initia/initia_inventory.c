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


