/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** hunt
*/

#include "structs.h"
#include "macro.h"
#include "functions.h"
#include <stdbool.h>
#include <stdlib.h>

char get_random_room(Maze *maze, int head)
{
	int len = 0;
	int list[4];
	int max_dig_bot = (maze->max.y - 1) * maze->max.x;

	if (head > maze->max.x && maze->ar[head - maze->max.x])
		list[len++] = TOP;
	if (head % maze->max.x != 0 && maze->ar[head - 1])
		list[len++] = LEFT;
	if ((head + 1) % maze->max.x != 0 && maze->ar[head + 1])
		list[len++] = RIGHT;
	if (head < max_dig_bot && maze->ar[head + maze->max.x])
		list[len++] = BOT;
	return (len ? list[rand() % len] : 0);
}

int find_new_room(Maze *maze, char *direction)
{
	static int start = 0;

	print_dbg(maze);
	printf("\n=== HUNT ===\n");
	for (int i = start; i < maze->max.x * maze->max.y; i++) {
		if (i == start && maze->ar[i])
			start++;
		printf("scan room : %i (%i)\n", i, maze->ar[i]);
		if (maze->ar[i])
			continue;
		*direction = get_random_room(maze, i);
		printf("get direction : %i\n",*direction);
		if (*direction)
			return (i);
	}
	printf("NO EMPTY ROOM FOUND !\n");
	return (-1);
}
