/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** parse_str.c
*/

#include "../include/minishell.h"

char *parse_str(char *src)
{
    int i = 0;
    int j = 0;
    while (src[i+1] != '=')
        i += 1;
    int x = 0;
    while (src[x])
        x += 1;
    char *tmp = malloc(sizeof(char) * (x - i) + 1);
    for (i = 0; src[i-1] != '='; i += 1);
    while (src[i] != '\0') {
        tmp[j] = src[i];
        j += 1, i += 1;
    }
    return tmp;
}