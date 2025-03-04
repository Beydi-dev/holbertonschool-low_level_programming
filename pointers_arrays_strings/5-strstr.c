#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string
 * @needle: The substring
 * Return: char or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (0);
}
