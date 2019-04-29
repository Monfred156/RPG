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
    return (sprite);
}

struct s_text *initia_text(global *gb, char **string, sfVector2f
pos, sfUint8 const *color, sfUint32 *array)
{
    gb->text->red = color[0];
    gb->text->green = color[1];
    gb->text->blue = color[2];
    gb->text->alpha = color[3];
    gb->text->color = sfColor_fromRGBA(gb->text->red, gb->text->green,
        gb->text->blue, gb->text->alpha);
    gb->text->pos = pos;

    gb->text->text = sfText_create();
    sfText_setString(gb->text->text, string[0]);
    sfFont_createFromFile(string[1]);
    sfText_setFillColor(gb->text->text, gb->text->color);
    sfText_setFont(gb->text->text, gb->text->font);
    sfText_setCharacterSize(gb->text->text, array[0]);
    sfText_setPosition(gb->text->text, gb->text->pos);
    sfText_setStyle(gb->text->text, array[1]);
    return gb->text;
}

struct s_sound *initia_sound(global *gb, char *path)
{
    gb->sound->music = sfMusic_createFromFile(path);
    return (gb->sound);
}

struct s_button *initia_button(global *gb, sfVector2f size, sfVector2f
pos)
{
    gb->button->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(gb->button->rect, size);
    sfRectangleShape_setPosition(gb->button->rect, pos);
    return gb->button;

}