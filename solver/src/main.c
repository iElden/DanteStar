/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** solver main
*/

#include <stdlib.h>
#include <stdio.h>
#include "structs.h"
#include "functions.h"

int main(int ac, char **av)
{
	maze_t maze;

	if (ac != 2)
		return (84);
	if (!load_file(&maze, av[1]))
		return (84);
	if (!parse_file(&maze)) {
		free(maze.str);
		return (84);
	}
	if (solve_maze(&maze))
		printf("%s", maze.str);
	else
		printf("%s", "no solution found");
	free(maze.str);
	return (0);
}
