/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** structure declaration
*/

#ifndef __STRUCTS_H__
#define __STRUCTS_H__

#include <stdbool.h>

typedef struct coord coord_t;
struct coord {
	int x;
	int y;
};

typedef struct maze maze_t;
struct maze {
	short *ar;
	coord_t max;
	coord_t real;
	bool perfect;
};

#endif
