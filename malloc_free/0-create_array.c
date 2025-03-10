#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @c: The character
 * @size: the size of the array
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	while (i < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
