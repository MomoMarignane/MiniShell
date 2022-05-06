/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_strdup.c
*/

#include "../include/minishell.h"

char *my_strdup(char *str)
{
    int i = 0;
    for (; str[i]; i += 1);
    char *temp = malloc(sizeof(char) * my_strlen(str) + 1);
    for (int a = 0; str[a]; a += 1)
        temp[a] = str[a];
    temp[i] = '\0';
    return temp;
}