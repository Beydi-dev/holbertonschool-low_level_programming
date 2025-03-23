#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: The parameter
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
