SRC =	lib/my/classic_c_func.c	\
		lib/my/c_func_2.c	\
		lib/my/c_func_3.c	\
		lib/my/c_func_4.c	\
		mysh.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

all	:	$(NAME)	$(SRC)

$(NAME)	:	$(OBJ)
	gcc	-c	-Wall	-g3	-Wextra	$(SRC)
	gcc	$(OBJ)	-o	$(NAME)

clean :
	rm	-f	*.o
	rm	-f	*~
	rm -f lib/my/*.o
	rm -f lib/my/*~

fclean :clean
	rm	-f	$(NAME)

re :	fclean	all