#include "variadic_functions.h"
/**
 * print_strings - This prints a string followed by a new line
 * @separator: The string to be printed
 * @n: the number of stings passed
 * @...: The strings to be printed
 * written by daniel
 * Return: nothing 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list letter;
	char *let;
	unsigned int value;

	va_start(letter, n);

	for (value = 0; value < n; value++)
	{
		let = va_arg(letter, char *);
		if (let == NULL)
			printf("(nil)");
		else
			printf("%s", let);

		if (value != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(letter);
}
