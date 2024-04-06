#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
