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
    hitbox->pos = pos;
    sfRectangleShape_setSize(hitbox->hitbox, size);
    sfRectangleShape_setPosition(hitbox->hitbox, pos);
    return (hitbox);
}

struct s_teleport *initia_teleport(struct s_teleport *teleport,
    sfVector2f size, sfVector2f pos)
{
    teleport->teleport = sfRectangleShape_create();
    teleport->pos = pos;
    sfRectangleShape_setSize(teleport->teleport, size);
    sfRectangleShape_setPosition(teleport->teleport, pos);
    return (teleport);
}

struct s_trader *initia_trader(struct s_trader *trader,
    sfVector2f size, sfVector2f pos)
{
    trader->talk = sfRectangleShape_create();
    trader->pos = pos;
    sfRectangleShape_setSize(trader->talk, size);
    sfRectangleShape_setPosition(trader->talk, pos);
    return (trader);
}

struct s_quest *initia_quest(struct s_quest *quest,
    sfVector2f size, sfVector2f pos, int nb_quest)
{
    quest->shape = sfRectangleShape_create();
    quest->pos = pos;
    quest->size = size;
    sfRectangleShape_setSize(quest->shape, size);
    sfRectangleShape_setPosition(quest->shape, pos);
    quest->quest = nb_quest;
    return (quest);
}

struct s_hud *initia_hud(struct s_hud *hud, sfVector2f size, sfVector2f pos)
{
    hud->rect = sfRectangleShape_create();
    hud->pos = pos;
    sfRectangleShape_setSize(hud->rect, size);
    sfRectangleShape_setPosition(hud->rect, pos);
    return (hud);
}