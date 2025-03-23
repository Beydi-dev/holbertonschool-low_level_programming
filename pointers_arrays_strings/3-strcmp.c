#include "main.h"


/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Value of s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
