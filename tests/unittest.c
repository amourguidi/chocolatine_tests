/*
** EPITECH PROJECT, 2024
** files
** File description:
** files
*/

#include "../include/my.h"
#include <criterion/criterion.h>

Test(my_putchar, write)
{
    char i = 'A';
    my_putchar(i);
}

Test(my_strlen, len_of_string)
{
    char *str = "chrisnaud";
    int i = my_strlen(str);
    cr_assert_eq(9, i);
}

Test(my_putstr, write_many_character)
{
    char *str = "chrisnaud\n";
    int b = my_putstr(str);
    cr_assert_eq(0, b);
}

Test(my_str_to_word_array, str_to_array)
{
    char *a = "chrisnaud\n";
    char **b = my_str_to_word_array(a);
}