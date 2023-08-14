#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - - this initializes a variable of type struct
 * dog and gives the correct ans
 * @d: pointer to initialize struct dog
 * @name: initialize the name
 * @age: initialize the age
 * @owner: initialize the owner
 * written by daniekl oluwanimotele
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
