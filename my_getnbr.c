/*
** EPITECH PROJECT, 2024
** system_functions.c
** File description:
** all sysytem functions
*/

#include "include/my.h"

int my_getnbr(char const *str)
{
    int v = 1;
    int l = 0;
    int sign = 0;

    while (str[l] == '-' || str[l] == '+'){
        if (str[l] == '-'){
            v = v * (-1);
        }
        l++;
    }
    while (str[l] != '\0' && str[l] >= '0' && str[l] <= '9'){
        sign = (sign * 10) + (str[l] - '0');
        l++;
    }
    return (v * sign);
}
