#include "lists.h"
/**
 * get_nodeint_at_index - This function returns the node at a certain
 * index in a linked list
 * @head: first node in the libnked list
 * @index: index of teh node to be returned
 * written by daniel oluwanimotele
 *
 *
 * Return: The pointer to the node we are looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temps = head;

	while (temps && a < index)
	{
		temps = temps->next;
		a++;
	}
	return (temps ? temps : NULL);
}
