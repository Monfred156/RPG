/*
** EPITECH PROJECT, 2018
** initia
** File description:
** option.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_all_lauch(global *gb)
{
    initia_sprite_launch(gb);
    initia_button_launch(gb);
}

void initia_all_tuto(global *gb)
{
    initia_var_tuto(gb);
    initia_sprite_tuto(gb);
    initia_hitbox_tuto(gb);
    initia_button_tuto(gb);
}

void initia_all_town(global *gb)
{
    initia_var_town(gb);
    initia_button_town(gb);
    initia_hitbox_town(gb);
    initia_sprite_town(gb);
    initia_sprite_pub(gb);
    initia_button_pub(gb);
    initia_hitbox_pub(gb);
    initia_button_shop(gb);
    initia_sprite_speak(gb);
    initia_dialogue(gb);
    initia_pnj(gb);
}

void initia_all_options(global *gb)
{
    initia_sprite_option(gb);
    initia_text_option(gb);
    initia_button_option(gb);
    initia_sprite_esc(gb);
    initia_text_esc(gb);
    initia_button_esc(gb);
}

void initia_all_ash(global *gb)
{
    initia_sprite_ash(gb);
    initia_hitbox_ash(gb);
    initia_fight(gb);
    initia_items(gb);
    initia_button_ash(gb);
}