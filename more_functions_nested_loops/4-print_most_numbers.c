#include "main.h"

/**
 * print_most_numbers - Prints the last digit of a number.
 * @:
 *
 * Return: all numbers from 0 to 9 except 2 or 4
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i++;
		}
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
