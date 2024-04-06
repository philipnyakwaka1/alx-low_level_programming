#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to head node of the linked list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t n;

	tmp = h;
	n = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		n++;
	}
	return (n);
}
