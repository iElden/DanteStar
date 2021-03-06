/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** error_handling.c
*/

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "macro.h"

bool my_str_is_num(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (!IS_NUM(str[i]))
			return false;
		++i;
	}
	return true;
}

bool error_handling(int ac, char **av)
{
	if (ac != 3 && ac != 4) {
		dprintf(2, "%s", ARGS_COUNT);
		return false;
	}
	for (int i = 1; i < 3; ++i) {
		if (!my_str_is_num(av[i])) {
			dprintf(2, "%s", ARGS_NUM);
			return false;
		}
	}
	if (!atoi(av[1]) || !atoi(av[1]))
		return (false);
	return true;
}
