/*
** EPITECH PROJECT, 2018
** lunch_game
** File description:
** lunch_game
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void launch_intercat(global *gb, int nb, sfVector2f pos, sfVector2f size)
{
    sfVector2i click;

    click = sfMouse_getPositionRenderWindow(gb->disev.window);
    if ((click.x >= pos.x && click.x <= pos.x + size.x) &&
        (click.y >= pos.y && click.y <= pos.y + size.y)) {
        sfText_setFillColor(gb->text[nb].text, sfRed);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            gb->selecscreen.sc = 6;
    } else
        sfText_setFillColor(gb->text[nb].text, sfWhite);
}

void display_lunch(global *gb)
{
    sfRenderWindow_drawSprite(gb->disev.window, gb->sprite[LUNCH].sprite, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[0].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[1].text, NULL);
}

void manage_event_lunch(global *gb)
{
    launch_intercat(gb, 0, (sfVector2f){500, 200}, (sfVector2f){900, 100});
    launch_intercat(gb, 1, (sfVector2f){550, 500}, (sfVector2f){600, 100});
    display_lunch(gb);
}