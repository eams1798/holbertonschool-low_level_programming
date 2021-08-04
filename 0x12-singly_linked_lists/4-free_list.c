#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: a list of elements with a pointer to the first element
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	head->str = NULL;
	free(head);
}
