#include "lists.h"
/**
 * pop_listint - This function delete the head node of listint_t
 *   linked list and returns the head node n
 * @head: the pointer to the list_t list
 * written by daniel oluwanimotele
 * Return: 0 if every thing fails
 */
int pop_listint(listint_t **head)
{
	listint_t *temps;
	int no;

	if (!head || !*head)
		return (0);

	no = (*head)->n;
	temps = (*head)->next;
	free(*head);
	*head = temps;

	return (no);
}
