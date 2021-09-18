#include "lists.h"

size_t _print_dlistint_backward(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *ptr = h;

	while (ptr->next != NULL)
		ptr = ptr->next;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->prev;
		i++;
	}
	return (i);
}
