#include "main.h"
/**
 * _strcat - this concatinate two strings
 * written by daniel oluwanimotele
 * @dest: input value needed
 * @src: input value needed
 * Return: Strings thanks
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
