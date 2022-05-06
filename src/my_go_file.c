/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_go_file.c
*/

#include "../include/minishell.h"

int my_go_file(stock_t *stocker)
{
    size_t size = 0;
    char *get = NULL;
    DIR *d;
    d = opendir(stocker->total_shell_cmd[1]);
    if (d == NULL) {
        return 1;
    } else {
        chdir(stocker->total_shell_cmd[1]);
    for (int i = 0; stocker->my_env[i]; i += 1)
        if (my_strncmp(stocker->my_env[i], "PWD=", 4) == 0) {
            stocker->my_env[i] = my_strcat("PWD=", getcwd(get, size));
            break;
        }
    my_set_oldpwd(stocker);
    }
    return 0;
}