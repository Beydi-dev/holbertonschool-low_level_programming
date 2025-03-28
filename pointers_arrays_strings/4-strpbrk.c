#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string
 * @accept:the string to be searched
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
