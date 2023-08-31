#include "main.h"

/**
 * flip_bits - This functionreturns the number of bit you want to flip to get
 * from another number
 * i love you is my problem
 * @n: The int to be flipped
 * @m: the flipped numbers
 *
 * written by daniel oluwanimotele great
 * Return: the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int get_xor = n ^ m;
	unsigned int times = 0;

	while (get_xor != 0)
	{
		times += get_xor & 1;
		get_xor >>= 1;
	}

	return (times);
}
