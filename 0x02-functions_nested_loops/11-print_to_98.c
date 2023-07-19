#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This prints all natutral numbers from n to 98
 * and a  new line
 * @n: number to print from
 */
void print_to_98(int n)
{
	int d, m;

	if (n <= 98)
	{
		for (d = n; d <= 98; d++)
		{
			if (d != 98)
				printf("%d, ", d);
			else if (d == 98)
				printf("%d\n", d);
		}
	} else if (n >= 98)
	{
		for (m = n; m >= 98; m++)
		{
			if (m != 98)
				printf("%d, ", m);
			else if (m == 98)
				printf("%d\n", m);
		}
	}
}
