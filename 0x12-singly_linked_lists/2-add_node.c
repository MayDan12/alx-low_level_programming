#include "lists.h"
/**
 * add_node - This function adds a new node at the
 * beggining of the list_t
 * @head: The double pointer to the list_t list
 * @str: The new str to be add to/in the node
 * Daniel mayowa
 * Return: the address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *late;
	unsigned int len = 0;

	while (str[len])
		len++;

	late = malloc(sizeof(list_t));
	if (!late)
		return (NULL);

	late->str = strdup(str);
	late->len = len;
	late->next = (*head);
	(*head) = late;

	return (*head);
}
