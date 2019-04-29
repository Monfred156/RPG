/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

int check_texture(global *gb)
{
    if (gb->sprite[0].texture == NULL)
        return 84;
    for (int i = 0; gb->sprite[i].texture != NULL; i++) {
        if (gb->sprite[i].texture == NULL)
            return 84;
    }
    return 0;
}

int check_assets(global *gb)
{
    if (check_texture(gb) == 84)
        return 84;
    return 0;
}