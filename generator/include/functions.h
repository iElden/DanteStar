/*
** EPITECH PROJECT, 2018
** Dante's star
** File description:
** all functions proto
*/

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <stdbool.h>
#include "structs.h"

bool error_handling(int ac, char **av);
bool init_struct(maze_t *maze, char **av);
void display_map(maze_t *maze);
void create_maze(maze_t *maze);
void dig(maze_t *maze, int head, char direction, bool recursive);
int move_head(maze_t *maze, int head, char direction);
int find_new_room(maze_t *maze, char *direction);
char get_random_direction(maze_t *maze, int head);
void destroy(maze_t *maze);
void make_maze_harder(maze_t *maze, char *str, int size);

#endif
