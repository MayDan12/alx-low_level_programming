#include "main.h"
/**
 * main - i love my alphabet
 * written by dannyboy12
 * Return 0 always (success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
