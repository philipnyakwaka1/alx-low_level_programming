#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: head node
 * Return: the number of elements in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t n;

	n = 0;
	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		n++;
	}
	return (n);
}
