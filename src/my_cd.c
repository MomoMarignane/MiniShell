/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_cd.c
*/

#include "../include/minishell.h"

int my_cd(stock_t *stocker)
{
    if (stocker->total_shell_cmd[2] != NULL && stocker->total_shell_cmd[1] != NULL) {
        write(0, "cd: Too many arguments.", 23);
        return 1;
    }
    my_get_old_pwd(stocker);
    if (stocker->total_shell_cmd[1] == NULL) {
        my_go_home(stocker);
        return 0;
    }
    if (stocker->total_shell_cmd[2] == NULL && (stocker->total_shell_cmd[1][0] == '-' && stocker->total_shell_cmd[1][1] == '\0')) {
        my_cd_less(stocker);
        return 0;
    }
    if (stocker->total_shell_cmd[1] != NULL && (stocker->total_shell_cmd[1][0] != '-' && stocker->total_shell_cmd[1][1] != '\0'))
        if (my_go_file(stocker) == 0)
            return 0;
    write(0, stocker->total_shell_cmd[1], my_strlen(stocker->total_shell_cmd[1]));
    write(0, ": No such file or directory.", 28);
    return 1;
}