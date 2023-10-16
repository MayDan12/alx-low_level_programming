#include "main.h"
/**
 * _strncpy - This is a function that copies a string
 * written by daniel oluwanimotele
 * @dest: input value needed
 * @src: input value needed
 * @n: input value needed
 * Return: The copied strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}

	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}

	return (dest);
}
