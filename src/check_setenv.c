/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** check_setenv.c
*/

#include "../include/minishell.h"

int check_setenv(stock_t *stocker, int i)
{
    if (my_strncmp(stocker->total_shell_cmd[1], stocker->my_env[i], my_strlen(stocker->total_shell_cmd[1])) == 0)
        return 1;
    return 0;
}