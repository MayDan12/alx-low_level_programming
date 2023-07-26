#include "main.h"
/**
 * reverse_array - This functions reverse the content of any integer array
 * @a: input value needed
 * @n: input value needed
 * written by daniel oluwanimotele
 * Return: the reversed integer
 */
void reverse_array(int *a, int n)
{
	int d;
	int t;

	for (d = 0; d < n--; d++)
	{
		t = a[d];
		a[d] = a[n];
		a[n] = t;
	}
}
