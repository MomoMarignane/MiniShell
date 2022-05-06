/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_strncmp.c
*/

#include "../include/minishell.h"

int my_strncmp(char *src, char *cmp, int n)
{
    for (int i = 0; i != n; i += 1)
        if (src[i] != cmp[i])
            return 1;
    return 0;
}