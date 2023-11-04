#include "lists.h"

/**
 * _strlen - returns the length of input string
 * @str: input string
 * Return: length of input string
 */
size_t _strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - adds node at the beginning of the linked list
 * @head: double pointer to head node
 * @str: str value of new node
 * Return: pointer to new node or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
