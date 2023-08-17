#include "lists.h"

/**
 * sum_listint - sum all the data in listint_t
 * @head: points to head of listint_t
 * Return: the sum or  0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
