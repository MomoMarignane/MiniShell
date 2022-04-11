/*
** EPITECH PROJECT, 2021
** B-PSU-101-MAR-1-1-minishell1-mohamed.mansour
** File description:
** pwd_func.c
*/

#include "../../include/minishell.h"

char *stock_path(char **env)
{
    char *str = (char *)malloc(sizeof(char));
    int j = 0;
    for (int i = 5; env[4][i] != '\0'; i += 1, j += 1)
        str[j] = env[4][i];
    str[j] = '\0';
    return str;
}

int create_tab(char *str, char c)
{
    int i = 0, j = 0;
    for (; str[i] != 0; i += 1) {
        if (str[i] == c)
            j += 1;
    }
    return (j + 1);
}

char **word_to_tab(char *str, char c, int i)
{
    int j = 0, k = 0, size = create_tab(str, c);
    char **tab = (char **)malloc(sizeof(char *) * (size + 1));
    tab[0] = (char *)malloc(sizeof(char));
    // str = tab_to_space(str);
    // str = rm_extra_spaces(str);
    while (str[i] != '\0') {
        if (str[i] == c) {
            i += 1;
            tab[j][k] = '\0';
            j += 1, k = 0;
            tab[j] = (char *)malloc(sizeof(char));
        }
        tab[j][k] = str[i];
        i += 1, k += 1;
    }
    j += 1, tab[j] = 0;
    return (tab);
}

char *tab_to_space(char *str)
{
    int i = 0;
    char *cpy = (char *)malloc(sizeof(char));
    for (; str[i] != '\0'; i += 1) {
        if (str[i] == '\t')
            cpy[i] = ' ';
        else
            cpy[i] = str[i];
    }
    cpy[i] = '\0';
    return (cpy);
}

char *rm_extra_spaces(char *str)
{
    int i = 0, j = 0;
    char *cpy = (char *)malloc(sizeof(char));
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