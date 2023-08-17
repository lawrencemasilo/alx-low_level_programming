#include "lists.h"

/**
 * dlistint_len - counts the number of elements in the list
 * @h: the node, starting at the head
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
