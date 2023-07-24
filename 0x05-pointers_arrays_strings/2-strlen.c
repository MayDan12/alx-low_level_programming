#include "main.h"

/**
 * _strlen - this function returns the length of a string
 * @s: the strings
 * Return: the length
 */

int _strlen(char *s)
{
	int tongi = 0;

	while (*s != '\0')
	{
		tongi++;
		s++;
	}
	return (tongi);
}
