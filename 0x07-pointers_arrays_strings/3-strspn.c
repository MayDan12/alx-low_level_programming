#include "main.h"
/**
 * _strspn - this is the entry point of the function
 * @s: the input
 * @accept: input
 * written by daniel oluwanimotele
 * Return: 0 excellent
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				d++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (d);
		}
		s++;
	}
	return (0);
}
