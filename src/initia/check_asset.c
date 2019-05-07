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
    for (int i = 0; i < NUMBER_SPRITE; i++)
        if (gb->sprite[i].texture == NULL)
            return 84;
    return 0;
}

int check_sound(global *gb)
{
    for (int i = 0; i < NUMBER_SOUND; i++)
        if (gb->sound[i].music == NULL)
            return 84;
    if (gb->sound[0].music == NULL)
        return 84;
    return 0;
}

int check_mob(global *gb)
{
    for (int i = 0; i <= NB_MOB; i++)
        if (gb->mob[i].texture == NULL)
            return 84;
    return 0;
}

int check_font(global *gb)
{
    for (int i = 0; i <= NUMBER_TEXT; i++)
        if (gb->text[i].font == NULL)
            return 84;
    return 0;
}

int check_assets(global *gb)
{
    if (check_texture(gb) == 84)
        return 84;
    if (check_sound(gb) == 84)
        return 84;
    if (check_mob(gb) == 84)
        return 84;
    if (check_font(gb) == 84)
        return 84;
    return 0;
}