/*
** EPITECH PROJECT, 2018
** escape
** File description:
** .c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void dialogue_pnj_quest(global *gb, int sprite)
{
    if (gb->quest->open == 1) {
        if (gb->disev.kill == -1)
            gb->disev.kill = 0;
        sfRenderWindow_drawSprite(gb->disev.window,
                gb->sprite[BACK_TEXT].sprite, NULL);
        if (gb->disev.kill == -1) {
            gb->disev.kill = 0;
            sfRenderWindow_drawText(gb->disev.window, gb->text[sprite].text,
                    NULL);
        } else if (gb->disev.kill >= 2) {
            sfRenderWindow_drawText(gb->disev.window, gb->text[TXT_QUEST].text,
                    NULL);
        } else
            sfRenderWindow_drawText(gb->disev.window, gb->text[sprite].text,
                    NULL);
    }
}

void dialogue_pnj_town(global *gb, int sprite, int quest)
{
    pnj_rando_rect(gb, PNJ_RED, 32, 128);
    if (collision_between__sprite(gb->sprite[HERO].sprite,
            gb->quest[quest].shape)
        == 1 && sfKeyboard_isKeyPressed(sfKeyE))
        gb->quest[0].open = 1;
    if (collision_between__sprite(gb->sprite[HERO].sprite,
            gb->quest[quest].shape) == 0)
        gb->quest[0].open = 0;
    dialogue_pnj_quest(gb, sprite);
}