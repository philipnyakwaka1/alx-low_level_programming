#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of a linked list
 * @head: double pointer to head node
 * @n: value held in the node
 * Return: pointer to new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
