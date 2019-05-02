/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void initia_window(global *gb)
{
    gb->disev.video_mode.width = 1920;
    gb->disev.video_mode.height = 1080;
    gb->disev.video_mode.bitsPerPixel = 32;

    gb->disev.window = sfRenderWindow_create(gb->disev.video_mode, "RPG",
        sfDefaultStyle, NULL);
}

struct s_sprite *initia_sprite(struct s_sprite *sprite, char *path, sfVector2f
    pos, sfIntRect rect)
{
    sprite->texture = sfTexture_createFromFile(path, NULL);
    sprite->sprite = sfSprite_create();
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sprite->pos = pos;
    sprite->rect = rect;
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect);
    return (sprite);
}

struct s_text *initia_text(struct s_text *text, char **string, sfVector2f
pos, sfColor color, unsigned int size)
{
    text->pos = pos;
    text->text = sfText_create();
    sfText_setString(text->text, string[0]);
    text->font = sfFont_createFromFile(string[1]);
    sfText_setFillColor(text->text, color);
    sfText_setFont(text->text, text->font);
    sfText_setCharacterSize(text->text, size);
    sfText_setPosition(text->text, text->pos);
    return text;
}

struct s_sound *initia_sound(global *gb, char *path)
{
    gb->sound->music = sfMusic_createFromFile(path);
    return (gb->sound);
}

struct s_button *initia_button(struct s_button *button, sfVector2f size,
    sfVector2f pos)
{
    button->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setPosition(button->rect, pos);
    return (button);

}