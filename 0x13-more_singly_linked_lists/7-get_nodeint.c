#include "lists.h"

/**
 * get_nodeint_at_index - returns a indexed node of a listint_t linked list
 * @head: the head of a linked list
 * @index: the index of the given node
 *
 * Return: 'n'th node of a listint_t linked list or NULL if the node doesn't
 * exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *node = head;

	for (i = 0; i <= index; i++)
	{
		if (node == NULL)
			return (NULL);
		if (i != index)
			node = node->next;
	}
	return (node);
}
