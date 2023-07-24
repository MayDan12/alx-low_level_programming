#include "main.h"
/**
 * print_rev - This function print srings in reverse
 * written by daniel oluwanimotele
 * @s: input always
 * Return: 0 and (success)
 */

void print_rev(char *s)
{
	int tongi = 0;
	int d;

	while (*s != '\0')
	{
		tongi++;
		s++;
	}
	s--;
	for (d = tongi; d > 0; d--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
