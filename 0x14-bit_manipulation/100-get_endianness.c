#include "main.h"

/**
 * get_endianness - This function checks the endianness of a system or program
 *
 * written by daniel love oluwanimotele the great
 * Return: the endianess
 */
int get_endianness(void)
{
	unsigned int may = 1;
	unsigned char *dan = (unsigned char *)&may;

	return ((*dan == 1) ? 1 : 0);
}
