#include "main.h"

/**
 * _puts - Prints the string passed in parameter
 * @str: parameter
 *
 * Return: string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
