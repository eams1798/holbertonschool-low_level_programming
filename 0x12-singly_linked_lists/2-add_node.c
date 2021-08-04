#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: a list of elements with a pointer to the first element
 * @str: a string to create the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	size_t size = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	while (new_node->str[size] != '\0')
		size++;
	new_node->len = size;
	if (head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
