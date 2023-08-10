#include "main.h"
/**
 * array_range - this function creates an array of integers that is good
 * written by daniel oluwanimotele
 * @min: the minimum value
 * @max: the maximum value
 * Return: 0 alwasys and the array
 */
int *array_range(int min, int max)
{
	int *dan;
	int f, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	dan = malloc(sizeof(int) * size);

	if (dan == NULL)
		return (NULL);

	for (f = 0; min <= max; f++)
		dan[f] = min++;

	return (dan);
}
