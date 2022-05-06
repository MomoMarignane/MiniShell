/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** setenv_search.c
*/

#include "../include/minishell.h"

int setenv_search(stock_t *stocker)
{
    for (int i = 0; stocker->my_env[i] != NULL; i += 1)
        if (check_setenv(stocker, i) == 1)
            return 1;
    return 0;
}
