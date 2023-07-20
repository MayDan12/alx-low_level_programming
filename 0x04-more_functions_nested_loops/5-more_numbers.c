#include "main.h"

/**
 * more_numbers -this prints more numbers that before
 *
 * written by daniel oluwanimotele
 * Return: o always success is good
 */

void more_numbers(void)
{
	int u, b;

	for (u = 0; u < 10; u++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
