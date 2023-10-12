#include "lists.h"
/**
 * print_dlistint - this function prints the element of a list
 * @h: head of the list to print
 * Return: the total number of the nodes
 * mayoa daniel
 */
size_t print_dlistint(const dlistint_t *h)
{
	int conts;

	conts = 0;
	if (h == NULL)
		return (conts);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		conts++;
		h = h->next;
	}

	return (conts);
}
