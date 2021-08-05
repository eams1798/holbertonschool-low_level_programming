#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given index of a linked
 * list
 * @head: a list of elements with a pointer to the first element
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *node = *head, *prev;

	if (head == NULL || *head == NULL)
	{
		return (1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		node->next = NULL;
		free(node);
		return (1);
	}
	else
	{
		for (i = 0; i <= index; i++)
		{
			if (node == NULL)
				return (-1);
			if (i != index)
			{
				prev = node;
				node = node->next;
			}
		}
		prev->next = node->next;
		node->next = NULL;
		free(node);
		return (1);
	}
}
