#include "lists.h"

/**
 * sum_dlistint - adds all the data of a doubly linked list
 * @head: the head of a list
 *
 * Return: the sum of all the data of the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	for (ptr = head; ptr != NULL; ptr = ptr->next)
		sum += ptr->n;
	return (sum);
}
