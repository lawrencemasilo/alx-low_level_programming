#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: a node
 * @index: the index
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			break;
		}
		head = head->next;
		count += 1;
	}
	return (head);
}
