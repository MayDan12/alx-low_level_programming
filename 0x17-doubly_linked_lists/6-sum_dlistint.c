#include "lists.h"

/**
 * sum_dlistint - This function returns the sum of all the data (n)
 * of a doubly linked list.
 *
 * @head: The head of the dlist
 * Return: The sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sums;

	sums = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sums += head->n;
			head = head->next;
		}
	}

	return (sums);
}
