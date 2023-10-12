#include "lists.h"
/**
 * delete_dnodeint_at_index - This function also
 * deletes the node at index of a
 * dlistint_t linked list
 * Mayowa Daniel
 * @head: The only head of the list
 * @index: The good index of the new node
 * Return: 1 if succeeded, -1 if  failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int z;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	z = 0;

	while (h1 != NULL)
	{
		if (z == index)
		{
			if (z == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		z++;
	}

	return (-1);
}
