#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints n element of an array
 * @a: array name init
 * @n: the number of element of the array
 * written by daniel oluwanimotele
 * Return: 0 always success
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < (n - 1); d++)
	{
		printf("%d, ", a[d]);
	}

	if (d == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
