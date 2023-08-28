#include "lists.h"
/**
 * free_listint - This function frees a listint_t list
 * @head: The pointer to the head of the listint_t list to be freed
 * written bby daniel 0luwanimotele
 * Return: The freed list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
