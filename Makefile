##
## EPITECH PROJECT, 2020
## my_printf
## File description:
## makefile
##

CC	=	gcc 

RM	=	rm -f

SRC	=	lib/my/my_printf.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr2.c	\
		lib/my/my_putbinary.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
