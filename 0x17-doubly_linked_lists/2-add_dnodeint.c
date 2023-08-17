#include "lists.h"

/**
 * add_dnodeint - add a node to at the beginning of a list
 * @head: the node
 * @n: the data to be stored in the node
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		node->n = n;
		node->next = NULL;
		node->prev = NULL;
	}
	else if (*head != NULL)
	{
		node->n = n;
		temp->prev = node;
		node->next = *head;
	}
	*head = node;
	return (node);
}
