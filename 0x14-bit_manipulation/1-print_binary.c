#include "main.h"
/**
 * print_binary - this function prints the binary representation of  a number
 * @n: the int to be printed
 *
 * written by daniel oluwanimotele
 * Return: Success
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
