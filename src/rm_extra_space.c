/*
** EPITECH PROJECT, 2021
** B-PSU-101-MAR-1-1-minishell1-mohamed.mansour
** File description:
** rm_extra_spacesc
*/

#include "../include/minishell.h"

char *rm_extra_spaces(char *str)
{
    int i = 0, j = 0;
    char *cpy = malloc(sizeof(char) * (my_strlen(str) + 1));
    for (; str[i] == ' '; i += 1);
    for (; str[i] != '\0'; i += 1) {
        if (str[i] == ' ' && str[i - 1] == ' ')
            continue;
        cpy[j] = str[i];
        j += 1;
    }
    if (cpy[j - 1] == ' ')
        cpy[j - 1] = '\0';
    else
        cpy[j] = '\0';
    return (cpy);
}