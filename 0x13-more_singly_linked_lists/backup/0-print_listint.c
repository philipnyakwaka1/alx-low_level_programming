#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: ponter head node of linked list
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t n;

	n = 0;
	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n++;
	}
	return (n);
}
