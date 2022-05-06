/*
** EPITECH PROJECT, 2021
** B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
** File description:
** my_sh.c
*/

#include "../include/minishell.h"

int my_sh(stock_t *stocker)
{
    if (stocker->buffer == NULL)
        return 84;
    write(0, "Hello user\n\n$> ", 16);
    while (getline(&stocker->buffer, &stocker->size, stdin) > 0) {
        stocker->buffer = clean(stocker->buffer);
        if (check_exit(stocker) == 0)
            return 0;
        stocker->total_shell_cmd = word_to_tab(stocker->buffer, ' ', 0);
        if (minishell(stocker) == 1) {
            write(0, "\n", 1);
        }
        write(0, "$> ", 3);
    }
    return 0;
}
