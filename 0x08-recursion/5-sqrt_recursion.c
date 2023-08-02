#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural squareof root
 * @n: number to calculate
 * written by daniel oluwanimotele
 * Return: 0 always excellent
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses find the nature
 * @n: number to calculate
 * @i: iterator
 * written by daniel
 * Return: o square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, 1 + 1));
}
