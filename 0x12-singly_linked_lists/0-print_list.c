#include "lists.h"
/**
 * print_list - This function is used to print out all list
 * @h:This is the pointer to point to the list_t
 * Written by daniel maayowa
 * Return: The number of nodes printed successs
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
