#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				current = current->next;
				free(current->value);
				free(current->key);
				free(current);
			}
		}
		free(ht->array);
		free(ht);
	}
}
