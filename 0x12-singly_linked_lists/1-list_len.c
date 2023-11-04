#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the linked list
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t n;

	n = 0;
	ptr = h;
	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
