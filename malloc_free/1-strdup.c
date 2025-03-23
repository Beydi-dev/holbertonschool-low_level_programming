#include "main.h"
#include <stdlib.h>

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


/**
 * _strdup - copy of str to a newly allocated space
 * @str: the string in parameter
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(_strlen(str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
