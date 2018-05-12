/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** remove wall when 3 are neabeary
*/

#include "structs.h"

char walls_near(maze_t *maze, char *str, int i)
{
	char total = 4;

	if ((i + 2) % (maze->real.x + 1) != 0)
		total -= (str[i + 1] == '*');
	if (i < (maze->real.x + 1) * (maze->real.y - 1))
		total -= (str[i + maze->real.x + 1] == '*');
	if (i % (maze->real.x + 1) != 0)
		total -= (str[i - 1] == '*');
	if (i >= maze->real.x)
		total -= (str[i - maze->real.x - 1] == '*');
	return (total);
}

void make_maze_harder(maze_t *maze, char *str, int size)
{
	for (int i = 0; i < size; i++)
		if (str[i] == 'X' && walls_near(maze, str, i) == 3)
			str[i] = '*';
}
