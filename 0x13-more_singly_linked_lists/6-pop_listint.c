#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: points to start of listint_t
 * Return: head node's data, 0 if *head is NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int n = 0;

	if (*head == NULL)
	{
		return (0);
	}
	if (head == NULL)
	{
		return (0);
	}
	a = *head;
	*head = (*head)->next;
	n = a->n;
	free(a);
	return (n);
}
