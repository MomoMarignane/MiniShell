/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_search_home.c
*/

#include "../include/minishell.h"

char *my_search_home(stock_t *stocker)
{
    char *home = NULL;
    for (int i = 0; stocker->my_env[i]; i += 1)
        if (my_strncmp(stocker->my_env[i], "HOME=", 5) == 0) {
            home = parse_str(stocker->my_env[i]);
            break;
        }
    return home;
}