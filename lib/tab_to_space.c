/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** tab_to_space.c
*/

#include "../include/minishell.h"

char *tab_to_space(char *str)
{
    int i = 0;
    char *cpy = malloc(sizeof(char) * (my_strlen(str) + 1));
    for (; str[i] != '\0'; i += 1) {
        if (str[i] == '\t')
            cpy[i] = ' ';
        else
            cpy[i] = str[i];
    }
    cpy[i] = '\0';
    return (cpy);
}