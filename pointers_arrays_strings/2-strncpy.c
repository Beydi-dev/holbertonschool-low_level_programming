#include "main.h"

/**
 *_strncpy - Copies the string pointed by src to dest
 *@src: The source
 *@dest: The destination
 *@n: The counter
 *Return: Destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
		return (dest);
}
