#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: a list of elements with a pointer to the first element
 *
 * Return: The data of the deleted node
 */
int pop_listint(listint_t **head)
{
	int pop = 0;
	listint_t *ptr, *h_ptr;

	if (head == NULL || *head == NULL)
	{
		return (pop);
	}
	pop = (*head)->n;
	ptr = (*head)->next;
	h_ptr = (*head);
	h_ptr->next = NULL;
	free(h_ptr);
	h_ptr = NULL;
	*head = ptr;
	return (pop);
}
