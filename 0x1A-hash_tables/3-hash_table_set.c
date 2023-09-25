#include "hash_tables.h"

/**
 * add_node - adds a new node to a hash table
 * @ptr: pointer in hash table index
 * @new: node to be added
 * @key: key of new node
 * Return: 1 on success, else 0
 */
int add_node(hash_node_t **ptr, hash_node_t *new, const char *key)
{
	hash_node_t *current;

	current = *ptr;
	if (*ptr == NULL)
		*ptr = new;
	while (current != NULL)
	{
		if (strcmp((current)->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(new->value);
			free(new->key);
			free(new->value);
			free(new);
			return (1);
		}
		current = current->next;
	}
	new->next = *ptr;
	*ptr = new;
	return (1);
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
	unsigned long int index;
	hash_node_t *new_node;
	char *key_copy;

	key_copy = strdup(key);
	if (key_copy == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	index = key_index((const unsigned char *)key_copy, ht->size);
	add_node(&(ht->array[index]), new_node, key);
	return (1);
}
