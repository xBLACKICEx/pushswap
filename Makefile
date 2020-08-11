##
## EPITECH PROJECT, 2019
## pushswap
## File description:
## Makefile
##

CFLAGS	= -Os

SRC	=	./src/double_linked_list/list_tools.c\
		./src/double_linked_list/pop_list.c\
		./src/double_linked_list/push_list.c\
		./src/pushswap/list_swap_ruls_0.c\
		./src/pushswap/list_swap_ruls_1.c\
		./src/pushswap/main.c\
		./src/pushswap/pushswap.c\
		./src/tools/my_getnbr.c

OBJ	= 	$(SRC:.c=.o)

NAME	=	push_swap

CC	=	gcc -I./include/ -o

all:	$(NAME)
$(NAME):	$(OBJ)
	$(CC) $(NAME)	$(OBJ)	$(CFLAGS)

clean:
	rm -rf	$(OBJ)
	rm -f	*~
	rm -f	*#
	rm -f	#*

fclean:	clean
	rm -rf  $(NAME)

re:	fclean all