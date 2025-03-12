#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: The parameter
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(unsigned int) * b);

	if (!ptr)
		exit(98);
	return (ptr);
}
