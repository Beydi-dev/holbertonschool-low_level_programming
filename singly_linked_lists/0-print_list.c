#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a linked list of type list_t.
 * @h: Pointer to the first node of the list.
 *
 * Return: The total number of nodes in the list.
 *
 * This function loops through each node of the linked list.
 * For each node, it prints:
 * - "[0] (nil)" if the string is NULL.
 * - Otherwise, it prints the length of the string and the string itself.
 * It returns the total number of nodes traversed.
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
