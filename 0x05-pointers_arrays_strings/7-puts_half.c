#include "main.h"
/**
 * puts_half - this functins that prints half of a string
 * written by daniekl oluwanimotele
 * @str: input parameter
 * Return: 0 half of input
 */
void puts_half(char *str)
{
	int d, n, tongi;

	tongi = 0;

	for (d = 0; str[d] != '\0'; d++)
		tongi++;

	n = (tongi / 2);
	if ((tongi % 2) == 1)
		n = ((tongi + 1) / 2);

	for (d = n; str[d] != '\0'; d++)
		_putchar(str[d]);
	_putchar('\n');
}
