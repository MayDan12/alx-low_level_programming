#include "main.h"
/**
 * puts2 - This Write a function that prints every other character of a string
 * written by daniel oluwanimotele
 * @str: string to input
 * Return: 0 good and always success
 */

void puts2(char *str)
{
	int tongi = 0;
	int t = 0;
	char *d = str;
	int m;

	while (*d != '\0')
	{
		d++;
		tongi++;
	}
	t = tongi - 1;
	for (m = 0; m <= t; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');
}
