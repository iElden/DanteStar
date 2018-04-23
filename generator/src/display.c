/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** display.c
*/

#include "structs.h"
#include "macro.h"
#include "functions.h"

char *convert(Maze *maze)
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
	printf("map :\n\n%s\n", str);
	return str;
}