##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## my
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_put_nbr.c	\
		my_put_nbru.c	\
		my_put_nbrul.c	\
		my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	make clean

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../$(NAME) $(NAME)

re:	fclean all

.PHONY:	all	re	fclean	clean
