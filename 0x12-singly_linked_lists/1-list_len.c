#include "lists.h"

/**
 * list_len - the number of elements in list_t
 * @h: pointing to list_t
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			count++;
		}
		h = h->next;
	}
	return (count);
}
