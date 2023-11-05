#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *tmp;

	tmp = h;
	n = 0;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n++;
	}
	return (n);
}
