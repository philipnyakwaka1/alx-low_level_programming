#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a particular index
 * @head: pointer to head node
 * @idx: index at which node is to be inserted
 * @n: number
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int count;


	if (head == NULL)
		return (NULL);
	count = 0;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	ptr = *head;
	while (ptr != NULL)
	{
		if (idx == 0)
		{
			temp->next = ptr;
			*head = temp;
			return (temp);
		}
		if (count == idx - 1)
		{
			temp->next = ptr->next;
			ptr->next = temp;
			return (temp);
		}
		else
		{
			temp = temp->next;
		}

		ptr = ptr->next;
		count++;
	}
	return (temp);
}
