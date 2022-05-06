/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_unsetenv.c
*/

#include "../include/minishell.h"

void my_unsetenv(stock_t *stocker)
{
    int data = 0;
    int i = 1;
    if (stocker->total_shell_cmd[1] == NULL) {
        write(0, "unsetenv: Too few arguments.\n", 29);
        return;
    }
    while (stocker->total_shell_cmd[i] != NULL) {
        data = unsetenv_search(stocker, i);
        if (data == -1)
            i += 1;
        else {
            stocker->my_env = my_unsetenv_remove(stocker, data);
            i += 1;
        }
    }
}