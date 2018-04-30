/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** display.c
*/

#include <string.h>
#include "structs.h"
#include "macro.h"
#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

void place_even_walls(Maze *maze, char *str)
{
	int real = maze->real.x;
	int lb_pos = (maze->real.x + 1) * (maze->real.y);

	for (int i = real - 1; i <= lb_pos; i += maze->real.x + 1) {
		if (i % 2 == 0)
			str[i] = 'X';
		if (i % 2 == 1)
			str[i] = '*';
	}
}

void place_bottom(char *str, Maze *maze)
{
	int size = (maze->real.x + 1) * maze->real.y;
	
	for (int i = size - maze->real.x - 1; i < size - 2; i++) {
		if (i % 2 == 0)
			str[i] = 'X';
		else
			str[i] = '*';
	}
}

void fill_maze(Maze *maze, char *str, int lb_pos)
{
	int j = 0;

	for (int i = 0; i <= lb_pos + maze->max.x + 1; i += 2) {
		if ((i % ((maze->real.x + 1) * 2)) / maze->real.x)
			continue;
		str[i] = '*';
		if (IS_DIGGED(maze->ar[j], RIGHT))
			str[i + 1] = '*';
		if (IS_DIGGED(maze->ar[j], BOT))
			str[i + maze->real.x + 1] = '*';
		++j;
	}

}

void display_map(Maze *maze)
{
	int size = (maze->real.x + 1) * (maze->real.y);
	char *str = 	malloc(size * sizeof(*str));
	int lb_pos = (maze->real.x + 1) * (maze->real.y);

	if (str == NULL)
		return;
	memset(str, 'X', (size - 1));
	for (int i = maze->real.x; i <= lb_pos; i += maze->real.x + 1)
		str[i] = '\n';
	fill_maze(maze, str, lb_pos);
	if (maze->real.x % 2 == 0)
		place_even_walls(maze, str);
	if (maze->real.y % 2 == 0)
		place_bottom(str, maze); 
	str[size - 3] = (maze->real.y % 2 == 0) ? 'X' : '*';
	str[size - 2] = '*';
	printf("%s\n", str);
}
