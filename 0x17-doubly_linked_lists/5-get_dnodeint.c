#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to head node
 * @index: index whose node is to be returned
 * Return: pointer to node at index, or NULL if index doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int n;

	n = 0;
	tmp = head;
	while (tmp)
	{
		if (index == n)
			return (tmp);
		tmp = tmp->next;
		n++;
	}
	return (NULL);
}
