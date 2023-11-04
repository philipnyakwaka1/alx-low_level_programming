#include "lists.h"
/**
 * print_list - prints all elements in a linked list
 * @h: pointer to the linked list
 * Return: number of nodes in a linked list
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t n;

	ptr = h;
	n = 0;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[%d] (%s)\n", 0, "nil");
		n++;
		ptr = ptr->next;
	}
	return (n);
}
