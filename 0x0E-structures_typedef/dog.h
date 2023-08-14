#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - This contain the basic details of a puppy/dog
 * written by daniel oluanimotele
 * @name: first member of the struct
 * @age: second member of the struct
 * @owner: third member of the struct
 * Description: This struct tells us the name, age , owner of a dog or puppy
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
