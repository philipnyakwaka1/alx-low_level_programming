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
	hash_node_t *new, *ptr;

	if (ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr == NULL)
		ptr = new;
	else if (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
		}
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr = new;
	}
	return (1);
}
