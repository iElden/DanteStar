/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** solver main
*/

#include "structs.h"

int main(int ac, char **av)
{
	maze_t maze;

	if (ac != 2)
		return (84);
	if (!load_file(&maze, av[1]))
		return (84);
	if (!maze.str)
		return (84);
	if (!parse_file(&maze))
		return (84);
}
