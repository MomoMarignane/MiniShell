/*
** EPITECH PROJECT, 2021
** B-PSU-101-MAR-1-1-minishell1-mohamed.mansour
** File description:
** mysh.c
*/

#include "include/minishell.h"

void get_path(char **env, stock_t *stocker)
{
    for (int i = 0; env[i] != 0; i += 1) {
        if (env[i][0] == 'P' && env[i][1] == 'A' && env[i][2] == 'T'
        && env[i][3] == 'H' && env[i][4] == '=')
            stocker->path = word_to_tab(env[i], ':', 5);
    }
}

int minishell(stock_t *stocker, char **env)
{
    get_path(env, stocker);
    for (int i = 0; stocker->path[i] != 0; i += 1) {
        stocker->path[i] = my_fusion_str(stocker->path[i], "/", stocker->total_shell_cmd[0]);
    if (access(stocker->path[i], X_OK) == 0 && access(stocker->path[i], F_OK) == 0) {
        my_exec(stocker->path[i], env, stocker);
        return 1;
        }
    }
    return 0;
}

char *clean(char *str)
{
    str[my_strlen(str) - 1] = '\0';
    return(str);
}

int my_sh(stock_t *stocker, char **env)
{
    if (stocker->buffer == NULL)
        return 84;
    write(0, "Hello user\n\n", 13);
    write(0, "$> ", 3);
    while (getline(&stocker->buffer, &stocker->size, stdin) > 0) {
        stocker->buffer = clean(stocker->buffer);
        if (my_strcmp(stocker->buffer, "exit") == 0) {
            write(0, "exit\n", 5);
            return 84;
        }
        stocker->total_shell_cmd = word_to_tab(stocker->buffer, ' ', 0);
        if (minishell(stocker, env) == 84)
            return 84;
        write(0, "$> ", 3);
    }
    return 0;
}

int main(int ac, char **av, char **env)
{
    if (ac != 1 || av[1] != NULL)
        return 84;
    stock_t *stocker = malloc(sizeof(stock_t));
    my_init_stocker(stocker, ac, env);
    if (my_sh(stocker, env) == 84)
        return 84;
    write(0, "Bye \n", 5);
    free(stocker->buffer);
    return 0;
}