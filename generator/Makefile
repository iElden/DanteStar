##
## EPITECH PROJECT, 2017
## main Makefile
## File description:
## Makefile for the project
##

SRC =		src/main.c \
		src/init_structs.c \
		src/error_handling.c \
		src/display.c \
		src/create_maze.c \
		src/dig.c \
		src/find.c \
		src/make_maze_harder.c

OBJ =		$(SRC:%.c=%.o)

INC =		-I ./include

CFLAGS =	$(INC) -W -Wall -Wextra -Wshadow

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
