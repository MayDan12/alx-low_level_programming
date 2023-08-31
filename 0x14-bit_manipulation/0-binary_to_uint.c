#include "main.h"
/**
 * binary_to_uint - this function convert a binary number to an uint
 * @b: this is pointing to the string of 0 and 1 chars
 * written by daniel oluwanimotele
 * Return: the converted number or 0 if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	int z;

	if (b == NULL)
		return (0);

	for (z = 0; b[z] != '\0'; z++)
	{
		if (b[z] == '0' || b[z] == '1')
		{
			answer = answer * 2 + (b[z] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (answer);
}
