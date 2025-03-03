#include "main.h"

/**
 * _memset - Prints the last digit of a number.
 * @n: The number in question
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	while(s && n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
