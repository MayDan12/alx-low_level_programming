#include "lists.h"
/**
 * add_node_end - This function adds a new node to the end of list_t list
 * @head: the pointer that points to the list_t list
 * @str: string to be put in the new node
 * Daniel oluwanimotele
 * Return: address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *late;
	list_t *subs = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	late = malloc(sizeof(list_t));
	if (!late)
		return (NULL);

	late->str = strdup(str);
	late->len = len;
	late->next = NULL;

	if (*head == NULL)
	{
		*head = late;
		return (late);
	}

	while (subs->next)
		subs = subs->next;

	subs->next = late;

	return (late);
}

