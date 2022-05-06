/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_fusion_str.c
*/

#include "../include/minishell.h"

char *my_fusion_str(char *src, char *src_2, char *src_3)
{
    char *final_str = malloc(sizeof(char) * (my_strlen(src) + my_strlen(src_2) + my_strlen(src_3)) + 1);
    int i = 0;
    if (src == NULL || src_2 == NULL)
        return NULL;
    for (; src[i] != '\0'; i += 1)
        final_str[i] = src[i];
    for (int j = 0; src_2[j] != '\0'; j += 1, i += 1)
        final_str[i] = src_2[j];
    for (int j = 0; src_3[j] != '\0'; i += 1, j += 1) {
        if (src_3[j] == '\n') {
            final_str[i] = '\0';
            break;
        }
        final_str[i] = src_3[j];
    }
    final_str[i] = '\0';
    return final_str;
}