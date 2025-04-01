#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 *
 * This function allocates memory for a new node,
 * duplicates the given string into the node,
 * sets its length, and links it at the beginning of the list.
 * If memory allocation or string duplication fails, it returns NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
/* first we create the new node and checking if the malloc fails */
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	/* then duplicating str and checking if strdup fails*/
	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	/* assigning newNode to the head and head to newNode*/
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
