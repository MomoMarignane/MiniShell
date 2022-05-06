/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_set_oldpwd.c
*/

#include "../include/minishell.h"

void my_set_oldpwd(stock_t *stocker)
{
    for (int i = 0; stocker->my_env[i]; i += 1)
        if (my_strncmp(stocker->my_env[i], "OLDPWD=", 7) == 0) {
            stocker->my_env[i] = my_strcat("OLDPWD=", stocker->old_pwd);
            break;
        }
}