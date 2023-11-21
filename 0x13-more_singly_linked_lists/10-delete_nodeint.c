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
	listint_t *tmp, *count = *head;

	if (count == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(count);
		return (1);
	}
	for (k = 0; k < (index - 1); k++)
	{
		if (count->next == NULL)
			return (-1);
		count = count->next;
	}
	tmp = count->next;
	count->next = tmp->next;
	free(tmp);
	return (1);
}
