#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to head node
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head)
		return (0);
	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
