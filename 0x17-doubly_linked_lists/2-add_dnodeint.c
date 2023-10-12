#include "lists.h"

/**
 * add_dnodeint - This function adds a node at the beginning of a list
 * @head: the head of the list
 * @n: tyhe value of the element
 * Return: the addres  of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *news;
	dlistint_t *h;

	news = malloc(sizeof(dlistint_t));
	if (news == NULL)
		return (NULL);

	news->n = n;
	news->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	news->next = h;

	if (h != NULL)
		h->prev = news;

	*head = news;

	return (news);
}
