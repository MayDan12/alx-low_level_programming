#include "main.h"
/**
 * char *_strcpy - this is a function that copies string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: Strings
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int m = 0;

	while (*(src + d) != '\0')
	{
		d++;
	}
	for ( ; m < d; m++)
	{
		dest[m] = src[m];
	}
	dest[d] = '\0';
	return (dest);
}
