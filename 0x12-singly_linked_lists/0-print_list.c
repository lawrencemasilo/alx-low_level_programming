#include "lists.h"

/**
 * print_list - prints all elements in list_t
 * @h: pointer to the head
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *list = h;

	if (list->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (list != NULL)
	{
		if (list->str != NULL)
		{
			printf("[%d] ", list->len);
			printf("%s", list->str);
			printf("\n");
		}
		count++;
		list = list->next;
	}
	return (count);
}
