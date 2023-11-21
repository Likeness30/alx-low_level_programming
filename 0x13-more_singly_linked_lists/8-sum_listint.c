#include "lists.h"

/**
 * sum_listint - This calculates the sum of all the data in  listint_t list
 * @head: The head  node in the linked list
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head == NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
