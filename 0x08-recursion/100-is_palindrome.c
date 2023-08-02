#include "main.h"

int check_pal(char *s, int i, int len);
int strlen_recursion(char *s);

/**
 * is_palindrome -  this checks if a strings is a palindrome
 * @s: string to reverse
 * written by daniel
 * Return: 1 if it is 0 or no
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a
 * @s: strings to calculate
 * written by daniel
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks tcter recursive
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * daniel
 * Return: 1 if palindrom, 0 if not always
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
