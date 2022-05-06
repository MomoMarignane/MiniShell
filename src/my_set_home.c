/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_set_home.c
*/

#include "../include/minishell.h"

void my_set_home(stock_t *stocker, char *src)
{
    for (int i = 0; stocker->my_env[i]; i += 1)
        if (my_strncmp(stocker->my_env[i], "PWD=", 4) == 0) {
            stocker->my_env[i] = my_strcat("PWD=", src);
            break;
        }
}