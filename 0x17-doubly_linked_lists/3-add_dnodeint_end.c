#include "lists.h"

/**
 * add_dnodeint_end - This function adds a new node to the end of a DL list
 * @n: the value of the dl list
 * @head: the head of the dl list
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *news;

	news = malloc(sizeof(dlistint_t));
	if (news == NULL)
		return (NULL);

	news->n = n;

	news->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = news;
	}
	else
	{
		*head = news;
	}

	news->prev = h;

	return (news);
}
