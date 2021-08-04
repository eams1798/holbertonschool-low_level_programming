#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	n++;
	if (h->next != NULL)
		n += print_list(h->next);
	return (n);
}
