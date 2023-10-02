#include "hash_tables.h"

/**
 * create_node - creates node
 * @key: node key
 * @value: node value
 * Return: pointer to newly created node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
/**
 * hash_table_set - adds element to hash table
 * @ht: pointer to hash table
 * @key: table key
 * @value: table value
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = create_node(key, value);
		if (ht->array[index] == NULL)
			return (0);
	}
	else
	{
		current = ht->array[index];
		while (current->next != NULL)
		{
			if (strcmp(key, current->key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				if (current->value == NULL)
					return (0);
				return (1);
			}
			current = current->next;
		}
		current->next = create_node(key, value);
		if (create_node(key, value) == NULL)
			return (0);
	}
	return (1);
}
