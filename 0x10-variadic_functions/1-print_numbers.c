#include "variadic_functions.h"
/**
 * print_numbers - This function prints numbers followed by a new line
 * @separator: this is the string to be printed between numbers
 * @n: the number of integers passed in the function
 * @...: the values passed in
 * written by mayowa oluwanimotele
 * Return: the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int values;

	va_start(numbs, n);

	for (values = 0; values < n; values++)
	{
		printf("%d", va_arg(numbs, int));

		if (values != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbs);
}
