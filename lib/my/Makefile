##
## EPITECH PROJECT, 2019
## Makefile_lib
## File description:
## Makefile_lib
##

SRC     =	my_putchar.c  			\
		my_strlen.c					\
		my_put_nbr.c				\
		my_strncpy.c				\
		my_compute_power_rec.c		\
		my_putstr.c					\
		my_swap.c					\
		my_compute_square_root.c	\
		my_revstr.c					\
		my_isneg.c					\
		my_strcpy.c					\
		my_getnbr.c					\
		my_itoa.c

OBJ	=	$(SRC:.c=.o)

NAME	=	NAME

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc libmy.a $(OBJ)

$(OBJ): $(SRC)
	@gcc -c $(SRC) -g

clean:
	@rm *.o
	@rm *a

.PHONY: all clean fclean re