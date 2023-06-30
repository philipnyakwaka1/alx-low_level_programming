#include "lists.h"
/**
 * free_list - frees the entire list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
