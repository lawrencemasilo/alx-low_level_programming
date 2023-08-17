#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the node
 * @n: the data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		node->prev = NULL;
		node->n = n;
		node->next = NULL;
		*head = node;
	}
	else if (*head != NULL)
	{
		node->n = n;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
		node->prev = temp;
	}
	return (node);
}
