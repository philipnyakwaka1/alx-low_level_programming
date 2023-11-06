#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = next = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
