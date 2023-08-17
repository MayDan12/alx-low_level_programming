#include "variadic_functions.h"
/**
 * sum_them_all - THis function takes multiple integers and sum them up
 * @n: the number of argument passed
 * @...: itemes in the argument
 * written by daniel oluwanimotele
 * Return: the sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list func;

	unsigned int d, add = 0;

	if (n == 0)
		return (0);

	va_start(func, n);

	for (d = 0; d < n; d++)
	{
		add += va_arg(func, unsigned int);
	}

	va_end(func);

	return (add);
}
