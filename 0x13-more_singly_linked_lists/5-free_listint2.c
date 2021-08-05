#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: a list of elements with a pointer to the first element
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (ptr == NULL)
		return;
	if (ptr->next != NULL)
		free_listint2(&ptr->next);
	free(ptr);
	ptr = NULL;
	*head = NULL;
	head = NULL;
}
