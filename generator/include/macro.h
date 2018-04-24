/*
** EPITECH PROJECT, 2018
** DanteStar
** File description:
** macro.h
*/

#ifndef DANTESTAR_MACRO_H
#define DANTESTAR_MACRO_H

#define TOP (1)
#define LEFT (2)
#define RIGHT (4)
#define BOT (8)

#define	IS_BETWEEN(a, b, c)     (c >= a && c <= b)
#define	IS_ALPHA(c)     (IS_BETWEEN('a', 'z', c) && IS_BETWEEN('A', 'Z', c))
#define	IS_NUM(c)       (IS_BETWEEN('0', '9', c))
#define	IS_ALPHANUM(c)  (IS_ALPHA(c) && IS_NUM(c))
#define	IS_DIGGED(room, direction) ((room / direction) % 2)

#define	ERR -1
#define	OK 0
#define	NULL_PTR ": String pointer is NULL"
#define	EXIT_ERROR (84)
#define	ARGS_NUM "Please make sure that all arguments are numbers.\n"
#define	ARGS_COUNT "Please make sure you have the right count of arguments.\n"


#endif //DANTESTAR_MACRO_H
