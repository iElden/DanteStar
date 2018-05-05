##
## EPITECH PROJECT, 2017
## main Makefile
## File description:
## Makefile for the project
##

SRC =		main.c \
		load_file.c \
		solving.c \
		parse_file.c

OBJ =		$(SRC:%.c=src/%.o)

INC =		-I ./include

CFLAGS =	$(INC) -Wall -Wextra -Wshadow

NAME =		solver

CC =		gcc

all :		$(NAME)

$(NAME) :	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean :
		rm -f $(OBJ)

fclean :	clean
		rm -f $(NAME)

re :		fclean all

dbg:		CFLAGS += -g -O0
dbg:		fclean all
