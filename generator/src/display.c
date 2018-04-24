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

void display_map(Maze *maze)
{
	int size = (maze->real.x + 1) * (maze->real.y);
	char *str = 	malloc(size * sizeof(*str));
	int lb_pos = (maze->real.x) * (maze->real.y);
	int real = maze->real.x;
	int j = 0;

	if (str == NULL)
		return;
	memset(str, 'o', (size - 1));
	for (int i = real; i <= lb_pos; i += maze->real.x + 1)
			str[i] = '\n';
	for (int i = 0; i <= lb_pos; i += 2) {
		if ((i % ((real + 1) * 2)) / real)
			continue;
		str[i] = '.';
		if (IS_DIGGED(maze->ar[j], RIGHT))
			str[i + 1] = '.';
		if (IS_DIGGED(maze->ar[j], BOT))
			str[i + real + 1] = '.';
		++j;
	}
	printf("%s", str);
}
