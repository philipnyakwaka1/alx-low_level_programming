#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: double pointer to head node
 * @index: index to be deleted
 * Return: 1 on success, and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *ptr;
	unsigned int index_count;

	if (!head || !*head)
		return (-1);
	tmp = *head;
	index_count = 0;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (index_count == index - 1)
		{
			ptr = tmp->next;
			tmp->next = tmp->next->next;
			free(ptr);
			return (1);
		}
		tmp = tmp->next;
		index_count++;
	}
	return (-1);
}
