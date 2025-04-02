#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer to the first node of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *ptr;

	ptr = h;

	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
