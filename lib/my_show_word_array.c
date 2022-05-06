/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_show_word_array.c
*/

#include "../include/minishell.h"

int my_show_word_array(char **tab)
{
    int i = 0;
    int j = 0;
    int total = 0;
    while (tab[total] != NULL)
        total += 1;
    if (tab == NULL)
        return 0;
    while (i < total - 4) {
        if (tab[i] == NULL)
            return 0;
        if (tab[i][j] == '\0') {
            write(1, "\n", 1);
            i += 1;
            j = 0;
        }
        write(1, &tab[i][j], 1);
        j += 1;
    }
    return 0;
}