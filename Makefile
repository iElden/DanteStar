##
## EPITECH PROJECT, 2018
## Dante's star
## File description:
## root Makefile
##

all:
	make -C generator $@
	make -C solver $@
%:
	make -C generator $@
	make -C solver $@
