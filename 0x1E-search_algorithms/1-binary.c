#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - This function searches for a value in a sorted array
 * of intergers using binary search.
 * @array: This is the array inputted
 * @size: This is the sie of the sorted array
 * @value: This is the value we are looking for
 * Written By DAniel Oluwanimotele
 * Return: 1 if success else -1 if failed
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t d;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (d = left; d <= right; ++d)
		{
			printf("%d", array[d]);
			if (d < right)
				printf(", ");
			else
				printf("\n");
		}
		mid = (left + right) / 2;
		
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
