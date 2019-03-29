/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** menu
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include "../include/my.h"

void manage_event_menu(global *gb)
{
}

void display_menu(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[0].sprite, NULL);
}

