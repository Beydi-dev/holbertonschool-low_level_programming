#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string
 * @needle: The substring
 * Return: char or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h_start = haystack;
		char *n_ptr = needle;
		while (*h_start == *n_ptr && *n_ptr != '\0')
		{
			h_start++;
			n_ptr++;
		}
		if (*n_ptr == '\0')
		{
			return (haystack);
			haystack++;
		}
	}
	return (0);
}

