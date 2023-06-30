#include "lists.h"

/**
 * list_len - returns the number elements of a list
 * @h: pointer to the first element of the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
