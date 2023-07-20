#include "main.h"

/**
 * print_square - this prints information in squaRe
 * @size: size of the square
 * Return: 0 always success is good
 */

void print_square(int size)
{
	int q, w;

	w = 0;

	if (size < 1)
		_putchar('\n');

	while (w < size)
	{
		q = 0;
		while (q < size)
		{
			_putchar('#');
			q++;
		}
		_putchar('\n');
		w++;
	}
}
