#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This funtion prints all the elements of a listint_t list.
 * @h: The head of the node
 *
 *Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
