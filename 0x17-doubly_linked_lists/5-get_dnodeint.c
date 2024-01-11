#include "lists.h"

/**
 * get_dnodeint_at_index - This returns the nth node of a dlistint_t
 * linked list
 * @head: Pointer to head of the list
 * @index: The index of the node to search for, starting from 0
 * Return: nth node otherwise null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *tmp;

	count  = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == count)
	return (tmp);
	count++;
	tmp = tmp->next;
	}
	return (NULL);
}
