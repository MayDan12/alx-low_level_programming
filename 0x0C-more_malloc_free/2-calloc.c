#include "main.h"
/**
 * _memset - this filles memory with a constant byte
 * @s: the memory area to be filled
 * @b: char area
 * @n: no of times to copy
 * written by daniel oluwanimotele
 * Return: 0 always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		s[f] = b;
	}

	return (s);
}

/**
 * _calloc - this function allocate memory for a n array using malloc
 * written by daniel oluwanimotele
 * @nmemb: the input
 * @size: the size of the array
 * Return: 0 always excxellent
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dan;

	if (nmemb == 0 || size == 0)
		return (NULL);

	dan = malloc(size * nmemb);

	if (dan == NULL)
		return (NULL);

	_memset(dan, 0, nmemb * size);

	return (dan);
}
