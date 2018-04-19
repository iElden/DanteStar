/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** structure declaration
*/

#ifndef __STRUCTS_H__
#define __STRUCTS_H__

typedef struct coord Coord;
struct coord {
	int x;
	int y;
};

typedef struct maze Maze;
struct maze {
	short *ar;
	Coord max;
};

#endif
