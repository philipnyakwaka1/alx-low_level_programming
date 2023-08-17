#include "lists.h"
/**
 * add_dnodeint_end - adds node at end of dlistint_t
 * @head: head node
 * @n: value stored in new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	ptr = *head;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (ptr == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;
	return (temp);
}
