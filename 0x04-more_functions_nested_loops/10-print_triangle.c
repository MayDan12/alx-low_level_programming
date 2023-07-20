#include "main.h"

/**
 * print_triangle - this functions prints in triangular form
 * written by daniel oluwanimotele
 * @size: size of the traingle
 * Return: good boy
 */

void print_triangle(int size)
{
	int dan, may;

	if (size > 0)
	{
		for (dan = 1; dan <= size; dan++)
		{
			for (may = size - dan; may > 0; may--)
			{
				_putchar(' ');
			}
			for (may = 0; may < dan; may++)
			{
				_putchar('#');
			}
			if (dan == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
