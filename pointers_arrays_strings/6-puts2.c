#include "main.h"

/**
 * puts2 - Prints every other character
 * @str: The parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int a = 2;

	while (str[i])
	{
		if (a == 2)
		{
			_putchar(str[i]);
			a = 0;
		}
		else
		{
			a++;
			i++;
		}
	}
	_putchar('\n');
}
