#include "lists.h"


/**
 * get_dnodeint_at_index - Gets the node at a specific index.
 * @head: Pointer to the first node of the list.
 * @index: Index of the node to get.
 *
 * Return: Pointer to the node, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	while (ptr != NULL)
	{
		if (i == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
