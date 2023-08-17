#include "lists.h"
/**
 * sum_dlistint - returns sum of n in dlistint_t
 * @head: head node
 * Return: sum of all elements
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;
	dlistint_t *ptr;

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
