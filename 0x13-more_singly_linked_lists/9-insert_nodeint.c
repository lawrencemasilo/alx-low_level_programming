#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the head of listint_t
 * @idx: index
 * @n: data to be stored
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node = NULL, *nd;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		nd = add_nodeint_end(head, n);
		return (nd);
	}
	while (*head != NULL && i < idx - 1)
	{
		*head = (*head)->next;
		i++;
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = (*head)->next;
	(*head)->next = node;
	return (node);
}
