/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** error_handling.c
*/

#include <stdbool.h>
#include <stdio.h>

bool error_handling(int ac, char **av)
{
	if (ac != 3)
		return false;
	printf("av[1] = %s\nav[2] = %s\n",av[1], av[2]);
	return true;
}