#include "lists.h"
/**
 * free_listint2 - frees linked list and sets head pointer to NUll
 * @head: double pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		tmp = *head;
		while (*head != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
	}
}
