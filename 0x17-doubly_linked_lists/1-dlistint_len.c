#include "lists.h"

/**
 * dlistint_len - this function returns the number of element in a DL list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int conts;

	conts = 0;

	if (h == NULL)
		return (conts);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		conts++;
		h = h->next;
	}

	return (conts);
}
