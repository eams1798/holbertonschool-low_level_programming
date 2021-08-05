#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: a linked list
 *
 * Return: the number of elements of h
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	if (h != NULL)
	{
		size++;
		if (h->next != NULL)
			size += listint_len(h->next);
	}
	return (size);
}
