#include "lists.h"

/**
 * *add_nodeint - This function adds a new node
 * @head: The head pointer
 * @n: Number to add to list
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(listint_t));

	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
