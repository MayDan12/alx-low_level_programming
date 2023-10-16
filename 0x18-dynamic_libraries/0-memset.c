#include "main.h"
/**
 * _memset - this fill a block of memeory with a specific value
 * @s: tis is starting address of memory
 * @b: the desired value
 * @n: number of bytes to be change
 * Written by oluwanimotele mayowa
 * Return: 0 excellent
 */

char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
