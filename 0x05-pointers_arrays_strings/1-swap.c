#include "main.h"

/**
 * swap_int - this swaps the values of two integers
 * @a: the integer to swap
 * @b: the integer to swap
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
