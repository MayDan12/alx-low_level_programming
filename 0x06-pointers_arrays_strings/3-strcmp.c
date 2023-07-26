#include "main.h"
/**
 * _strcmp - This function is used to compare string
 * written by daniel oluwanimotele
 * @s1: input value needed
 * @s2: input value needed
 * Return: The compared value
 */
int _strcmp(char *s1, char *s2)
{
	int d;

	d = 0;
	while (s1[d] != '\0' && s2[d] != '\0')
	{
		if (s1[d] != s2[d])
		{
			return (s1[d] - s2[d]);
		}
		d++;
	}
	return (0);
}
