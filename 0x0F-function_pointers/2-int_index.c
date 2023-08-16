#include "function_pointers.h"
/**
 * int_index - This is a function that search for an integer
 * written by dfaniel oluiwanimotele may
 * @array: The array used
 * @size: This is the number of element present in the array
 * @cmp: The pointer to the function to compare value
 *
 * Return: 0 always excellent
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int g;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (g = 0; g < size; g++)
	{
		if (cmp(array[g]))
			return (g);
	}
	return (-1);
}
