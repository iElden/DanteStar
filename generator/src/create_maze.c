/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** maze generator
*/

#include <stdlib.h>
#include <stdbool.h>
#include "macro.h"
#include "structs.h"
#include "functions.h"

void create_maze(maze_t *maze)
{
	int head = rand() % (maze->max.y * maze->max.x);
	char direction;

	while (true) {
		direction = get_random_direction(maze, head);
		if (direction) {
			dig(maze, head, direction, true);
			head = move_head(maze, head, direction);
			continue;
		}
		head = find_new_room(maze, &direction);
		if (head == -1)
			break;
		dig(maze, head, direction, true);
	}
}
