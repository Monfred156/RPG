/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void equip_stuff(global *gb, int *place)
{
    for (int i = BUTTON_INV1; i <= BUTTON_INV15; i++) {
        if (sfMouse_isButtonPressed(sfMouseLeft) && mouse_clic_button(gb,
            gb->button[i].rect) == 0) {
            equip_head_shield(gb, place);
            equip_weapon_chest(gb, place);
            equip_legs(gb, place);
        }
        *place += 1;
    }
}

void desequip_stuff(global *gb)
{
    desequip_head_shield(gb);
    desequip_armor_weapon(gb);
    desequip_legs(gb);
}
