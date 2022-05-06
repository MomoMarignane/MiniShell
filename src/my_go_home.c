/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_go_home.c
*/

#include "../include/minishell.h"

void my_go_home(stock_t *stocker)
{
    char *home = my_search_home(stocker);
    chdir(home);
    my_set_home(stocker, home);
    my_set_oldpwd(stocker);
}