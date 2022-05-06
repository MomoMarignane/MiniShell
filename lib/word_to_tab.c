/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** word_to_tab.c
*/

#include "../include/minishell.h"

char **word_to_tab(char *str, char c, int i)
{
    int j = 0, k = 0, size = create_tab(str, c);
    char **tab = (char **)malloc(sizeof(char *) * (size + 1));
    tab[0] = (char *)malloc(sizeof(char));
    str = tab_to_space(str);
    str = rm_extra_spaces(str);
    while (str[i] != '\0') {
        if (str[i] == c) {
            i += 1;
            tab[j][k] = '\0';
            j += 1, k = 0;
            tab[j] = malloc(sizeof(char) * my_strlen(str) + 1);
        }
        tab[j][k] = str[i];
        i += 1, k += 1;
    }
    j += 1, tab[j] = NULL;
    return (tab);
}