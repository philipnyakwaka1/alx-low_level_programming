#include "lists.h"
/**
 * add_dnodeint - adds node at beginning of dlistint_t
 * @head: head node
 * @n: value in new node
 * Return: pointer to new node, else NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (*head);
}
