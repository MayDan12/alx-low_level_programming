#include "lists.h"
/**
 * sum_listint - This function calculates the sum of all the data in a
 * listint_t list
 * @head: The first node in the linked list
 *
 *
 * written by daniel oluwanimotele
 * Return: The resulting sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *tempes = head;

	while (tempes)
	{
		add += tempes->n;
		tempes = tempes->next;
	}
	return (add);
}
