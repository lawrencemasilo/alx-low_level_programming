#include "lists.h"

/**
 * add_nodeint - add new node
 * @head: NULL
 * @n: data of node
 * Return: the address of node, NULL (failed)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
	{
		return (NULL);
	}
	a->n = n;
	a->next = *head;
	*head = a;
	return (*head);
}
