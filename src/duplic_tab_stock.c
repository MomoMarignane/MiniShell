/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** duplic_tab_stock.c
*/

#include "../include/minishell.h"

stock_t *duplic_tab_stock(stock_t *stocker, char **env)
{
    int i = 0;
    for (; env[i]; i += 1)
        stocker->my_env[i] = my_strdup(env[i]);
    stocker->my_env[i] = NULL;
    return stocker;
}