#include "main.h"

/**
 * clear_bit - This function set the value of a bit to 0 at a given index
 * @n: the pointer to clear
 * @index: the index of the to be set to 0
 * written by daniel
 * Return: 1 if it works else -1
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
