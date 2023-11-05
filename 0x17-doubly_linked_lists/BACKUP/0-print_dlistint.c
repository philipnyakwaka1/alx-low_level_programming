#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
