#include "main.h"
#include <stdio.h>
/**
 * _atoi - this convert a string to an integer
 * @s: what string to be converted
 * written by daniel oluwanimotele
 *
 * Return: the int convert fron the string
 */
int _atoi(char *s)
{
	int d, a, n, len, f, digit;

	d = 0;
	a = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (d < len && f == 0)
	{
		if (s[d] == '-')
			++a;

		if (s[d] >= '0' && s[d] <= '9')
		{
			digit = s[d] - '0';
			if (a % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;

			if (s[d + 1] < '0' || s[d + 1] > '9')
				break;
			f = 0;
		}
		d++;
	}
	if (f == 0)
		return (0);
	return (n);
}
