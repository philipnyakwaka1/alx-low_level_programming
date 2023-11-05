#include "lists.h"
/**
 * add_dnodeint - adds a newnode at the beginning of a doubly linked list
 * @head: address of pointer to head node
 * @n: data value of new node
 * Return: pointer to newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
