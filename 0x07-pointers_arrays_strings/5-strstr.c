#include "main.h"
/**
 * _strstr - This function is used to  locate a substring
 * written by daniel oluwanimotele
 * @haystack: input
 * @needle: input
 * Return: 0 excellent
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *d = needle;

		while (*l == *d && *d != '\0')
		{
			l++;
			d++;
		}

		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
