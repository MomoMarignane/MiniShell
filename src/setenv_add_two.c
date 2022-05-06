/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** setenv_add_two.c
*/

#include "../include/minishell.h"

char **setenv_add_two(stock_t *stocker)
{
    int i = 0;
    while (stocker->my_env[i] != NULL)
        i += 1;
    char **tmp = malloc(sizeof(char *) * i+2);
    for (i = 0; stocker->my_env[i] != NULL; i += 1)
        tmp[i] = my_strdup(stocker->my_env[i]);
    tmp[i] = my_fusion_str(stocker->total_shell_cmd[1], "=", stocker->total_shell_cmd[2]);
    tmp[i+1] = NULL;
    return tmp;
}