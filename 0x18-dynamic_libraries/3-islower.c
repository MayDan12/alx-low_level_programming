#include "main.h"

/**
 * _islower - verify if char is lowercase
 * @d: which must be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int d)
{
	if (d >= 'a' && d <= 'z')
		return (1);
	else
		return (0);
}
