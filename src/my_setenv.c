/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_setenv.c
*/

#include "../include/minishell.h"

char **my_unset_setenv(stock_t *stocker)
{
    int y = 0;
    for (; stocker->my_env[y]; y += 1);
    char **tab = malloc(sizeof(char *) * y);
    int env_i = 0;
    int tab_i = 0;
    while (stocker->my_env[env_i]) {
        if (my_strncmp(stocker->total_shell_cmd[1], stocker->my_env[env_i], my_strlen(stocker->total_shell_cmd[1])) == 0)
            env_i += 1;
        else {
            tab[tab_i] = my_strdup(stocker->my_env[env_i]);
            env_i += 1, tab_i += 1;
        }
    }
    return tab;
}

void my_setenv(stock_t *stocker)
{
    if (stocker->total_shell_cmd[3] != NULL) {
        write(0, "setenv: Too many arguments.\n", 28);
        return;
    }
    if (stocker->total_shell_cmd[2] != NULL) {
        if (setenv_search(stocker) == 1)
            stocker->my_env = my_unset_setenv(stocker);
        stocker->my_env = setenv_add_two(stocker);
    }
    if (stocker->total_shell_cmd[1] != NULL && stocker->total_shell_cmd[2] == NULL) {
        if (setenv_search(stocker) == 1)
            return;
        stocker->my_env = setenv_add(stocker);
    }
    if (stocker->total_shell_cmd[1] == NULL)
        for (int i = 0; stocker->my_env[i]; i += 1) {
            write(1, stocker->my_env[i], my_strlen(stocker->my_env[i]) + 1);
            write(1, "\n", 1);
        }
}