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
#include <dirent.h>
#include <sys/wait.h>
#include <sys/types.h>

typedef struct stock_s {
    int total;
    int ac_stk;
    char **path;
    char *ls_path;
    char *buffer;
    size_t size;
    char **total_shell_cmd;
    char **my_env;
    char *old_pwd;
} stock_t;

#ifndef minishell_h
    #define minishell_h

//main
int main(int ac, char **av, char **env);

//lib
char *my_fusion_str(char *src, char *src_2, char *src_3);
void my_putstr(char *str);
int my_show_word_array(char **tab);
char **my_str_to_word_array(stock_t *stocker, char **env);
int my_strcmp(char *s1, char *s2);
char *my_strdup(char *str);
int my_strlen(char *src);
int my_strncmp(char *src, char *cmp, int n);
int show_tab(char **tab);
char *tab_to_space(char *str);
char **word_to_tab(char *str, char c, int i);
char *my_strcat(char *src_1, char *src_2);

//src
int check_exit(stock_t *stocker);
int check_path(char *src);
int check_setenv(stock_t *stocker, int i);
char *clean(char *str);
int create_tab(char *str, char c);
char **duplic_tab(char **tab, char **src);
char **duplic_tab_new(char **src);
stock_t *duplic_tab_stock(stock_t *stocker, char **env);
void get_path(stock_t *stocker);
int minishell(stock_t *stocker);
void my_exec(char *str, stock_t *stocker);
void my_init_stocker(stock_t *stocker, int ac, char **env);
char **my_load_tab_with_str(char **tab, char *str);
char **my_malloc_tab_with_str(char **tab, char *str);
void my_setenv(stock_t *stocker);
int my_sh(stock_t *stocker);
void my_unsetenv(stock_t *stocker);
char **my_unsetenv_remove(stock_t *stocker, int index);
char *rm_extra_spaces(char *str);
char **setenv_add(stock_t *stocker);
char **setenv_add_two(stock_t *stocker);
int setenv_search(stock_t *stocker);
char *stock_path(char **env);
int unsetenv_search(stock_t *stocker, int index);
char **my_unset_setenv(stock_t *stocker);
char **my_go_shell(stock_t *stocker, char *str, int y);
char *parse_str(char *src);
int my_check_any_cd(stock_t *stocker);
int my_cd(stock_t *stocker);
char *my_search_home(stock_t *stocker);
void my_set_home(stock_t *stocker, char *src);
void my_set_oldpwd(stock_t *stocker);
void my_get_old_pwd(stock_t *stocker);
void my_go_home(stock_t *stocker);
void my_cd_less(stock_t *stocker);
int my_go_file(stock_t *stocker);

#endif