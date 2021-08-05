#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: a list of elements with a pointer to the first element
 * @n: a element of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr = *head;

	while (ptr != NULL && ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (ptr != NULL)
		ptr->next = new;
	else
		*head = new;
	ptr = NULL;
	return (new);
}
