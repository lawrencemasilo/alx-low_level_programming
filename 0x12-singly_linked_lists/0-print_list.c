#include "lists.h"

/**
 * print_list - prints all elements in list_t
 * @h: pointer to the head
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
			printf("\n");
		}
		else if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
