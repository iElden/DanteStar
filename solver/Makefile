##
## EPITECH PROJECT, 2017
## main Makefile
## File description:
## Makefile for the project
##

SRC =		src/main.c \

OBJ =		$(SRC:%.c=%.o)

INC =		-I ./include

CFLAGS =	$(INC) -Wall -Wextra -Wshadow

NAME =		generator

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
