#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: NULL
 * @n: data of node
 * Return: address of node, NULL (failed)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *current = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node;
	return (node);
}
