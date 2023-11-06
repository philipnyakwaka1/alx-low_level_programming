#include "lists.h"
/**
 * sum_dlistint - returns sum of all data(n) in a doubly linked list
 * @head: pointer to head node
 * Return: sum of data(n) or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	if (!head)
		return (0);
	sum = 0;
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
