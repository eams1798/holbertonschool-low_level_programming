#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a list of elements with a pointer to the first element
 * @idx: the index of the node to be added
 * @n: the data of the node to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *node = *head, *new, *prev;

	for (i = 0; i <= idx; i++)
	{
		if (node == NULL)
			return (NULL);
		if (i != idx)
		{
			prev = node;
			node = node->next;
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = node;
	prev->next = new;
	prev = NULL;
	node = NULL;
	return (new);
}
