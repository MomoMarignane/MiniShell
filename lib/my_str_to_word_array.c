/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_str_to_word_array.c
*/

#include "../include/minishell.h"

char **my_str_to_word_array(stock_t *stocker, char **env)
{
    char *str = stock_path(env);
    stocker->path = my_malloc_tab_with_str(stocker->path, str);
    str = stock_path(env);
    stocker->path = my_load_tab_with_str(stocker->path, str);
    return stocker->path;
}