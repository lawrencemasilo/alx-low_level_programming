#include "lists.h"

/**
 * add_node_end - adds node to the end of list_t
 * @head: pointer to list_t
 * @str: string to be copied
 * Return: address of new node or NULL if memory allocation fails
 */

list_t *add_node_end(list_t **head, const char *str)
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
	node->len = len;
	node->next = NULL;
	*head = node;
	return (node);
}
