#include "function_pointers.h"
/**
 * array_iterator - This function executes functions given as a parameter
 *
 * written by daniel oluwanimotele dan
 * @array: The array uses
 * @size: The size of the elements to print
 * @action: The pointer to print in regular or hex
 *
 * Return: 0 daniel olorigbenke always
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (array == NULL || action == NULL)
		return;

	for (d = 0; d < size; d++)
	{
		action(array[d]);
	}
}
