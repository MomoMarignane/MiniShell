/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** check_exit.c
*/

#include "../include/minishell.h"

int check_exit(stock_t *stocker)
{
    if (my_strcmp(stocker->buffer, "exit") == 0) {
        write(0, "exit\n", 5);
        return 0;
    }
    return 1;
}