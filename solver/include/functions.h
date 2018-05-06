/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** functions proto
*/

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <stdbool.h>
#include "structs.h"

bool load_file(maze_t *maze, char *path);
bool parse_file(maze_t *maze);
bool solve_maze(maze_t *maze);

#endif
