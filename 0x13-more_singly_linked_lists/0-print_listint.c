#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: points to listint_t
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
