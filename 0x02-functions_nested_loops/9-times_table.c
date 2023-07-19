#include "main.h"

/**
 * times_table - This prints the 9 times table, starting with 0
 * written by daniel
 */
void times_table(void)
{
	int i, d, m;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d < 10; d++)
		{
			m = d * i;
			if (d == 0)
			{
				_putchar(m + '0');
			}

			if (m < 10 && d != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			} else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
