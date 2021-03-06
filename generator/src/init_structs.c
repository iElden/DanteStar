/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** init maze struct
*/

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"
#include "macro.h"

int destroy(maze_t *maze)
{
	free(maze->ar);
	return (EXIT_ERROR);
}

bool init_struct(maze_t *maze, char **av)
{
	int x = atoi(av[1]);
	int y = atoi(av[2]);

	maze->real.x = x;
	maze->real.y = y;
	x = x / 2 + x % 2;
	y = y / 2 + y % 2;
	maze->max.x = x;
	maze->max.y = y;
	maze->ar = malloc(x * y * sizeof(short));
	if (!maze->ar)
		return (false);
	memset(maze->ar, 0, x * y * sizeof(short));
	if (av[3] && strcmp(av[3], "perfect") == 0)
		maze->perfect = true;
	else
		maze->perfect = false;
	srand((unsigned long) maze->ar);
	return (true);
}
