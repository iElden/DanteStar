##
## EPITECH PROJECT, 2017
## main Makefile
## File description:
## Makefile for the project
##

SRC =		main.c \

OBJ =		$(SRC:%.c=%.o)

INC =		-I ./include

CFLAGS =	$(INC) -W -Wall -Wextra -Wshadow -g

NAME =		dante_star

CC =		gcc

all :		$(NAME)

$(LIBMY) :
	make -C lib/my/

$(NAME) :	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean :
		rm -f $(OBJ)

fclean :	clean
		rm -f $(NAME)

re :		fclean all
