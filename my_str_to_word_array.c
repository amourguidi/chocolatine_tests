/*
** EPITECH PROJECT, 2024
** files
** File description:
** files
*/

#include "include/my.h"

int my_count_line(char *str)
{
    int t = 0;
    int n = 0;

    for (t = 0; str[t] != '\0'; t++) {
        if (str[t] == '\n')
            n++;
    }
    return n + 1;
}

int my_count_col(char *str, int t)
{
    int c = 0;

    while (str[t] != '\n' && str[t] != '\0') {
        t++;
        c++;
    }
    return c;
}

char **my_str_to_word_array(char *str)
{
    int p = 0;
    int g = 0;
    int y = 0;
    int z = 0;
    int t = my_count_line(str);
    char **array = malloc(sizeof(char *) *(t + 1));

    for (y = 0; y < t - 1; y++) {
        z = my_count_col(str, p);
        array[y] = malloc(sizeof(char) * (z + 1));
        for (g = 0; g < z; g++) {
            array[y][g] = str[p];
            p++;
        }
        array[y][z] = '\0';
        p++;
    }
    array[t] = NULL;
    return array;
}
