#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout for the program
 * @c: to print the character
 *
 * Return: 1 always (Success)
 * Error return -1 
 */
int _putchar(char d)
{
	return (write(1, &d, 1));
}
