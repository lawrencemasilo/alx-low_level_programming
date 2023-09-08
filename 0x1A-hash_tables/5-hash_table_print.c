#include "hash_tables.h"

/**
 * hash_table_print - prints pairs in hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *current_node;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current_node = ht->array[i];
			if (current_node != NULL)
			{
				if (j)
					printf(", ");
				if (ht->array[i])
				{
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					j = 1;
				}
				current_node = current_node->next;
			}
		}
		printf("}");
		printf("\n");
	}
}
