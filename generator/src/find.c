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

int find_new_room(Maze *maze, char *direction)
{
	static int start = 0;

	for (int i = start; i < maze->max.x * maze->max.y; i++) {
		if (i == start && maze->ar[i])
			start++;
		if (maze->ar[i])
			continue;
		*direction = get_random_direction(maze, i);
		if (*direction)
			return (i);
	}
	return (-1);
}
