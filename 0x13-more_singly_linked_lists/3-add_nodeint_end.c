#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 *     of a listint_t list.
 * @head: The pointer to the address of the
 *    head of the lintint_t list
 * @n: The integer for the new code to contain
 * written by daniel 0luwanimotele
 * Return: NULL if the function fails else the adress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *late, *last;

	late = malloc(sizeof(listint_t));
	if (late == NULL)
		return (NULL);

	late->n = n;
	late->next = NULL;

	if (*head == NULL)
		*head = late;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = late;
	}
	return (*head);
}
