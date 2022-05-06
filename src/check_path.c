/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** check_path.c
*/

#include "../include/minishell.h"

int check_path(char *src)
{
    if (src[0] != 'P')
        return 0;
    if (src[1] != 'A')
        return 0;
    if (src[2] != 'T')
        return 0;
    if (src[3] != 'H')
        return 0;
    if (src[4] != '=')
        return 0;
    return 1;
}