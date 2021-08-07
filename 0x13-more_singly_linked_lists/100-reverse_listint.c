#include "lists.h"

/**
 * reverse - an auxiliar function to revert the linked list
 * @head: a list of elements with a pointer to the first element
 * @prev: a pointer to a node of the linked list
 * @node: a pointer to another node of the linked list
 *
 * Return: Nothing
 */
void reverse(listint_t **head, listint_t *prev, listint_t *node)
{
	if (node->next != NULL)
	{
		prev = node;
		node = node->next;
		*head = (*head)->next;
		reverse(head, prev, node);
		node->next = prev;
	}
}

/**
 * reverse_listint - reverses a linked list
 * @head: a list of elements with a pointer to the first element
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	node = *head;
	prev = node;
	reverse(head, prev, node);
	node->next = NULL;
	return (*head);
}
