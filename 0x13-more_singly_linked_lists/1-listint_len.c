#include "lists.h"
/**
 * listint_len - This funstion returns the number of
 * elements in a listint_t list
 * @h: This is a pointer to the head of the listint_t list
 * written by daniel 0luwanimotele
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
