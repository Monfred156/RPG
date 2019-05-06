/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void display_stats(global *gb)
{
    sfText_setString(gb->text[TXT_LVL].text, my_int_to_str(gb->stats.lvl));
    sfText_setString(gb->text[TXT_XP].text, my_int_to_str(gb->stats.xp));
    sfText_setString(gb->text[TXT_GOLD].text, my_int_to_str(gb->stats.gold));
    sfText_setString(gb->text[TXT_ARMOR].text, my_int_to_str(gb->stats.life));
    sfText_setString(gb->text[TXT_ATTACK].text,
    my_int_to_str(gb->stats.damage));
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_LVL].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_XP].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_GOLD].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_ARMOR].text, NULL);
    sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_ATTACK].text, NULL);
}