#include "lists.h"
/**
 * sum_listint - sums all data in a linked list
 * @head: pointer to head node
 * Return: sum of all data in a linked list, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
