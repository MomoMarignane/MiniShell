/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** stock_path.c
*/

#include "../include/minishell.h"

char *stock_path(char **env)
{
    char *str = (char *)malloc(sizeof(char));
    int j = 0;
    for (int i = 5; env[4][i] != '\0'; i += 1, j += 1)
        str[j] = env[4][i];
    str[j] = '\0';
    return str;
}