#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: a linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		if (h->next != NULL)
			size += print_listint(h->next);
	}
	return (size);
}
