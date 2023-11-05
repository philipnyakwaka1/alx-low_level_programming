#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: head pointer to linked list
 * @idx: index where the new node is to be added, index starts at 0
 * @n: data value of new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int index_count;

	new = malloc(sizeof(listint_t));
	if (!new || !head || !*head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	index_count = 0;
	tmp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (tmp != NULL)
	{
		if (index_count == idx - 1 && idx != 0)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		index_count++;
	}
	free(new);
	return (NULL);
}
