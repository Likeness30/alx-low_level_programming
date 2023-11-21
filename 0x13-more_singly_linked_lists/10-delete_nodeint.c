#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list
 * @head: Head pointer
 * @index: index of the node to delete
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	for (k = 0; k < index - 1; k++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (k);
}
