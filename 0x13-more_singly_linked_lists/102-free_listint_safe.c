#include "lists.h"

/**
 * free_listint_safe - This function frees a linked list
 * @h: The head pointer in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int d;
	listint_t *tmp;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
	d = *h - (*h)->next;
	if (d > 0)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		count++;
	}
	else
	{
		free(*h);
		*h = NULL;
		count++;
	break;
	}
	}

	*h = NULL;
	return (count);
}
