#include "lists.h"
/**
 * free_list - frees linked list
 * @head: pointer to linked list;
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
