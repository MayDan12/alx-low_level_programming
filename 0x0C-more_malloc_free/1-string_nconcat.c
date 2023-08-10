#include "main.h"
/**
 * string_nconcat - This function concatenate two strings
 * @s1: the string to be concat
 * @s2: the input
 * @n: the num of concat s2
 * written by daniel oluwanimotele
 * Return: the concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, dan1 = 0, dan2 = 0;

	while (s1 && s1[dan1])
		dan1++;
	while (s2 && s2[dan2])
		dan2++;

	if (n < dan2)
		s = malloc(sizeof(char) * (dan1 + n + 1));
	else
		s = malloc(sizeof(char) * (dan1 + dan2 + 1));

	if (!s)
		return (NULL);

	while (i < dan1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < dan2 && i < (dan1 + n))
		s[i++] = s2[j++];

	while (n >= dan2 && i < (dan1 + dan2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
