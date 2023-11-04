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
 * add_node_end - adds node at the end of a linked list
 * @head: double pointer to head node
 * @str: str value of new node
 * Return: pointer to newy added node or NULL if function fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new;

	tmp = *head;
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
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
