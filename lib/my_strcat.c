/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_go_shell.c
*/

#include "../include/minishell.h"

char *my_strcat(char *src_1, char *src_2)
{
    char *total = malloc(sizeof(char) * (my_strlen(src_1) + my_strlen(src_2)) + 1);
    int i = 0, j = 0;
    while (src_1[i]) {
        total[i] = src_1[i];
        i += 1;
    }
    while (src_2[j]) {
        total[i] = src_2[j];
        i += 1, j += 1;
    }
    total[i] = '\0';
    return total;
}