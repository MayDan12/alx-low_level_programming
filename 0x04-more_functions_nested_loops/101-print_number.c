#include "main.h"

/**
 * print_number - funstions prints an integer
 *
 * @n: int number
 * written by daniel oluwanimotele
 * Return: 0 Always success is good
 */

void print_number(int n)
{
	unsigned int ber = n;

	if (n < 0)
	{
		_putchar('-');
		ber = -ber;
	}

	if ((ber / 10) > 0)
		print_number(ber / 10);

	_putchar((ber % 10) + '0');
}
