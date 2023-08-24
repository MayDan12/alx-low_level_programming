#include "lists.h"
/**
 * free_list - Tis function frees a list with free keyword
 * @head: The list_t list to be freed from bondage
 * written by daniel oluwanimotele
 * Return: Feed list
 */
void free_list(list_t *head)
{
	list_t *low;

	while (head)
	{
		low = head->next;
		free(head->str);
		free(head);
		head = low;
	}
}
