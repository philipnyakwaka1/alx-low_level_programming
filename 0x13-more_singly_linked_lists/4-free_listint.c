#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head: head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
