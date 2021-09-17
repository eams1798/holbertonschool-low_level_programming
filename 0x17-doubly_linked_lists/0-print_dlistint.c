#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: the head of a list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *ptr = h;

	for (i = 0; ptr != NULL; i++, ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
	}
	return (i);
}
