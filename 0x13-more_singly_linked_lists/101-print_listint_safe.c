#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This counts the num of unique nodes
 * in a looped listint_t linked list.
 * @head: The head pointer of the listint_t to check
 * Return: If the list is not looped - 0
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *rabbit, *goat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);
	rabbit = head->next;
	goat = (head->next)->next;
	while (goat)
	{
	if (rabbit == goat)
	{
	rabbit = head;
	while (rabbit != goat)
	{
		nodes++;
		rabbit = rabbit->next;
		goat = goat->next;
	}
	rabbit = rabbit->next;
	while (rabbit != goat)
	{
		nodes++;
		rabbit = rabbit->next;
	}
	return (nodes);
	}
		rabbit = rabbit->next;
		goat = (goat->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - This prints a listint_t list safely.
 * @head: The head pointer of the listint_t list
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, num = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	}
	else
	{
	for (num = 0; num < nodes; num++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
