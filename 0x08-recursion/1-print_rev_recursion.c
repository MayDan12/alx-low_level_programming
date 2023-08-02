#include "main.h"
/**
 * _print_rev_recursion - this prints a string in rucursive manner
 * @s: this is the input
 * written by danielm oluwanimotele
 * Return: 0 always excellent
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
