#include "main.h"
/**
 * _strchr - this is a functrion that locates a character in a string
 * @s: input
 * @c: input
 * written by daniel oluwanimotele
 * Return: 0 excellent
 */
char *_strchr(char *s, char c)
{
	int d = 0;

	for (; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (&s[d]);
	}
	return (0);
}
