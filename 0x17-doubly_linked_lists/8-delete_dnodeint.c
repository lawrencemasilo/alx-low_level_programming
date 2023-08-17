#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: node
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp2 = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			temp2->prev = NULL;
		}
		free(temp);
		return (1);
	}
	else if (index > 0)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		for (count = 0; temp != NULL && count < index; count++)
		{
			temp = temp->next;
		}
		if ((temp->prev != NULL) && (temp->next != NULL))
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
		}
	}
	free(temp);
	return (1);
}
