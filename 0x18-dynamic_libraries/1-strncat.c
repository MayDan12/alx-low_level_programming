#include "main.h"
/**
 * _strncat - This function concat two different strings
 * @dest: input value
 * @src: input value needed
 * @n: value needed
 * written by daniel oluwanimotele
 * Return: concat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int m;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[d] = src[m];
	d++;
	m++;
	}
	dest[d] = '\0';
	return (dest);
}

