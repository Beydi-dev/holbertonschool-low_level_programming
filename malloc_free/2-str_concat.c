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
 * str_concat - concatenetes two strings
 * @s1: The first string
 * @s2: The second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
