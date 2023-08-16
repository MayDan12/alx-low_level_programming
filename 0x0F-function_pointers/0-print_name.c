#include "function_pointers.h"
/**
 * print_name - This function prints a name
 * written by daniel oluwanimotele
 * @name: the name to return
 * @f: the pointer that points to a function
 * Return: 0 nothing always
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
