#include "lists.h"
/**
 * list_len - This is a function that retuirn
 * the number of element in a linked list
 * @h: the pointer to the list_t
 * Daniel oluwanimotele
 * Return: the numberof elements in h
 */
size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		y++;
		h = h->next;
	}
	return (y);
}

