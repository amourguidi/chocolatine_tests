/*
** EPITECH PROJECT, 2024
** files
** File description:
** files
*/

#ifndef MY_H
    #define MY_H
    #include <stdarg.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include <math.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <sys/types.h>


int my_strlen(char *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_getnbr(char const *str);
char **my_str_to_word_array(char *str);
int flag_c_sui(int ac, char **av, char **array);

#endif /* !MY_H */
