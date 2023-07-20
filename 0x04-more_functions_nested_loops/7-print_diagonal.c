#include "main.h"

/**
 * print_diagonal - it is good to be diagonal
 * @n: is a good boy
 * written by daniel oluwanimotele
 * Return: o always success is good
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int d, j;

		for (d = 0; d < n; d++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == d)
					_putchar('\\');
				else if (j < d)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
