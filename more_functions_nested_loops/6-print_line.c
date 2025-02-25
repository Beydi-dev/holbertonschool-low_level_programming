#include "main.h"

/**
 * print_line - Prints '_' depending on n
 * @n: the parameter
 *
 * Return: _
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar ('_');
			i++;
		}
		_putchar ('\n');
	}
	else
		_putchar ('\n');
}
