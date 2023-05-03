#include "lists.h"

/**
 * free_listint2 - frees memory of listint_t list
 * @head: pointing to listint_t head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p = *head;
	while (*head != NULL)
	{
		p = p->next;
		free(p);
	}
	*head = NULL;
}
