/*
** EPITECH PROJECT, 2021
** B-PSU-101-MAR-1-1-minishell1-mohamed.mansour
** File description:
** mysh.c
*/

#include "include/minishell.h"

int main(int ac, char **av, char **env)
{
    if (ac != 1 || av[1] != NULL)
        return 84;
    stock_t *stocker = malloc(sizeof(stock_t));
    my_init_stocker(stocker, ac, env);
    if (my_sh(stocker) == 84)
        return 84;
    free(stocker);
    return 0;
}