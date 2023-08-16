#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct op - this ia a struct op.
 * @op: The operator to use.
 * this is daniel
 * @f: This is the associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
