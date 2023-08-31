#include "main.h"
/**
 * get_bit - this function returns the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit
 *
 * written by daniel
 * Return: o or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int form = (1UL << index);

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n & form) ? 1 : 0);
}
