/*
** EPITECH PROJECT, 2021
** B-PSU-101-MAR-1-1-minishell1-mohamed.mansour
** File description:
** c_func_2.c
*/

#include "../../include/minishell.h"

int my_show_word_array(char **tab)
{
    int i = 0;
    int j = 0;
    int total = 0;
    while (tab[total] != NULL)
        total += 1;
    if (tab == NULL)
        return 0;
    while (i < total - 4) {
        if (tab[i] == NULL)
            return 0;
        if (tab[i][j] == '\0') {
            write(1, "\n", 1);
            i += 1;
            j = 0;
        }
        write(1, &tab[i][j], 1);
        j += 1;
    }
    return 0;
}

char **my_load_tab_with_str(char **tab, char *str)
{
    int i = 0, j = 0, str_count = 0;
    for (; str[str_count] == ' '; str_count += 1);
    while (1) {
        if (str[str_count] == '\0') {
            tab[i][j] = '\0';
            return tab;
        }
        if (str[str_count] == ':') {
            tab[i][j] = '\0';
            i += 1;
            j = 0;
            str_count += 1;
        }
        tab[i][j] = str[str_count];
        j += 1;
        str_count += 1;
    }
    return tab;
}

char **my_malloc_tab_with_str(char **tab, char *str)
{
    int x = 0;
    int y = 0;
    for (; str[x]; x += 1)
        if (str[x] == ':')
            y += 1;
    tab = malloc(sizeof(char*) * y);
    for (int i = 0; i < (y + 1); i += 1)
        tab[i] = malloc(sizeof(char) * x + 1);
    return tab;
}

char **my_str_to_word_array(stock_t *stocker, char **env)
{
    char *str = stock_path(env);
    stocker->path = my_malloc_tab_with_str(stocker->path, str);
    str = stock_path(env);
    stocker->path = my_load_tab_with_str(stocker->path, str);
    return stocker->path;
}