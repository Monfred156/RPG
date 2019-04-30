/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"


struct s_hitbox *initia_hitbox(struct s_hitbox *hitbox, sfVector2f size,
    sfVector2f pos)
{
    hitbox->hitbox = sfRectangleShape_create();
    sfRectangleShape_setSize(hitbox->hitbox, size);
    sfRectangleShape_setPosition(hitbox->hitbox, pos);
    return (hitbox);
}

