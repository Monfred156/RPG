/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** my_getnbr
*/

//#include "../../include/my.h"
#include <stdio.h>

int result(int num, int count_minus)
{
    if (count_minus < 0)
        return (-1 * num);
    else
        return (num);
}

int loop(int i, int num, char const *str)
{
    int stop = 0;
    int save = 0;

    for (; str[i + 1] != '\0' && stop != 1; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            save = num;
            num = num * 10;
            num = num + str[i] - 48;
            if ((save > 0 && num < 0) || (save < 0 && num > 0)) {
                num = 0;
                return (0);
            }
        } else
            stop = 1;
    }
    return (num);
}

int my_getnbr(char const *str)
{
    int num = 0;
    int i = 0;
    int count_minus = 1;

    for (; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            count_minus = -1 * count_minus;
    }
    num = loop(i, num, str);
    if (num == 0)
        return (0);
    return (result(num, count_minus));
}