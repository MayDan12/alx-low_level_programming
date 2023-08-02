#include "main.h"
/**
 * _pow_recursion - this returns the value of x raise by y
 * written by daniel oluwanimotele
 * @x: the input to be raised
 * @y: raised
 * Return: 0 always
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
