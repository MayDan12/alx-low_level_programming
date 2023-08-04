#include "main.h"
#include<stdio.h>
/**
 * _puts - i love you
 * @str: input
 * written by daniel
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
