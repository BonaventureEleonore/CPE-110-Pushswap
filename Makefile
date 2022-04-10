##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC	=	src/linked_list/create_list_a.c	\
		src/linked_list/create_list_b.c	\
		src/linked_list/create_node.c	\
		src/linked_list/supp_node.c		\
		src/linked_list/find_smallest.c	\
		src/linked_list/size_of_list.c	\
		src/operator/rra.c				\
		src/operator/ra.c				\
		src/operator/pb.c				\
		src/operator/pa.c				\
		src/loop_operator.c				\
		src/lunch_pushswap.c			\
		src/pushswap.c					\

TESTS_SRC	=	tests/tests_lib.c		\
				tests/tests_list_func.c	\

NAME	=	push_swap

CFLAGS	=	-I include/ -Wall -Wextra -W -Werror

LFLAGS	=	-L./lib/my -lmy

TESTS_FLAGS	=	--coverage -lcriterion

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc -o $(NAME) main.c $(SRC) $(CFLAGS) $(LFLAGS) -g

clean:
	rm -rf *~
	rm -rf src/*~
	rm -rf include/*~
	rm -rf unit*
	rm -rf *.gcda
	rm -rf *.gcno
	rm -f vgcore*
	rm -rf .vscode/
	rm -rf a.out
	rm -rf src/*.o
	rm -rf lib/*.a
	rm -rf lib/my/*.a

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

debug:	clean
	gcc -g -o $(NAME) main.c $(SRC) $(CFLAGS)

tests_run:	clean
	make -C lib/my
	rm -rf unit*
	gcc -o unit_tests $(SRC) $(TESTS_SRC) $(TESTS_FLAGS) $(LFLAGS) $(CFLAGS)
	./unit_tests
	gcovr
	gcovr --branches --exclude tests/

.PHONY: all gcc clean fclean re debug
