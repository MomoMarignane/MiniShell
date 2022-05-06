/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_strcmp.c
*/

#include "../include/minishell.h"

int my_strcmp(char *s1, char *s2)
{
    for (int i = 0; s1[i] || s2[i]; i += 1)
        if (s1[i] != s2[i])
            return 1;
    return 0;
}