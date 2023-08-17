#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: NULL
 * @n: data of node
 * Return: address of node, NULL (failed)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (node);
}
