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
	hash_node_t *new_node, *current;
	char *key_copy;

	key_copy = strdup(key);
	if (key_copy == NULL || ht == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key_copy;
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	index = key_index((const unsigned char *)key_copy, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp((current)->key, key_copy) == 0)
		{
			free(current->value);
			current->value = key_copy;
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		current = current->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
