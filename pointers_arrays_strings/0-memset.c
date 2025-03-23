#include "main.h"

/**
 * _memset - Prints the last digit of a number.
 * @n: The number in question
 * @s: the string
 * @b: the replacement character
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
