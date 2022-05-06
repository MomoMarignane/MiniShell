/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_malloc_tab_sith_str.c
*/

#include "../include/minishell.h"

char **my_malloc_tab_with_str(char **tab, char *str)
{
    int x = 0;
    int y = 0;
    for (; str[x]; x += 1)
        if (str[x] == ':')
            y += 1;
    tab = malloc(sizeof(char*) * y);
    for (int i = 0; i < (y + 1); i += 1)
        tab[i] = malloc(sizeof(char) * x + 1);
    return tab;
}