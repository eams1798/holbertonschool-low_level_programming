#include "lists.h"

/**
 * dlistint_len - counts the elements of a doubly linked list
 * @h: the head of a list
 *
 * Return: the number of elements of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *p = h;

	for (; p != NULL; i++)
		p = p->next;
	return (i);
}
