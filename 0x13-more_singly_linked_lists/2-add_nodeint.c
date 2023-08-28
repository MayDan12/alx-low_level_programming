#include "lists.h"
/**
 * add_nodeint - This function adds a new node ata the
 * beginnining od node_t list
 * @head: This is a pointer to the address of the head
 * of the list_t list
 * @n: The integer for the new node to contain
 * written by daniel 0oluwanimotele
 * Return: NULL if the function fails - otherwise
 * the addressof the element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *late;

	late = malloc(sizeof(listint_t));
	if (late == NULL)
		return (NULL);

	late->n = n;
	late->next = *head;

	*head = late;

	return (late);
}
