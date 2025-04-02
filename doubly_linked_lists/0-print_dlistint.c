#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the first node of the list.
 *
 * Return: Number of nodes printed.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *ptr;

	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
