#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: a list of elements with a pointer to the first element
 * @n: a element of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (head != NULL)
		new->next = *head;
	else
		new->next = NULL;
	*head = new;
	return (new);
}
