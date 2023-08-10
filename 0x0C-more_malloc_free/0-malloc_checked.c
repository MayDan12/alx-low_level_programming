#include "main.h"
/**
 * malloc_checked - This function allocates memory using malloc
 * written by daniel oluwanimotele
 * @b: the input
 * Return: success 0 always
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
