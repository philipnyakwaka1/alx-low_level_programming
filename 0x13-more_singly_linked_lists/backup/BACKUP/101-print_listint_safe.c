#include "lists.h"
/**
 * print_listint_safe - prints listint_t
 * @head: head node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n;
	const listint_t *ptr;

	n = 0;
	if (head == NULL)
		exit(98);
	ptr = head;
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
