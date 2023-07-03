#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @head: head node of the list
 * @n: integer to be added
 * Return: address of new element or null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	temp->next = *head;
	*head = temp;
	return (*head);
}
