/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** unsetenv_search.c
*/

#include "../include/minishell.h"

int unsetenv_search(stock_t *stocker, int index)
{
    for (int i = 0; stocker->my_env[i]; i += 1)
        if (my_strncmp(stocker->total_shell_cmd[index], stocker->my_env[i], my_strlen(stocker->total_shell_cmd[index])) == 0)
            return i;
    return -1;
}