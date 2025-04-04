#include "lists.h"

/**
 * free_dlistint - free all of nodes of double linked list.
 * @head: pointer to first node.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *check;

	start = head;
	while (start != NULL)
	{
		check = start->next;
		free(start);
		start = check;
	}
}
