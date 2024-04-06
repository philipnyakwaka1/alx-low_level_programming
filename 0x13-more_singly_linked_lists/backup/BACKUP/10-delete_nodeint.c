#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a particular index
 * @head: pointer to head node
 * @index: index at which node is to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp, *current;
	unsigned int count;


	if (*head == NULL)
		return (-1);
	count = 0;
	ptr = *head;
	temp = *head;
	current = *head;
	while (ptr != NULL)
	{
		if (index == 0)
		{
			*head = temp->next;
			free(ptr);
			ptr = NULL;
			current = NULL;
			temp = NULL;
			return (1);
		}
		if (count == index - 1)
		{
			temp = (ptr->next)->next;
			current = ptr->next;
			free(current);
			current = NULL;
			ptr->next = temp;
			return (1);

		}
		ptr = ptr->next;
		temp = temp->next;
		current = current->next;
		count++;
	}
	return (-1);
}
