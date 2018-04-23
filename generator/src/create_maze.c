/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** maze generator
*/

#include <stdbool.h>
#include "macro.h"

int move_head(Maze *maze, int head, char direction)
{
	switch(direction) {
	case (TOP):
		return (head - maze->max.x);
	case (LEFT):
		return (head - 1);
	case (RIGHT)
		return (head + 1);
	case (BOT)
		return (head + maze->max.x);
	}
	return (-1);
}

char get_random_pos(Maze *maze, int head)
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

void create_maze(Maze *maze)
{
	int head = rand() % (maze->max.y * maze->max.x);
	char direction;
	
	while (true) {
		direction = get_random_direction(maze, head);
		if (direction) {
			dig(maze, head, direction);
			head = move_head(maze, head, direction);
			continue;
		}
		//head = hunt();
	}
}
