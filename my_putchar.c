/*
** EPITECH PROJECT, 2023
** my-putchar.c
** File description:
** afficher
*/

#include "include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
