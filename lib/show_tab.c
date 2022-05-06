/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** show_tab.c
*/

#include "../include/minishell.h"

int show_tab(char **tab)
{
    for(int i = 0; tab[i] != 0; i += 1)
        my_putstr(tab[i]), my_putstr("\n");
    return (0);
}