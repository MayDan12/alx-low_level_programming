#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - this frees the memory allocated for a struct dog
 * @d: the struct dog to free
 * daniel oluwanimotele
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
