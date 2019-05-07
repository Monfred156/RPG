/*
** EPITECH PROJECT, 2018
** initia
** File description:
** option.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_all_basic(global *gb)
{
    initia_screen(gb);
    initia_stats(gb);
    initia_window(gb);
    initia_time(gb);
}

void initia_all_inventory(global *gb)
{
    initia_text_stats(gb);
    initia_inventory(gb);
    initia_button_inventory(gb);
}

void initia_all_menu(global *gb)
{
    initia_sprite_menu(gb);
    initia_button_menu(gb);
    initia_sound_menu(gb);
    initia_pos_particule_menu(gb);
}

void call_initia_function(global *gb)
{
    initia_all_basic(gb);
    initia_all_inventory(gb);
    initia_all_menu(gb);
    initia_all_lauch(gb);
    initia_all_tuto(gb);
    initia_all_town(gb);
    initia_all_options(gb);
    initia_all_ash(gb);
}