#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: head node
 * @index: index to nth element
 * Return: a pointer to the nth element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	i = 0;
	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
