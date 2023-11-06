#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end of a doubly linked list
 * @head: double pointer to head node
 * @n: data value of new node
 * Return: pointer to new node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
