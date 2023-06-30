#include "lists.h"
/**
 * _strlen - finds string length
 * @s: input string
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int x;

	x = 0;
	while (s[x] != 0)
	{
		x++;
	}
	return (x);
}
/**
 * add_node_end - adds a new node at the end of the list
 * @head: head node of the list
 * @str: string to be duplicated
 * Return: address of new element or null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = NULL;

	if (ptr == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
