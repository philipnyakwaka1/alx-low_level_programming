#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at
 * a given position in a doubly linked list
 * @h: double pointer to a doubly linked list
 * @idx: index where the new node is to be inserted
 * @n: data(n) of new node
 * Return: pointer to newly inserted node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int count;

	tmp = *h;
	count = 0;
	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!*h)
	{
		*h = new;
		return (new);
	}
	while (tmp)
	{
		if (idx == count)
		{
			new->next = tmp->prev->next;
			tmp->prev->next = new;
			new->prev = tmp->prev;
			tmp->prev = new;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
