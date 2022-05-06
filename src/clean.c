/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** clean.c
*/

#include "../include/minishell.h"

char *clean(char *str)
{
    str[my_strlen(str)-1] = '\0';
    return(str);
}