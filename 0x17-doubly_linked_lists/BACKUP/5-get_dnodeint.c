#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of dlistint_t
 * @head: head node
 * @index: index needed
 * Return: pointer to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *ptr;

	ptr = head;
	count = 0;
	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
