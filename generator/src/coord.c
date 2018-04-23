/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** return 2d coord to 1d
*/

int get_1dcoord(Maze *maze, int x, int y)
{
	return (y * maze->max.x + x)
}

void get_2dcoord(Maze *maze, int i, int *x, int *y)
{
	*x = i % maze->max.x;
	*y = i / maze->max.y;
}
