#include "3-calc.h"
/**
 * get_op_func - This function select the correct function
 * @s: the argument passed
 * written by daniel
 * Return: a pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL},
	};

	int p = 0;

	while (ops[p].op != NULL && *(ops[p].op) != *s)
		p++;

	return (ops[p].f);
}
