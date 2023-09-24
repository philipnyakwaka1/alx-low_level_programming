#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: pointer to hash table
 * @key: table key
 * @value: table value
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
		{
			return (0);
		}
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
	}
	else if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
		}
		while (ht->array[index]->next != NULL)
			ht->array[index] = ht->array[index]->next;
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
		{
			return (0);
		}
		ht->array[index]
			->key = strdup(key);
		ht->array[index]->value = strdup(value);
	}
	return (1);
}
