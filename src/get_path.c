/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** get_path.c
*/

#include "../include/minishell.h"

void get_path(stock_t *stocker)
{
    for (int i = 0; stocker->my_env[i] != NULL; i += 1)
        if (my_strncmp(stocker->my_env[i], "PATH=", 5) == 0)
            stocker->path = word_to_tab(stocker->my_env[i], ':', 5);
}