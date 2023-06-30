#include "lists.h"

/**
 * print_list - prins all elements of a list
 * @h: pointer to the first element of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
