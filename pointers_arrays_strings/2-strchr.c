#include "main.h"


/**
 * _strchr - locates a character in a string
 * @s: The string
 * @c:the character to be found
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	return (0);
}
