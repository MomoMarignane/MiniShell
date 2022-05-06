/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_cd_less.c
*/

#include "../include/minishell.h"

void my_cd_less(stock_t *stocker)
{
    char *new_pwd = NULL;
    for (int i = 0; stocker->my_env[i]; i += 1)
        if (my_strncmp(stocker->my_env[i], "OLDPWD=", 7) == 0) {
            new_pwd = my_strdup(stocker->my_env[i]);
            break;
        }
    chdir(parse_str(new_pwd));
    my_set_oldpwd(stocker);
    my_set_home(stocker, parse_str(new_pwd));
}