/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** init maze struct
*/

#include <stdbool.h>
#include <stdlib.h>
#include "structs.h"
#include "macro.h"

int destroy(Maze *maze)
{
	free(maze->ar);
	return (EXIT_ERROR);
}

bool init_struct(Maze *maze, char **av)
{
	int x = atoi(av[0]);
	int y = atoi(av[1]);

	maze->real.x = x;
	maze->real.y = y;
	x = x / 2 + x % 2;
	y = y / 2 + y % 2;
	maze->max.x = x;
	maze->max.y = y;
	maze->ar = malloc(x * y * sizeof(short));
	if (!maze->ar)
		return (false);
	srand((unsigned long) maze->ar);
	return (true);
}
