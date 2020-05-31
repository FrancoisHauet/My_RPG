##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

MAKEFLAGS	+=	--no-print-directory

SRC = 	$(wildcard SRC/*.c SRC/init/*.c SRC/collision/*.c SRC/mouv_display/*.c)

OBJ =	$(SRC:.c=.o)

NAME =	my_rpg

CFLAGS =	-W -Wall -Wextra -Iinclude -g3

RED			=	\033[0;31m
GREEN		=	\033[0;32m
NC			=	\033[0m
GREY		=	\033[90m
BG_COLOR	=	\033[36m

all: 	flags $(OBJ)
	@make -C ./lib/my
	@gcc -l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window -o $(NAME) $(OBJ) -L./lib/my -lmy

flags:
	@echo -e '${BG_COLOR}Flags: $(CFLAGS)${NC}'

%.o:	%.c
	@echo -e '${GREEN} [ OK ]${NC} Building : $<'
	@$(CC) -o $@ -c $< $(LDFLAGS) $(CFLAGS)

clean:
	@echo -e '${RED}Cleaning sources${NC}'
	@make clean -C ./lib/my
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@echo -e '${RED}Clean${NC} : OK'

fclean:	clean
	@rm -f $(NAME)
	@echo -e '${RED}Fclean${NC}: ./$(NAME) removed'

re:	fclean all

.PHONY: re fclean clean all