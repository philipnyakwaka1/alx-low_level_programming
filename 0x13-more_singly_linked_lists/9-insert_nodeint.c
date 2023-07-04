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

	count = 1;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	ptr = *head;
	while (ptr != NULL)
	{
		if (count == idx)
		{
			temp->next = ptr->next;
			ptr->next = temp;
			break;
		}

		ptr = ptr->next;
		count++;
	}
	return (temp);
}
