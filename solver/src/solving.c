/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** solver
*/

#include <stdbool.h>
#include "structs.h"
#include "directions.h"

int get_new_pos(maze_t *maze, int head, char direction)
{
	switch (direction) {
	case RIGHT:
		return (head + 1);
	case BOT:
		return (head + maze->max.x + 1);
	case LEFT:
		return (head - 1);
	case TOP:
		return (head - maze->max.x - 1);
	}
	return (-1);
}

bool head_can_move(int head, maze_t *maze, char direction)
{
	switch (direction) {
	case RIGHT:
		if ((head + 2) % (maze->max.x + 1) != 0)
			return (maze->str[head + 1] == '*');
		return (false);
	case BOT:
		if (head >= (maze->max.x + 1) * (maze->max.y - 1))
			return (maze->str[head + maze->max.x + 1] == '*');
		return (false);
	case LEFT:
		if (head % (maze->max.x + 1) != 0)
			return (maze->str[head - 1] == '*');
		return (false);
	case TOP:
		if (head < maze->max.x)
			return (maze->str[head - maze->max.x - 1]);
		return (false);
	}
	return (false);
}

bool solving(maze_t *maze, int head)
{
	maze->str[head] = 'o';
	if (head == maze->size - 1)
		return (true);
	for (int i = 0; i < 4; i++)
		if (head_can_move(head, maze, i) && get_new_pos(maze, head, i))
			return (true);
	maze->str[head] = '*';
	return (false);
}
