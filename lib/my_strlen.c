/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_strlen.c
*/

#include "../include/minishell.h"

int my_strlen(char *src)
{
    int i = 0;
    for (; src[i] != '\0'; i += 1);
    return i;
}