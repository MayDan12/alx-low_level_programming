#include "lists.h"
/**
 * free_listint2 - This function frees a listint_t list
 * @head: The pointer to the address of listint_t list
 * written by 0luwanimotele daniel
 * Description: Sets the head to null.
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
