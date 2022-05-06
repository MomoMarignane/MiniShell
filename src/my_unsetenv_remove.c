/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_unsetenv_remove.c
*/

#include "../include/minishell.h"

char **my_unsetenv_remove(stock_t *stocker, int index)
{
    int t_i = 0;
    int y = 0;
    int env_i = 0;
    for (; stocker->my_env[y] != NULL; y += 1);
    char **tab = malloc(sizeof(char *) * y);
    while (stocker->my_env[env_i] != NULL) {
        if (env_i == index)
            t_i -= 1;
        else
            tab[t_i] = stocker->my_env[env_i];
        env_i += 1, t_i += 1;
    }
        tab[t_i+1] = NULL;
    return tab;
}