#include "lists.h"

/**
 * free_dlistint - This function frees thr dlistint list
 * @head: the pointyer to the head of the list
 * Return: nothing to be returned
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
