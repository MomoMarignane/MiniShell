/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_get_old_pwd.c
*/

#include "../include/minishell.h"

void my_get_old_pwd(stock_t *stocker)
{
    for (int i = 0; stocker->my_env[i]; i += 1)
        if (my_strncmp(stocker->my_env[i], "PWD=", 4) == 0) {
            stocker->old_pwd = my_strdup(parse_str(stocker->my_env[i]));
            break;
        }
}