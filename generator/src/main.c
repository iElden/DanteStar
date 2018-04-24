/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** main.c
*/

#include "functions.h"
#include "macro.h"
#include "structs.h"
#include <stdio.h>

void print_dbg(Maze *maze)
{
	printf("\n---- MAZE ----\n");
	printf("Max {x:%i ; y:%i}\n",maze->max.x, maze->max.y);
	printf("Real{x:%i : y:%i}\n",maze->real.x, maze->real.y);
	for (int i = 0; i < maze->max.x * maze->max.y; i++) {
		printf("%s",i%maze->max.x?"":"\n");
		printf("%i\t", maze->ar[i]);
	}
	printf("\n");
}

int main(int ac, char **av)
{
	Maze maze;

	if (!error_handling(ac, av))
		return (EXIT_ERROR);
	if (!init_struct(&maze, av))
		return (EXIT_ERROR);
	create_maze(&maze);
//	print_dbg(&maze);
	display_map(&maze);
	return (0);
}
