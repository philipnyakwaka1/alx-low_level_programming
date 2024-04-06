#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: head node
 * Return: head's node data(n)
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = ptr->next;
	x = ptr->n;
	free(ptr);
	ptr = NULL;
	return (x);
}
