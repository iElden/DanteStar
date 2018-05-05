/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** load file
*/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdlib.h>
#include "structs.h"

bool load_file(maze_t *maze, char *path)
{
	int fd = open(path, O_RDONLY);
	struct stat stats;

	if (fd == -1)
		return (false);
	if (fstat(fd, &stats) == -1)
		return (false);
	maze->size = stats.st_size;
	maze->str = malloc(maze->size + 1);
	if (!maze->str)
		return (false);
	read(fd, maze->str, maze->size);
	maze->str[maze->size] = '\0';
	return (true);
}
