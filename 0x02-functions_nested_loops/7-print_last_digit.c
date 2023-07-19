#include "main.h"

/**
 * print_last_digit - This print the last digit of a number
 * @m: int to extract the last digit from
 * Return: The value of the last digit
 */
int print_last_digit(int m)
{
	int d;

	if (m < 0)
		m = -m;

	d = m % 10;

	if (d < 0)
		d = -d;

	_putchar(d + '0');
	return (d);
}
