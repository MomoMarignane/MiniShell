/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** duplic_tab_new.c
*/

#include "../include/minishell.h"

char **duplic_tab_new(char **src)
{
    int i = 0;
    while (src[i])
        i += 1;
    char **tmp = malloc(sizeof(char *) * i+1);
    for (i = 0; src[i]; i += 1)
        tmp[i] = my_strdup(src[i]);
    tmp[i] = NULL;
    return tmp;
}