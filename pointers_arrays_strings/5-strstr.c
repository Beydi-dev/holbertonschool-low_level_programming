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
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
