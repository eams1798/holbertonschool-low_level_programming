#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list.
 * @head: a list of elements with a pointer to the first element
 * @str: a string to create the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr = *head;
	size_t size = 0;

	while (ptr != NULL && ptr->next != NULL)
		   ptr = ptr->next;
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node->str);
		return (NULL);
	}
	while (new_node->str[size] != '\0')
		size++;
	new_node->len = size;
	if (ptr != NULL)
		ptr->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
