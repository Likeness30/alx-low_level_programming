#include "lists.h"

/**
 * add_nodeint_end - This function adds a node at the end of the list
 * @head: The head pointer
 * @n: The number to add to list
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (head == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
