#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string
 * @needle: The substring
 * Return: char or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack == *needle)
			{
				return (haystack);
				needle++;
			}
			else
			{
				haystack++;
			}
		}
		haystack++;
	}
	return (0);
}
