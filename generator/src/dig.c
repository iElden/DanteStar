/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** dig maze
*/

#include "structs.h"
#include "macro.h"
#include <stdlib.h>

int move_head(Maze *maze, int head, char direction)
{
	switch (direction) {
	case (TOP):
		return (head - maze->max.x);
	case (LEFT):
		return (head - 1);
	case (RIGHT):
		return (head + 1);
	case (BOT):
		return (head + maze->max.x);
	}
	return (-1);
}

char get_random_direction(Maze *maze, int head)
{
	int len = 0;
	int list[4];
	int max_dig_bot = (maze->max.y - 1) * maze->max.x;

	if (head > maze->max.x && !maze->ar[head - maze->max.x])
		list[len++] = TOP;
	if (head % maze->max.x != 0 && !maze->ar[head - 1])
		list[len++] = LEFT;
	if ((head + 1) % maze->max.x != 0 && !maze->ar[head + 1])
		list[len++] = RIGHT;
	if (head < max_dig_bot && !maze->ar[head + maze->max.x])
		list[len++] = BOT;
	return (len ? list[rand() % len] : 0);
}

void dig(Maze *maze, int coord, char direction, bool dig_forward)
{
	if (!IS_DIGGED(maze->ar[coord], direction))
		maze->ar[coord] += direction;
	if (dig_forward)
		switch (direction) {
		case (TOP):
			dig(maze, coord - maze->max.x, BOT, false);
			break;
		case (LEFT):
			dig(maze, coord - 1, RIGHT, false);
			break;
		case (RIGHT):
			dig(maze, coord + 1, LEFT, false);
			break;
		case (BOT):
			dig(maze, coord + maze->max.x, TOP, false);
			break;
		}
}
