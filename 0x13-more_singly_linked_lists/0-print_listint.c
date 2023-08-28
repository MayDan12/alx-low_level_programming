#include "lists.h"
/**
 * print_listint - This function prints all the elements of a listint list
 * @h: This is a pointer to the head of the list_t list
 * written by daniel 0luwanimotele
 * Return: The number of node in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
