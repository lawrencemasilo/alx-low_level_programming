#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to head of listint_t
 * @index: index of the node
 * Return: the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *a = head;

	while (a != NULL)
	{
		while (i < index)
		{
			a = a->next;
			i++;
		}
	}
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
