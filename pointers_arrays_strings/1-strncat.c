#include "main.h"

/**
 * _strncat - Prints the last digit of a number.
 * @dest: destination
 * @src: source
 * @n: counter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j] != '0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
