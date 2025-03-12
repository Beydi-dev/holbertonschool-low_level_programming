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
 * string_nconcat - concatenetes two strings
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes of s2 to be concatened
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1, i = 0;
	unsigned int len2, j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
		n = len2;

	ptr = malloc(len1 + n + 1);

	if (!ptr)
	{
		return (NULL);
	}

	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
