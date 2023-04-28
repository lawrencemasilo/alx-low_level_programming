#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list_t
 * @head: pointer to list_t
 * @str: string to be copied
 * Return: address of new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->next = *head;
	node->len = len;
	*head = node;
	return (*head);
}
