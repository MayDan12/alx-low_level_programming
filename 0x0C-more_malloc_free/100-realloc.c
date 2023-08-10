#include "main.h"
/**
 * _realloc - This is a function that reallocate a memory with malloc and free
 * @ptr: the pointer
 * @old_size: the size in byte
 * @new_size: the sinew size in byte of the memoryblock
 * written by daniel oluwanimotele
 * Return:0 always seccuss
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dan1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	dan1 = malloc(new_size);
	if (!dan1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			dan1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			dan1[i] = old_ptr[i];
	}

	free(ptr);
	return (dan1);
}
