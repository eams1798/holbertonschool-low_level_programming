#include "lists.h"

/**
 * elements - returns the number of nodes in the list
 * @h: a linked list
 *
 * Return: the number of nodes in the list
 */
int elements(const listint_t *h)
{
	const listint_t *ptr;
	unsigned long int *arrUL;
	int i = 1, dif = 0, j;

	ptr = h;
	while (1)
	{
		arrUL = malloc(i * sizeof(unsigned long int));
		for (j = 0; j < i; j++)
		{
			arrUL[j] = (unsigned long int)ptr;
			ptr = ptr->next;
		}

		for (j = 0; j < i - 1; j++)
		{
			if (arrUL[j] == arrUL[i - 1])
			{
				dif = 1;
				break;
			}
		}
		free(arrUL);
		if (dif == 1 || ptr == NULL)
			break;
		i++;
		ptr = h;
	}
	i--;
	ptr = NULL;
	arrUL = NULL;
	return (i);
}

/**
 * print_listint_safe - prints a linked list without repeat nodes
 * @h: a linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t size;
	const listint_t *ptr = h;
	unsigned long int i;

	if (h == NULL)
		exit(98);
	size = elements(h);
	for (i = 0; i <= size; i++, ptr = ptr->next)
	{
		if (i == size && ptr->next != NULL)
			printf("-> ");
		printf("[%p] %d\n", (void *)ptr, ptr->n);
	}
	return (size);
}
