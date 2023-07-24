#include "main.h"
/**
 * rev_string - This is a function that reverse a strings
 *
 * written by daniel ooluwanimotele
 * @s: input parameter
 * Return: 0 success
 */
void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int d;

	while (s[count] != '\0')
		count++;

	for (d = 0; d < count; d++)
	{
		count--;
		rev = s[d];
		s[d] = s[count];
		s[count] = rev;
	}
}
