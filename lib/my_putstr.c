/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_putstr.c
*/

#include "../include/minishell.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i += 1)
        write(1, &str[i], 1);
}