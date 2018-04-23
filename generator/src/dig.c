/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** dig maze
*/

#include "structs.h"
#include "macro.h"
#include <stdbool.h>

// dig que dans une seule direction
void dig(Maze *maze, int coord, char direction)
{
	if(!IS_DIGGED(maze->ar[coord], direction))
		maze->ar[coord] += direction;
	switch (direction) {
	case (TOP):
		dig(maze, coord - maze->max.x, BOT);
		break;
	case (LEFT):
		dig(maze, coord - 1, RIGHT);
		break;
	case (RIGHT):
		dig(maze, coord + 1, LEFT);
		break;
	case (BOT):
		dig(maze, coord + maze->max.x, TOP);
		break;
	}
}
