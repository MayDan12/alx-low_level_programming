#include "main.h"
/**
 * _memcpy - this is a function that copy memory area
 * @dest: the memory where is stored
 * @src: the memory where it is copied
 * @n:number of bytes
 * written by daniel oluwanimotele
 * Return: 0 excellent
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int z = n;

	for (; y < z; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
