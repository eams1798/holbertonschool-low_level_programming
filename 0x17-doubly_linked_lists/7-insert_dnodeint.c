#include "lists.h"

/**
 * lendll - counts the elements of a doubly linked list
 * @h: the head of a list
 *
 * Return: the number of elements of the list
 */
size_t lendll(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *p = h;

	for (; p != NULL; i++)
		p = p->next;
	return (i);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position of a
 * doubly linked list
 * @h: the head of a list
 * @idx: the index of the list where the new node should be added
 * @n: the piece of data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new;

	if (idx > lendll(*h))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	ptr = *h;
	new->n = n;
	if (ptr == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	while (idx > 0)
	{
		ptr = ptr->next;
		idx--;
	}
	new->prev = ptr->prev;
	new->next = ptr;
	ptr->prev->next = new;
	ptr->prev = new;
	return (new);
}
