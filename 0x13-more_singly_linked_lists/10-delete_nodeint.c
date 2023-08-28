#include "lists.h"
/**
 * delete_nodeint_at_index - This function deletes a node in a linked
 * list at a certain index
 * @head: The pointer to the first element in the list
 * @index: The index of the node to delete
 *
 * Return: 1 (success excellent) -1 (not successful fail)
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temps = *head;
	listint_t *pre = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temps);
		return (1);
	}

	while (a < index - 1)
	{
		if (!temps || !(temps->next))
			return (-1);
		temps = temps->next;
		a++;
	}

	pre = temps->next;
	temps->next = pre->next;
	free(pre);

	return (1);
}
