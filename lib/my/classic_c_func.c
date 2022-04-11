/*
** EPITECH PROJECT, 2021
** B-PSU-101-MAR-1-1-minishell1-mohamed.mansour
** File description:
** classic_c_func.c
*/

#include "../../include/minishell.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i += 1)
        write(1, &str[i], 1);
}

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
        i += 1;
    for (; s1[j] != '\0'; j += 1);
    if (j == i)
        return 0;
    else
        return 1;
    return 0;
}

char *my_strdup(char *str)
{
    int i = 0;
    for (; str[i]; i += 1);
    char *temp = (char *)malloc(sizeof(char));
    for (int i = 0; str[i]; i += 1)
        temp[i] = str[i];
    temp[i] = '\0';
    return temp;
}

int my_strlen(char *src)
{
    int i = 0;
    for (; src[i] != '\0'; i += 1);
    return i;
}

void my_init_stocker(stock_t *stocker, int ac, char **env)
{
    stocker->ac_stk = ac;
    stocker->buffer = (char *)malloc(sizeof(char));
    stocker->size = 2048;
    stocker->ls_path = my_strdup("/bin/");
    stocker->total_shell_cmd = malloc(sizeof(char *) * 4);
    for (int i = 0; env[4][i] != '\0'; i += 1)
        if (env[4][i] == ':')
            stocker->total += 1;
    stocker->total += 1;
}