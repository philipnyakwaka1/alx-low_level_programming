#include "lists.h"
/**
 * get_nodeint_at_index - returns the head node of a linked list
 * @head: pointer to head node
 * @index: index whose value is to be returned
 * Return: nth index or NULL if index is not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *tmp;

	n = 0;
	tmp = head;
	while (tmp != NULL)
	{
		if (n == index)
			return (tmp);
		tmp = tmp->next;
		n++;
	}
	return (NULL);
}
