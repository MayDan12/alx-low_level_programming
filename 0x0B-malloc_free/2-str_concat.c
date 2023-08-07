#include "main.h"
/**
 * str_concat - this gets ends of input and add together size
 * @s1: the input 1
 * @s2: the input 2 to concat
 * written by daniel oluwanimotele
 * Return: concat of the s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int d, dm;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	d = dm = 0;
	while (s1[d] != '\0')
		d++;
	while (s2[dm] != '\0')
		dm++;

	concat = malloc(sizeof(char) * (d + dm + 1));

	if (concat == NULL)
		return (NULL);
	d = dm = 0;
	while (s1[d] != '\0')
	{
		concat[d] = s1[d];
		d++;
	}

	while (s2[dm] != '\0')
	{
		concat[d] = s2[dm];
		d++, dm++;
	}

	concat[d] = '\0';
	return (concat);
}
