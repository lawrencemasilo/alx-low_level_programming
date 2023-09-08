#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash, index;
	hash_node_t *pair;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;
	pair = ht->array[index];
	while (pair != NULL)
	{
		if (strcmp(pair->key, key) == 0)
			return (pair->value);
		pair = pair->next;
	}
	return (NULL);
}
