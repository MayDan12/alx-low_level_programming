#include <stdio.h>

/**
 * main - functions finds and prints all the largest prime factor
 * of 612852475143
 *
 * Return: 0 always success is good
 */

int main(void)
{
	long prime = 612852475143, divider;

	while (divider < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (divider = 3; divider < (prime / 2); divider += 2)
		{
			if ((prime % divider) == 0)
				prime /= divider;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
