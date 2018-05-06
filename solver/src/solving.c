/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** solver
*/

#include <stdbool.h>
#include "structs.h"
#include "directions.h"

int get_pos(maze_t *maze, int head, char direction)
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

bool can_move(maze_t *maze, int head, char direction)
{
	switch (direction) {
	case RIGHT:
		if ((head + 2) % (maze->max.x + 1) != 0)
			return (maze->str[head + 1] == '*');
		return (false);
	case BOT:
		if (head < (maze->max.x + 1) * (maze->max.y - 1))
			return (maze->str[head + maze->max.x + 1] == '*');
		return (false);
	case LEFT:
		if (head % (maze->max.x + 1) != 0)
			return (maze->str[head - 1] == '*');
		return (false);
	case TOP:
		if (head >= maze->max.x)
			return (maze->str[head - maze->max.x - 1] == '*');
		return (false);
	}
	return (false);
}

bool solve(maze_t *maze, int head)
{
	maze->str[head] = 'o';
	if (head == maze->size - 1)
		return (true);
	for (char i = 0; i < 4; i++)
		if (can_move(maze, head, i) && solve(maze, get_pos(maze, head, i)))
			return (true);
	maze->str[head] = '*';
	return (false);
}

bool solve_maze(maze_t *maze)
{
	if (maze->str[0] != '*' || maze->str[maze->size - 1] != '*')
		return (false);
	return (solve(maze, 0));
}
