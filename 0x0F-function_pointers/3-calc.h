#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 * @op: the operator
 * @f: the function associated
*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/*******3-op_functions**********/
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

/*******3-get_op_func.c********/
int (*get_op_func(char *s))(int, int);
#endif
