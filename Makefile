##
## EPITECH PROJECT, 2021
## B-PSU-210-MAR-2-1-minishell2-mohamed.mansour
## File description:
## Makefile
##

SRC =	lib/my_fusion_str.c	\
		lib/my_putstr.c	\
		lib/my_show_word_array.c	\
		lib/my_str_to_word_array.c	\
		lib/my_strcmp.c	\
		lib/my_strdup.c	\
		lib/my_strlen.c	\
		lib/my_strncmp.c	\
		lib/show_tab.c	\
		lib/tab_to_space.c	\
		lib/word_to_tab.c	\
		lib/my_strcat.c	\
		src/check_exit.c	\
		src/check_path.c	\
		src/check_setenv.c	\
		src/clean.c	\
		src/create_tab.c	\
		src/duplic_tab_new.c	\
		src/duplic_tab_stock.c	\
		src/get_path.c	\
		src/minishell.c	\
		src/my_exec.c	\
		src/my_init_stocker.c	\
		src/my_load_tab_with_str.c	\
		src/my_malloc_tab_with_str.c	\
		src/my_setenv.c	\
		src/my_sh.c	\
		src/my_unsetenv.c	\
		src/my_unsetenv_remove.c	\
		src/rm_extra_space.c	\
		src/setenv_add.c	\
		src/setenv_add_two.c	\
		src/setenv_search.c	\
		src/stock_path.c	\
		src/unsetenv_search.c	\
		src/parse_str.c	\
		src/my_cd.c	\
		src/my_set_home.c	\
		src/my_set_oldpwd.c	\
		src/my_search_home.c	\
		src/my_go_home.c	\
		src/my_cd_less.c	\
		src/my_go_file.c	\
		src/my_get_old_pwd.c	\
		mysh.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

all	:	$(NAME)	$(SRC)

$(NAME)	:	$(OBJ)
	gcc	-c	-Wall	-g3	-Wextra	-W	$(SRC)
	gcc	$(OBJ)	-o	$(NAME)

clean :
	rm	-f	*.o
	rm	-f	*~
	rm -f lib/*.o
	rm -f lib/*~
	rm -f src/*.o
	rm -f src/*~

fclean :clean
	rm	-f	$(NAME)

re :	fclean	all