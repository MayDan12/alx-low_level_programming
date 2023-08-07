#include "main.h"
#include <stdlib.h>

/**
 * create_array - this create arrays of size and assign char c good
 * @size: This is size of array
 * @c: the char to assign
 * written by daniel oluwanimotele
 * Return: 0 pointer to array, Null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *dan;
	unsigned int d;

	dan = malloc(sizeof(char) * size);
	if (size == 0 || dan == NULL)
		return (NULL);

	for (d = 0; d < size; d++)
		dan[d] = c;
	return (dan);
}
