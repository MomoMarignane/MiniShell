/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_init_stocker.c
*/

#include "../include/minishell.h"

void my_init_stocker(stock_t *stocker, int ac, char **env)
{
    stocker->ac_stk = ac;
    stocker->buffer = (char *)malloc(sizeof(char));
    stocker->size = 2048;
    stocker->ls_path = my_strdup("/bin/");
    stocker->total_shell_cmd = malloc(sizeof(char *) * 4);
    int path = 0, y_env = 0;
    for (int i = 0; env[i] != NULL; i += 1)
        if (check_path(env[i]) == 1) {
            path = i;
            break;
        }
    for (int i = 0; env[path][i] != '\0'; i += 1)
        if (env[path][i] == ':')
            stocker->total += 1;
    stocker->total += 1;
    for (; env[y_env] != NULL; y_env += 1);
    stocker->my_env = malloc(sizeof(char *) * y_env);
    stocker = duplic_tab_stock(stocker, env);
}