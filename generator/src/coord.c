/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** return 2d coord to 1d
*/

int get_coord(Maze *maze, int x, int y)
{
	return (y * maze->max.x + x)
}
