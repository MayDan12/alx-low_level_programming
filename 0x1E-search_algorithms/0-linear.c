#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - This function searches for a value in an array
 * of integer using linear search
 * Written by Daniel Oluwanimtele
 * @array: the given array
 * @size: the size of the array given
 * @value: The value of that we are to find using the linear search
 * Return: 1 if success else 0 if fails
 */
int linear_search(int *array, size_t size, int value)
{
	size_t indexes = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (indexes < size)
	{
		printf("Value checked array[%lu] = %d\n", indexes, array[indexes]);
		if (array[indexes] == value)
		{
			return (indexes);
		}
		indexes++;
	}
	return (-1);
}
