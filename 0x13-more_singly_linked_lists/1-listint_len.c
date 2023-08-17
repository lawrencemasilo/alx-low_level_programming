#include "lists.h"

/**
 * listint_len - return the number of elements
 * @h: points to listint_t
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t ele = 0;

	while (h != NULL)
	{
		ele++;
		h = h->next;
	}
	return (ele);
}
