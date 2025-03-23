#include "main.h"

/**
 * print_rev - Prints the string in reverse followed by a new line
 * @s: The parameter
 *
 * Return: the string in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
