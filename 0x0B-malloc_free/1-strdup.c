#include "main.h"
#include <stdlib.h>
/**
 * _strdup - this duplicate to new memory space location
 * @str: this is a char
 * written by daniel oluwanimotele
 * Return: 0 always excellent
 */
char *_strdup(char *str)
{
	char *aaa;

	int d, m = 0;

	if (str == NULL)
		return (NULL);

	d = 0;
	while (str[d] != '\0')
		d++;

	aaa = malloc(sizeof(char) * (d + 1));

	if (aaa == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		aaa[m] = str[m];
	return (aaa);
}
