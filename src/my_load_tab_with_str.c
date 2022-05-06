/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_load_tab_with_str.c
*/

#include "../include/minishell.h"

char **my_load_tab_with_str(char **tab, char *str)
{
    int i = 0, j = 0, str_count = 0;
    for (; str[str_count] == ' '; str_count += 1);
    while (1) {
        if (str[str_count] == '\0') {
            tab[i][j] = '\0';
            return tab;
        }
        if (str[str_count] == ':') {
            tab[i][j] = '\0';
            i += 1;
            j = 0;
            str_count += 1;
        }
        tab[i][j] = str[str_count];
        j += 1;
        str_count += 1;
    }
    return tab;
}