#include "lists.h"

/**
 * free_list - frees memory allocated for list_t
 * @head: pointing to list_t
 * Return: nothing
 */

void free_list(list_t *head)
{
	free(head);
}
