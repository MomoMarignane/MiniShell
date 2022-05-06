/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** minishell.c
*/

#include "../include/minishell.h"

int minishell(stock_t *stocker)
{
    get_path(stocker);
    if (my_strcmp(stocker->buffer, "env") == 0) {
        for (int i  = 0; stocker->my_env[i] != NULL; i += 1) {
            write(0, stocker->my_env[i], my_strlen(stocker->my_env[i]));
            write(0, "\n", 1);
        }
        return 0;
    }
    if (my_strncmp(stocker->buffer, "cd", 2) == 0) {
        if (my_cd(stocker) == 1)
            return 1;
        return 0;
    }
    if (my_strncmp(stocker->buffer, "setenv", 6) == 0) {
        my_setenv(stocker);
        return 0;
    }
    if (my_strncmp(stocker->buffer, "unsetenv", 8) == 0) {
        my_unsetenv(stocker);
        return 0;
    }
    for (int i = 0; stocker->path[i] != 0; i += 1) {
        stocker->path[i] = my_fusion_str(stocker->path[i], "/", stocker->total_shell_cmd[0]);
        if (access(stocker->path[i], X_OK) == 0 && access(stocker->path[i], F_OK) == 0) {
            my_exec(stocker->path[i], stocker);
            return 0;
        }
    }
    write(0, "command not found: ", 19);
    write(0, stocker->buffer, my_strlen(stocker->buffer));
    return 1;
}