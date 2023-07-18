#include "main.h"

/**
 * print_sign - signof a number output
 * @n: check the int
 * Return: 1 if n is greater that zero print + 0
 * and if n is zero print 0 -1
 * if n is less than zero print -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (-1);
}
