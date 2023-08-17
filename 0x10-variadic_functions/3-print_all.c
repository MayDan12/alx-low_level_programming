#include "variadic_functions.h"
/**
 * print_all - This is a function that print anything
 * @format: list all the argument passed
 * written by dee boy
 * Return: print all
 */
void print_all(const char * const format, ...)
{
	int ze = 0;
	char *str, *may = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[ze])
		{
			switch (format[ze])
			{
				case 'c':
					printf("%s%c", may, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", may, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", may, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", may, str);
					break;
				default:
					ze++;
					continue;
			}
			may = ", ";
			ze++;
		}
	}

	printf("\n");
	va_end(list);
}
