/*
** EPITECH PROJECT, 2018
** rpg.c
** File description:
** rpg.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
#include "function.h"
#include "struct.h"

int get_one_stat(char **array, char *str)
{
    int stat = 0;
    char *dup;

    for (int i = 0; array[i]; i++) {
        if (my_strncmp(my_strdup(array[i]), str, my_strlen(str)) == 0) {
            decal(array[i], my_strlen(str) + 1);
            stat = my_getnbr(array[i]);
            return (stat);
        }
    }
    return (-1);
}

int get_all_stat(global *gb, char **array)
{
    char *all_var[29] = {"LIFE", "XP", "GOLD", "DAMAGE", "SCEEN", "POSX",
                        "POSY", "LIFE_MAX", "INV0", "INV1", "INV2", "INV3",
                        "INV4", "INV5", "INV6", "INV7", "INV8", "INV9",
                        "INV10", "INV11", "INV12", "INV13", "INV14", "INV15",
                        "INV16", "INV17", "INV18", "INV19", "LIFE_MOB"};

    for (int i = 0; i < 29; i++) {
        if (check_var(all_var[i], array) < 1)
            return (1);
    }
    gb->stats.life = get_one_stat(array, "LIFE");
    gb->stats.xp = get_one_stat(array, "XP");
    gb->stats.gold = get_one_stat(array, "GOLD");
    gb->stats.damage= get_one_stat(array, "DAMAGE");
    gb->stats.sceen = get_one_stat(array, "SCEEN");
    gb->stats.posx = get_one_stat(array, "POSX");
    gb->stats.posy = get_one_stat(array, "POSY");
    gb->stats.life_max = get_one_stat(array, "LIFE_MAX");
    gb->mob[0].life = get_one_stat(array, "LIFE_MOB");
    get_all_inventory(gb, array);
    return (0);
}

char **first_get(int fd)
{
    char *str = NULL;
    char **array = malloc(sizeof(char *) * 1);

    array[0] = NULL;
    str = get_next_line(fd);
    if (str == NULL) {
        free(str);
        return (NULL);
    }
    array = get_into_map(array, my_strdup(str), 0);
    return (array);
}

char **getString(char *str, char **array, int fd)
{
    for (int i = 1; ; i++) {
        free(str);
        str = get_next_line(fd);
        if (str == NULL) {
            free(str);
            break;
        }
        array = get_into_map(array, my_strdup(str), i);
    }
    return array;
}

int get_save(global *gb)
{
    char *str = NULL;
    char **array;
    int fd = open("save.txt", O_RDONLY);

    if (fd < 0)
        return (-1);
    array = first_get(fd);
    if (array == NULL)
        return (-1);
    array = getString(str, array, fd);
    if (get_all_stat(gb, array) == 1)
        return (-1);
    return (0);
}