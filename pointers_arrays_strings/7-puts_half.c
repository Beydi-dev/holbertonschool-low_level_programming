#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Prints second half of a string
 * @str: the array
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = _strlen(str);

	if (length % 2 == 0)
	{
		int div = length / 2;

		while (str[div])
		{
			_putchar(str[div]);
			div++;
		}
	}
	else if (length % 2 != 0)
	{
		int n = ((length + 1) / 2);

		while (str[n])
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}

