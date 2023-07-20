#include "main.h"

/**
 * print_most_numbers -  functions to print most numbers
 *
 * written by oluwanimotele daniel
 * Return: 0 always success is good
 */

void print_most_numbers(void)
{
	int dan;

	for (dan = 48; dan < 58; dan++)
	{
		if (dan != 50)
		{
			if (dan != 52)
			{
				_putchar(dan);
			}
		}
	}
	_putchar('\n');
}
