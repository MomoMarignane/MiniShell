/*
** EPITECH PROJECT, 2021
** B-PSU-101-MAR-1-1-minishell1-mohamed.mansour
** File description:
** minishell.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

typedef struct stock_s {
    int total;
    int ac_stk;
    char **path;
    char *ls_path;
    char *buffer;
    size_t size;
    char **total_shell_cmd;
} stock_t;

#ifndef minishell_h
#define minishell_h

//general_c_func
char **my_str_to_word_array(stock_t *stocker, char **env);
char *my_strdup(char *str);
void my_putstr(char *str);
int my_strlen(char *src);
void my_init_stocker(stock_t *stocker, int ac, char **env);
int my_ls_found(char *src);
int my_strcmp(char *s1, char *s2);
int my_show_word_array(char **tab);
char **my_malloc_tab_with_str(char **tab, char *str);
char **my_load_tab_with_str(char **tab, char *str);
char *stock_path(char **env);
char **my_str_to_word_array_for_cmd(stock_t *stocker, char **env);
char **my_load_tab_with_str_for_cmd(char **tab, char *str);
char **my_malloc_tab_with_str_for_cmd(char **tab, char *str);

int create_tab(char *str, char c);
char **word_to_tab(char *str, char c, int i);
char *tab_to_space(char *str);
char *rm_extra_spaces(char *str);
char *my_fusion_str(char *src, char *src_2, char *src_3);
int show_tab(char **tab);
void my_exec(char *str, char **env, stock_t *stocker);

#endif