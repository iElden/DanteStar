/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** parse maze
*/

#include "structs.h"
#include <stdbool.h>

int get_line_len(char *str)
{
	int len = 0;

	for (; str[len] && str[len] != '\n'; len++);
	return (len);
}

int get_number_of_line(char *str)
{
	int len = 0;

	for (int i = 0; str[i]; i++)
		if (str[i] == '\n')
			len++;
	return (len + 1);
}

bool map_is_valid(maze_t *maze)
{
	int i = 0;
	char *m = maze->str;

	while (maze->str[i] != '\0') {
		if (m[i] != '*' && m[i] != 'X' && m[i] != 'o' && m[i] != '\n')
			return false;
		i++;
	}
	return true;
}

bool parse_file(maze_t *maze)
{
	maze->max.x = get_line_len(maze->str);
	maze->max.y = get_number_of_line(maze->str);
	return (map_is_valid(maze));
}
