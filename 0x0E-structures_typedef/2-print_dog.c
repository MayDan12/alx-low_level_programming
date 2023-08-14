#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - This prints a struct dog
 * @d: the struct dog to print
 * written by daniel oluwanimotele
 * Return: 0 always good
 * Description: love ur dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n Age: %f\n Owner: %s\n:", d->name, d->age, d->owner);
}
