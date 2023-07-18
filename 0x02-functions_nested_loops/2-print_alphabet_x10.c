#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 * written by danny
 */
void print_alphabet_x10(void)
{
	char dan;
	int d;

	d = 0;

	while (d < 10)
	{
		dan = 'a';
		while (dan <= 'z')
		{
			_putchar(dan);
			dan++;
		}
		_putchar('\n');
		d++;
	}
}
