#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: a linked list
 *
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h != NULL)
	{
		n++;
		if (h->next != NULL)
			n += list_len(h->next);
		return (n);
	}
	return (n);
}
