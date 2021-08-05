#include "lists.h"

/**
 * sum_listint - sums all the data of a linked list
 * @head: the head of a linked list
 *
 * Return: The sum of all the data of the given list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
