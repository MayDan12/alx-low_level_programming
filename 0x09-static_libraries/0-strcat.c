#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: entered value of good
 * @src: entered value of the function
 * Return: void
 * written by daniel
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

