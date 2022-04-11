/*
** EPITECH PROJECT, 2021
** B-PSU-101-MAR-1-1-minishell1-mohamed.mansour
** File description:
** c_func_4.c
*/

#include "../../include/minishell.h"

char *my_fusion_str(char *src, char *src_2, char *src_3)
{
    char *final_str = (char *)malloc(sizeof(char));
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

int show_tab(char **tab)
{
    for(int i = 0; tab[i] != 0; i += 1)
        my_putstr(tab[i]), my_putstr("\n");
    return (0);
}

void my_exec(char *str, char **env, stock_t *stocker)
{
    pid_t pid = fork();
    int stat = 0;
    if (pid == -1)
        perror("fork");
    else if (pid > 0)
        waitpid(pid, &stat, 0);
    else {
        execve(str, stocker->total_shell_cmd, env);
    }
}