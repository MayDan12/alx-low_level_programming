#include "main.h"

/**
 * print_line - used to print lines
 * @n: is a good boy
 * written by oluwanimotele daniel
 * Return: 0 always sucess is good
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int d;

		for (d = 1; d <= n; d++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
