#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string input
 * @s: The strings to be measured
 * written by daniel oluwanimotele
 * Return: 0 always excellent
 */
int _strlen_recursion(char *s)
{
	int dan = 0;

	if (*s)
	{
		dan++;
		dan += _strlen_recursion(s + 1);
	}
	return (dan);
}
