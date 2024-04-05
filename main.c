/*
** EPITECH PROJECT, 2024
** files
** File description:
** files
*/

#include "include/my.h"

int flag_c(int ac, char **av, char **array)
{
    int a = 2;

    if (av[1][0] == '-' && av[1][1] == 'c') {
        for (int i = 0; array[i] != NULL; i++) {
            for (int j = 0; j < my_getnbr(av[a]); j++) {
                my_putchar(array[i][j]);
            }
            my_putchar('\n');
        }
    }

}

void for_d(int ac, char **av, char **array, int i)
{
    for (int j = 0; array[i][j] != '\0'; j++) {
        if (array[i][j] == av[2][0])
            array[i][j] = '\0';
        my_putchar(array[i][j]);
    }
    my_putchar('\n');
}

int flag_d(int ac, char **av, char **array)
{
    if (av[1][0] == '-' && av[1][1] == 'd') {
        for (int i = 0; array[i] != NULL; i++) {
            for_d(ac, av, array, i);
        }
    }
}

int main(int ac, char **av)
{
    char *str = malloc(sizeof(char) * 1000);
    char **array = NULL;

    if (ac < 2)
        return 84;
    read(STDIN_FILENO, str, 1000);
    array = my_str_to_word_array(str);
    flag_c(ac, av, array);
    flag_d(ac, av, array);
}
