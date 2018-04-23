/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** all functions proto
*/

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "structs.h"
#include "macro.h"

bool error_handling(int ac, char **av);
bool init_struct(Maze *maze, char **av);
char *convert(Maze *maze);

#endif
