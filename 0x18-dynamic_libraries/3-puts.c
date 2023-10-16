#include "main.h"

/**
 * _puts - this prints a string followed by a new line
 * written by danirl oluwanimotele
 * @str: input
 * Return: o or input
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
