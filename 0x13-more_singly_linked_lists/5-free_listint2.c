#include "lists.h"
/**
 * free_listint2 - frees listint2
 * @head: pointer to the listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL && head != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
