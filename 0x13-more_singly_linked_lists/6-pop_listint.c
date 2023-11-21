#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a linked list
 * @head: Head pointer to the first element in the linked list
 * Return: The head node’s data (n), or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
	{
		return (0);
	}
	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (count);
}
