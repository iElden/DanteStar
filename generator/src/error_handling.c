/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** error_handling.c
*/

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

bool error_handling(int ac)
{
	if (ac != 3)
		return false;

	return true;
}