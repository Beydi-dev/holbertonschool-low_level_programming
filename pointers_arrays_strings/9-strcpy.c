#include "main.h"

/**
 *_strcpy - Copies the string pointed by src to dest
 * @src: The source
 *@dest: The destination
 * Return: Destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
