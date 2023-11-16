#include "lists.h"

/**
 * list_len - This returns the number of elements in a linked list
 * @h: list_t list
 * Return: The elements in h
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
	h = h->next;
	}
	return (x);
}
