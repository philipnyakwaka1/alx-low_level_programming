#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *tmp;

	ptr = head;
	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
}
