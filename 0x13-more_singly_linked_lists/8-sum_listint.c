#include "lists.h"
/**
 * sum_listint - returns the sum of all data(n) in listint_t
 * @head: head node
 * Return: sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	sum = 0;
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
