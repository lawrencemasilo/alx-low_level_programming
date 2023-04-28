#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list_t
 * @head: pointer to list_t
 * @str: string to be copied
 * Return: address of new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node->next;
	return (*head);
}
