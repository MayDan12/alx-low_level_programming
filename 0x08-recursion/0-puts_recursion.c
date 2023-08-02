#include "main.h"
/**
 * _puts_recursion - this function prints a string
 * @s: this is the input
 * written by daniel oluwanimotele
 * Return: 0malways
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
