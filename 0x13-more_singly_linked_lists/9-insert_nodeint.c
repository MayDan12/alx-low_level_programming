#include "lists.h"

/**
 * insert_nodeint_at_index - This function insert a new node in alinked
 * list ata given postion
 * @head: the pointer to the first node
 * @idx: the index where the new node is added
 * written by daniel oluwanimotele
 * @n: the datat to insert in the new node
 *
 * Return: the pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *late;
	listint_t *temps = *head;

	late = malloc(sizeof(listint_t));
	if (!late || !head)
		return (NULL);

	late->n = n;
	late->next = NULL;

	if (idx == 0)
	{
		late->next = *head;
		*head = late;
		return (late);
	}

	for (a = 0; temps && a < idx; a++)
	{
		if (a == idx - 1)
		{
			late->next = temps->next;
			temps->next = late;
			return (late);
		}
		else
			temps = temps->next;
	}
	return (NULL);
}
