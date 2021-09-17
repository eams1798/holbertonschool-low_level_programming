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
 * delete_dnodeint_at_index - deletes the node at a given index of a
 * doubly linked list
 * @head:the head of a list
 * @index: is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int len = lendll(ptr);

	if (index >= len)
		return (-1);
	if (len == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	while (index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr->prev == NULL)
	{
		*head = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = NULL;
	}
	else
	{
		ptr->prev->next = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = ptr->prev;
	}
	free(ptr);
	return (1);
}
