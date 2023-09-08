#include "hash_tables.h"

/**
 * add_node - adds a node
 * @key: the key
 * @value: the value to be stored
 * Return: pointer to new node
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *node;

	if (key != NULL || *key != '\0')
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (NULL);
		node->key = strdup(key);
		if (node->key == NULL)
		{
			free(new_node);
			return (NULL);
		}
		node->value = strdup(value);
		if (node->value == NULL)
		{
			free(new_node->key);
			free(new_node);
			return (NULL);
		}
		node->next = NULL;
		return (node);
	}
	else
		return (NULL);
}

/**
 * hash_table_set - inserts element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value to be stored
 * Return: 1 on Success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *node;
	unsigned long int index, hash, is_same;

	if (key == NULL || ht == NULL || *key == '\0')
		return (0);

	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;
	current = ht->array[index];
	if (current == NULL)
	{
		node = add_node(key, value);
		if (node == NULL)
			return (0);
	}
	else
	{
		for (; current != NULL; )
		{
			is_same = strcmp(current->key, key);
			if (is_same == 0)
			{
				free(current->value);
				current->value = strdup(value);
				if (current->value != NULL)
					return (1);
				else
					return (0);
			}
		}
		current = current->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
