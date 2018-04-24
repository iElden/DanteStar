/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** main.c
*/

#include "functions.h"

int main(int ac, char **av)
{
	Maze maze;

	if (!error_handling(ac, av))
		return (EXIT_ERROR);
	if (!init_struct(&maze, av))
		return (EXIT_ERROR);
//	create_maze(&maze);
	display_map(&maze);
	return (0);
}
