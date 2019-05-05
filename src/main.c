/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "my.h"
#include "function.h"
#include "struct.h"

void call_destroy(global *gb)
{
    sfMusic_destroy(gb->sound[0].music);
    sfRenderWindow_destroy(gb->disev.window);
}

int main(int ac, char **av)
{
    srand(time(NULL));

    if (ac == 1)
        return (game_loop());
    else
        return 84;
}