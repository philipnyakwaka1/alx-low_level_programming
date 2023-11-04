#include "lists.h"
/**
 * reverse_listint - reverses a listint_t
 * @head: head node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *after;
	listint_t *before;

	before = NULL;
	while (after != NULL)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}
	*head = before;
	return (*head);
}




























