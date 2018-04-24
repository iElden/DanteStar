/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** display.c
*/

#include "structs.h"
#include "macro.h"
#include "functions.h"

char *_display_base_map(Maze *maze)
{
	char *str = NULL;
	int size = (maze->real.x + 1) * (maze->real.y);

	str = malloc(size * sizeof(*str));
	if (str == NULL)
		return NULL;
	for (int j = 0; j <= size; ++j) {
		str[j] = '*';
		if ((j + 1) % (maze->real.x + 1) == 0)
			str[j] = '\n';
	}
	str[size - 1] = '\0';
	return str;
}

char *display_base_map(Maze *maze)
{
	char *str = NULL;
	int size = (maze->real.x + 1) * (maze->real.y);

	str = malloc(size * sizeof(*str));
	if (str == NULL)
		return NULL;
	for (int k = 0; k < size; ++k) {
		if ((k / maze->max.x) % 2 == 0)
			str[k] = '?';
		else
			str[k] = '*';
		if ((k + 1) % (maze->real.x + 1) == 0)
			str[k] = '\n';
		printf("k : %d\nstr :\n%s\n", ((k / maze->max.x) % 2), str);
	}
	return str;
}