#include "lists.h"
/**
 * count_index - counts index
 * @h: head node
 * Return: number of index
 */
unsigned int count_index(dlistint_t **h)
{
	dlistint_t *ptr;
	unsigned int count;

	ptr = *h;
	count = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head node
 * @idx: index where node should be inserted
 * @n: value to be added
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp;
	unsigned int index;

	index = 0;
	ptr = *h;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (idx == 0)
	{
		free(temp);
		ptr = add_dnodeint(h, n);
		return (ptr);
	}
	if (idx == count_index(h))
	{
		free(temp);
		ptr = add_dnodeint_end(h, n);
		return (ptr);
	}
	while (ptr != NULL)
	{
		if (index == idx - 1)
		{
			temp->prev = ptr;
			temp->next = ptr->next;
			if (ptr->next != NULL)
				(ptr->next)->prev = temp;
			ptr->next = temp;
			return (temp);
		}
		ptr = ptr->next;
		index++;
	}
	free(temp);
	return (NULL);
}
