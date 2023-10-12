#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns the nth node
 * of a dlistint_t linked list.
 * @head: THE pointer to head of the list
 * @index: THE index of the node to search for, starting from 0
 * Return: tHE nth node or null IF failed
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sizes;
	dlistint_t *tmps;

	sizes = 0;
	if (head == NULL)
	return (NULL);

	tmps = head;
	while (tmps)
	{
	if (index == sizes)
	return (tmps);
	sizes++;
	tmps = tmps->next;
	}
	return (NULL);
}
