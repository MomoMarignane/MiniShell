/*
** EPITECH PROJECT, 2021
** B-PSU-101-MAR-1-1-minishell1-mohamed.mansour
** File description:
** my_exec.c
*/

#include "../include/minishell.h"

void my_exec(char *str, stock_t *stocker)
{
    pid_t pid = fork();
    int stat = 0;
    if (pid == -1)
        perror("fork");
    else if (pid > 0)
        waitpid(pid, &stat, 0);
    else {
        execve(str, stocker->total_shell_cmd, stocker->my_env);
    }
}