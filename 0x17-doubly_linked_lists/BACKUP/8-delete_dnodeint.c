#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes a new node at a given position.
 * @head: head node
 * @index: index where node should be inserted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	i = 0;
	while (i < index && ptr)
	{
		ptr = ptr->next;
		i++;
	}
	if (!ptr)
		return (-1);
	else if (ptr->prev)
		(ptr->prev)->next = ptr->next;
	else if (ptr->next)
		(ptr->next)->prev = ptr->prev;
	free(ptr);
	return (1);
}
