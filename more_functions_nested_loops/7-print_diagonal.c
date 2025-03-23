#include "main.h"

/**
 * print_diagonal - Prints \ depending on n
 * @n: the parameter
 *
 * Return: the special character
 */

void print_diagonal(int n)
{
	int i = 0; /* i pour itÃrer */
	int c = 0; /* c pour compter les espaces nÃcessaires*/

	if (n > 0)
	{
		while (i < n)
		{
			c = 0;
			while (c < i)
			{
				_putchar(' ');
				c++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar ('\n');
	}
}
