#include "main.h"
/**
 * _strncat - function concatenate two strings
 * using at most n bytes from src into dan
 * @dest: entered value input
 * @src: entered value input
 * @n: entered value input
 * written by daniel
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
