##
## EPITECH PROJECT, 2018
## Dante's star
## File description:
## root Makefile
##

all :
		make -C generator all
		make -C solver all

clean :
		make -C generator clean
		make -C solver clean

fclean :
		make -C generator fclean
		make -C solver fclean

re :
		make -C generator re
		make -C solver re
