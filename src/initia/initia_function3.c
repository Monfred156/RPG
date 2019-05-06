/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"


struct s_hud *initia_hud(struct s_hud *hud, sfVector2f size, sfVector2f pos)
{
    hud->rect = sfRectangleShape_create();
    hud->pos = pos;
    sfRectangleShape_setSize(hud->rect, size);
    sfRectangleShape_setPosition(hud->rect, pos);
    return (hud);
}

struct s_button *initia_button(struct s_button *button, sfVector2f size,
    sfVector2f pos
)
{
    button->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setPosition(button->rect, pos);
    return (button);

}