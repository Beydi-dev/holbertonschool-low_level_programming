#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list of type list_t.
 * @h: Pointer to the first node of the list.
 *
 * Return: The total number of nodes in the list.
 *
 * This function iterates through the linked list and counts
 * each node until it reaches the end (NULL).
 * It returns the count as the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
