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
 * get_dnodeint_at_index - returns a node from the index of a linked list
 * @head: the head of a list
 * @index: a index of the node
 *
 * Return: the nth node of the linked list, or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i;

	if (node == NULL)
		return (NULL);
	if (index >= lendll(head))
		return (NULL);
	for (i = 0; i < index; i++)
		node = node->next;
	return (node);
}
