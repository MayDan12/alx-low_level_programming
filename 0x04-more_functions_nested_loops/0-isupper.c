#include "main.h"

/**
 * _isupper - checks if c is uppercase or lowercase
 * written by danny
 * @c: is good boy
 * Return: if c is upper return 1 else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
