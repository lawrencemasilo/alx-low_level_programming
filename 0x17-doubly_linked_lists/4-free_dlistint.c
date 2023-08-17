#include "lists.h"

/**
 * free_dlistint - frees all elements in a list
 * @head: the node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next_node;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
}
