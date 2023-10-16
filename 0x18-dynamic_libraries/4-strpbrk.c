#include "main.h"
/**
 * _strpbrk - this function searches for strings in any set
 * @s: input
 * @accept: input
 * written by daniel oluwanimotele
 * Return: 0 excellent
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
