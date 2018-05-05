/*
** EPITECH PROJECT, 2018
** Dante's Star
** File description:
** include structs
*/

#ifndef __STRUCTS_H__
#define __STRUCTS_H__

struct coord {
	int x;
	int y;
};

typedef struct maze maze_t;
struct maze {
	char *str;
	struct coord max;
	int size;
};
#endif
