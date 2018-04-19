/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** main.c
*/

#include "structs.h"
#include "macro.h"
#include "functions.h"

int main(int ac, char **av)
{
	Maze maze;

	if (!error_handling(ac, av))
		return (EXIT_ERROR);
	if (!init_struct(&maze, av))
		return (EXIT_ERROR);
	return (0);
}
