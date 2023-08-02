#include "main.h"
/**
 * factorial - this returns factorial of any number
 * written by daniel oluwanimotele
 * @n: this is the input
 * Return: 0 always
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
