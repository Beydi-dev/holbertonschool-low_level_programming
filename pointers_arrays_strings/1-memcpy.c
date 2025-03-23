#include "main.h"


/**
 * _memcpy - Prints the last digit of a number.
 * @dest: the destination
 * @src: the source
 * @n: The number in question.
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
